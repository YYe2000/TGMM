#include "cuda_runtime.h"
#include <stdint.h>
#include <iostream>
#include <map>
//Thrust
#include <thrust/host_vector.h>
#include <thrust/device_vector.h>
#include <thrust/sequence.h>
#include <thrust/sort.h>
#include <thrust/iterator/counting_iterator.h>
#include <thrust/execution_policy.h>

#include "cuda_helpers.cuh"
//#include "device_sa.cuh"

typedef uint8_t U8;
typedef uint32_t U32;
struct FiveTuple{
    int first_token;
    //int second_token;
    //int height;
    int first_lable;
    int second_lable;
};

using namespace thrust;

__device__ bool operator<(const FiveTuple &a, const FiveTuple &b) {
	if(a.first_lable == b.first_lable && a.second_lable == b.second_lable) {
		return a.first_token < b.first_token;
	} else if(a.first_lable == b.first_lable) {
		return a.second_lable > b.second_lable;
	} else {
		return a.first_lable > b.first_lable;
	}
};

//Pack 4 U8's into an int
void pack(device_vector<U8>& data, device_vector<int>& keys){
	
	U8 *data_r = raw(data);
	int *keys_r = raw(keys);

	auto r = counting_iterator<int>(0);
	int n = keys.size();

	for_each(r, r + n, [=] __device__(int i) {
		
		int packed = data_r[i];
		
		packed <<= 8;
		if (i + 1 < n)
			packed |= data_r[i+1];
		packed <<= 8;
		if (i + 2 < n)
			packed |= data_r[i + 2];
		packed <<= 8;
		if (i + 3 < n)
			packed |= data_r[i + 3];
		
		keys_r[i] = packed;

	});
}

void mark_head(device_vector<int>& keys, device_vector<U8>& buckets, device_vector<int>& sa){

	int *keys_r = raw(keys);
	U8 *bucket_r = raw(buckets);
	int *sa_r = raw(sa);
	// FiveTuple *ft_r = raw(ft);
	// int *token_lable_r = raw(token_lable);
	// int *current_index_r = raw(current_index);
	auto r = counting_iterator<int>(0);
	int n = keys.size();
	// int nn = heights.size();
	for_each(r, r + n, [=] __device__(int i) {
		//Already marked - don't need to do anything
		if (bucket_r[i] == 1){
			return;
		}
		//First item is always head
		else if (i == 0){
			bucket_r[i] = 1;
		}
		//Is different than previous item - must be a bucket head
		else if (keys_r[i] != keys_r[i - 1]){
			bucket_r[i] = 1;
		}
	});
}

void get_rank(device_vector<U8>& buckets, device_vector<int>& b_scan, device_vector<int>& rank, device_vector<int>& sa){

	//Scan bucket heads
	//Copy buckets into rank before we scan it into b_scan - scanning 8 bit types creates problems
	copy(buckets.begin(), buckets.end(), rank.begin());
	inclusive_scan(rank.begin(), rank.end(), b_scan.begin());

	//Calculate rank - stores rank inverse to the suffix array
	// e.g. rank[3] stores the bucket position of sa[?] = 3
	int *rank_r = raw(rank);
	int *sa_r = raw(sa);
	int *b_scan_r = raw(b_scan);

	auto r = counting_iterator<int>(0);
	int n = sa.size();

	for_each(r, r + n, [=] __device__(int i) {
		int suffix = sa_r[i];
		rank_r[suffix] = b_scan_r[i];
	});

}

void get_sort_keys(device_vector<int>& keys, device_vector<int>& rank, device_vector<int>& sa, device_vector<U8>& buckets, int step){

	int *rank_r = raw(rank);
	int *sa_r = raw(sa);
	int *keys_r = raw(keys);
	U8 *buckets_r = raw(buckets);

	auto r = counting_iterator<int>(0);
	int n = keys.size();

	for_each(r, r + n, [=] __device__(int i) {
		//Check if already sorted
		//If is last item - just need to check its flag
		if (buckets_r[i] == 1 && i == n - 1)
			return;
		//Otherwise, if the current item and its next item are flagged, current item must be already sorted
		else if (buckets_r[i] == 1 && buckets_r[i + 1])
			return;

		//Set sort keys
		int next_suffix = sa_r[i] + step;
		//Went off end of string - must be lexicographically less than rest of bucket
		if (next_suffix >= n)
			keys_r[i] = -next_suffix;

		//Else set sort key to rank of next suffix
		else
			keys_r[i] = rank_r[next_suffix];
	});
}


//We have to do a 2 pass sort here to get a "segmented sort"
void sort_sa(device_vector<int>& keys, device_vector<int>& b_scan, device_vector<int>& sa){

	stable_sort_by_key(keys.begin(), keys.end(), make_zip_iterator(make_tuple(sa.begin(), b_scan.begin())));
	stable_sort_by_key(b_scan.begin(), b_scan.end(), make_zip_iterator(make_tuple(sa.begin(), keys.begin())));
}

int device_sa(const unsigned char *data_in, int *sa_in, int n){
	
	try{
		//Copy up to device vectors
		device_vector<U8> data(data_in, data_in + n);
		//device_vector<int> token_lable(token_lable_in, token_lable_in + n);
		device_vector<int> sa(n);
		
		//Init suffix array
		sequence(sa.begin(), sa.end());

		device_vector<int> keys(n); //Sort keys
		device_vector<U8> buckets(n, 0); //Bucket head flags
		device_vector<int> b_scan(n); //Scanned head flags
		device_vector<int> rank(n); //Rank of suffixes

		//Pack 4 bytes into keys so we can radix sort to H order 4 before prefix doubling
		pack(data, keys);
		
		//Radix sort as unsigned 
		//We have to cast keys to a raw pointer then to a device_ptr to convince thrust its unsigned
		unsigned int *keys_r = (unsigned int*)raw(keys);
		device_ptr<unsigned int> keys_ptr(keys_r);
		stable_sort_by_key(keys_ptr, keys_ptr + n, sa.begin());
		//int *token_lable_r = raw(token_lable);
		int step = 4;
		//Begin prefix doubling loop - runs at most log(n) times
		while (true){

			//Mark bucket heads
			mark_head(keys, buckets, sa);

			//Check if we are done, i.e. every item is a bucket head
			int result = reduce(buckets.begin(), buckets.end(), INT_MAX, minimum<int>());
			if (result == 1) break;

			//Get rank of suffixes
			get_rank(buckets, b_scan, rank, sa);

			//Use rank as new sort keys
			get_sort_keys(keys, rank, sa, buckets, step);

			//Sort
			sort_sa(keys, b_scan, sa);
			// if(step >= 16) {
			// 	int *keys_r = raw(keys);
			// 	auto r = counting_iterator<int>(0);
			// 	int n = keys.size();
				// for_each(r+1, r + n, [=] __device__(int i) {
				// 	if (keys_r[i] == keys_r[i - 1]){
				// 		int temp_index = current_index_r[0]++;
				// 		//current_index_r[0] = current_index_r[0] + 1;
				// 		// int temp_index = atomicAdd(current_index_r, 1);
				// 		ft_r[temp_index].first_token = sa_r[i-1];
				// 		ft_r[temp_index].second_token = sa_r[i];
				// 		ft_r[temp_index].height = step;
				// 		ft_r[temp_index].first_lable = token_lable_r[sa_r[i-1]];
				// 		ft_r[temp_index].second_lable = token_lable_r[sa_r[i]];
				// 	}
				// });
			
			/*
			std::cout << "-----\n";
			print("SA", sa);
			print("Keys", keys);
			print("Buckets", buckets);
			print("rank", rank);
			std::cout << "-----\n";
			*/
			step *= 2;

			//Just in case, check for infinite loop
			if (step < 0){
				std::cout << "Error: Prefix doubling infinite loop.\n";
				return 1;
			}
		}
		// U8 *data_r = raw(data);
		// auto r = counting_iterator<int>(0);
		// int n = sa.size();
		// for_each(r+1, r + n, [=] __device__(int i) {
		// 	int s1 = sa_r[i-1], s2 = sa_r[i];
		// 	int j = 0;
		// 	for (; j < 16; j++)
		// 	{
		// 		if (data_r[s1+j] != data_r[s2+j]) break;
		// 	}
			
		// 	if (j >= 16){
		// 		int temp_index = current_index_r[0]++;
		// 		ft_r[temp_index].first_token = sa_r[i-1];
		// 		ft_r[temp_index].second_token = sa_r[i];
		// 		ft_r[temp_index].height = 16;
		// 		ft_r[temp_index].first_lable = token_lable_r[sa_r[i-1]];
		// 		ft_r[temp_index].second_lable = token_lable_r[sa_r[i]];
		// 	}
		// });
		//sort(ft.begin(), ft.end());
		//Copy SA back to host
		safe_cuda(cudaMemcpy(sa_in, raw(sa), sizeof(int)*sa.size(), cudaMemcpyDeviceToHost));
		//int temp_size = current_index[0];
		// safe_cuda(cudaMemcpy(first_key_in, raw(first_key), sizeof(int)*temp_size, cudaMemcpyDeviceToHost));
		// safe_cuda(cudaMemcpy(second_key_in, raw(second_key), sizeof(int)*temp_size, cudaMemcpyDeviceToHost));
		// safe_cuda(cudaMemcpy(heights_in, raw(heights), sizeof(int)*temp_size, cudaMemcpyDeviceToHost));
		//safe_cuda(cudaMemcpy(current_index_in, raw(current_index), sizeof(int), cudaMemcpyDeviceToHost));
		//safe_cuda(cudaMemcpy(ft_in, raw(ft), sizeof(FiveTuple)*ft.size(), cudaMemcpyDeviceToHost));
	}
	catch (thrust::system_error &e)
	{
		std::cerr << "CUDA error: " << e.what() << std::endl;
	}

	return 0;
}

int device_sort(FiveTuple *ft_in, int n) {
	device_vector<FiveTuple> ft(ft_in, ft_in + n);
	sort(ft.begin(), ft.end());
	safe_cuda(cudaMemcpy(ft_in, raw(ft), sizeof(FiveTuple)*ft.size(), cudaMemcpyDeviceToHost));
	return 0;
}