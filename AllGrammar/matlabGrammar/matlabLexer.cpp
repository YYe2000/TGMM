
// Generated from matlab.g4 by ANTLR 4.13.0


#include "matlabLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct MatlabLexerStaticData final {
  MatlabLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MatlabLexerStaticData(const MatlabLexerStaticData&) = delete;
  MatlabLexerStaticData(MatlabLexerStaticData&&) = delete;
  MatlabLexerStaticData& operator=(const MatlabLexerStaticData&) = delete;
  MatlabLexerStaticData& operator=(MatlabLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag matlablexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
MatlabLexerStaticData *matlablexerLexerStaticData = nullptr;

void matlablexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (matlablexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(matlablexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<MatlabLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
      "T__17", "T__18", "ARRAYMUL", "ARRAYDIV", "ARRAYRDIV", "ARRAYPOW", 
      "BREAK", "RETURN", "FUNCTION", "FOR", "WHILE", "END", "GLOBAL", "IF", 
      "CLEAR", "ELSE", "ELSEIF", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "TRANSPOSE", 
      "NCTRANSPOSE", "STRING_LITERAL", "IDENTIFIER", "CONSTANT", "NUMBER", 
      "E", "SIGN", "CR", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'('", "')'", "'['", "']'", "':'", "','", "'+'", "'-'", "'~'", 
      "'*'", "'/'", "'\\'", "'^'", "'<'", "'>'", "'&'", "'|'", "'='", "';'", 
      "'.*'", "'.\\'", "'./'", "'.^'", "'break'", "'return'", "'function'", 
      "'for'", "'while'", "'end'", "'global'", "'if'", "'clear'", "'else'", 
      "'elseif'", "'<='", "'>='", "'=='", "'~='", "'transpose'", "'.''"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "ARRAYMUL", "ARRAYDIV", "ARRAYRDIV", "ARRAYPOW", "BREAK", 
      "RETURN", "FUNCTION", "FOR", "WHILE", "END", "GLOBAL", "IF", "CLEAR", 
      "ELSE", "ELSEIF", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "TRANSPOSE", 
      "NCTRANSPOSE", "STRING_LITERAL", "IDENTIFIER", "CONSTANT", "CR", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,45,292,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,1,0,1,0,1,1,1,
  	1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,
  	1,10,1,11,1,11,1,12,1,12,1,13,1,13,1,14,1,14,1,15,1,15,1,16,1,16,1,17,
  	1,17,1,18,1,18,1,19,1,19,1,19,1,20,1,20,1,20,1,21,1,21,1,21,1,22,1,22,
  	1,22,1,23,1,23,1,23,1,23,1,23,1,23,1,24,1,24,1,24,1,24,1,24,1,24,1,24,
  	1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,26,1,26,1,26,1,26,1,27,
  	1,27,1,27,1,27,1,27,1,27,1,28,1,28,1,28,1,28,1,29,1,29,1,29,1,29,1,29,
  	1,29,1,29,1,30,1,30,1,30,1,31,1,31,1,31,1,31,1,31,1,31,1,32,1,32,1,32,
  	1,32,1,32,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,34,1,34,1,34,1,35,1,35,
  	1,35,1,36,1,36,1,36,1,37,1,37,1,37,1,38,1,38,1,38,1,38,1,38,1,38,1,38,
  	1,38,1,38,1,38,1,39,1,39,1,39,1,40,1,40,1,40,1,40,5,40,241,8,40,10,40,
  	12,40,244,9,40,1,40,1,40,1,41,1,41,5,41,250,8,41,10,41,12,41,253,9,41,
  	1,42,1,42,1,42,3,42,258,8,42,1,42,1,42,3,42,262,8,42,1,43,4,43,265,8,
  	43,11,43,12,43,266,1,43,1,43,4,43,271,8,43,11,43,12,43,272,3,43,275,8,
  	43,1,44,1,44,1,45,1,45,1,46,4,46,282,8,46,11,46,12,46,283,1,47,4,47,287,
  	8,47,11,47,12,47,288,1,47,1,47,0,0,48,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,
  	8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,
  	20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,59,30,61,31,
  	63,32,65,33,67,34,69,35,71,36,73,37,75,38,77,39,79,40,81,41,83,42,85,
  	43,87,0,89,0,91,0,93,44,95,45,1,0,7,1,0,39,39,2,0,65,90,97,122,4,0,48,
  	57,65,90,95,95,97,122,2,0,69,69,101,101,2,0,43,43,45,45,2,0,10,10,13,
  	13,2,0,9,9,32,32,298,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,
  	0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,
  	1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,
  	0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,
  	0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,
  	1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,
  	0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,0,0,
  	0,73,1,0,0,0,0,75,1,0,0,0,0,77,1,0,0,0,0,79,1,0,0,0,0,81,1,0,0,0,0,83,
  	1,0,0,0,0,85,1,0,0,0,0,93,1,0,0,0,0,95,1,0,0,0,1,97,1,0,0,0,3,99,1,0,
  	0,0,5,101,1,0,0,0,7,103,1,0,0,0,9,105,1,0,0,0,11,107,1,0,0,0,13,109,1,
  	0,0,0,15,111,1,0,0,0,17,113,1,0,0,0,19,115,1,0,0,0,21,117,1,0,0,0,23,
  	119,1,0,0,0,25,121,1,0,0,0,27,123,1,0,0,0,29,125,1,0,0,0,31,127,1,0,0,
  	0,33,129,1,0,0,0,35,131,1,0,0,0,37,133,1,0,0,0,39,135,1,0,0,0,41,138,
  	1,0,0,0,43,141,1,0,0,0,45,144,1,0,0,0,47,147,1,0,0,0,49,153,1,0,0,0,51,
  	160,1,0,0,0,53,169,1,0,0,0,55,173,1,0,0,0,57,179,1,0,0,0,59,183,1,0,0,
  	0,61,190,1,0,0,0,63,193,1,0,0,0,65,199,1,0,0,0,67,204,1,0,0,0,69,211,
  	1,0,0,0,71,214,1,0,0,0,73,217,1,0,0,0,75,220,1,0,0,0,77,223,1,0,0,0,79,
  	233,1,0,0,0,81,236,1,0,0,0,83,247,1,0,0,0,85,254,1,0,0,0,87,264,1,0,0,
  	0,89,276,1,0,0,0,91,278,1,0,0,0,93,281,1,0,0,0,95,286,1,0,0,0,97,98,5,
  	40,0,0,98,2,1,0,0,0,99,100,5,41,0,0,100,4,1,0,0,0,101,102,5,91,0,0,102,
  	6,1,0,0,0,103,104,5,93,0,0,104,8,1,0,0,0,105,106,5,58,0,0,106,10,1,0,
  	0,0,107,108,5,44,0,0,108,12,1,0,0,0,109,110,5,43,0,0,110,14,1,0,0,0,111,
  	112,5,45,0,0,112,16,1,0,0,0,113,114,5,126,0,0,114,18,1,0,0,0,115,116,
  	5,42,0,0,116,20,1,0,0,0,117,118,5,47,0,0,118,22,1,0,0,0,119,120,5,92,
  	0,0,120,24,1,0,0,0,121,122,5,94,0,0,122,26,1,0,0,0,123,124,5,60,0,0,124,
  	28,1,0,0,0,125,126,5,62,0,0,126,30,1,0,0,0,127,128,5,38,0,0,128,32,1,
  	0,0,0,129,130,5,124,0,0,130,34,1,0,0,0,131,132,5,61,0,0,132,36,1,0,0,
  	0,133,134,5,59,0,0,134,38,1,0,0,0,135,136,5,46,0,0,136,137,5,42,0,0,137,
  	40,1,0,0,0,138,139,5,46,0,0,139,140,5,92,0,0,140,42,1,0,0,0,141,142,5,
  	46,0,0,142,143,5,47,0,0,143,44,1,0,0,0,144,145,5,46,0,0,145,146,5,94,
  	0,0,146,46,1,0,0,0,147,148,5,98,0,0,148,149,5,114,0,0,149,150,5,101,0,
  	0,150,151,5,97,0,0,151,152,5,107,0,0,152,48,1,0,0,0,153,154,5,114,0,0,
  	154,155,5,101,0,0,155,156,5,116,0,0,156,157,5,117,0,0,157,158,5,114,0,
  	0,158,159,5,110,0,0,159,50,1,0,0,0,160,161,5,102,0,0,161,162,5,117,0,
  	0,162,163,5,110,0,0,163,164,5,99,0,0,164,165,5,116,0,0,165,166,5,105,
  	0,0,166,167,5,111,0,0,167,168,5,110,0,0,168,52,1,0,0,0,169,170,5,102,
  	0,0,170,171,5,111,0,0,171,172,5,114,0,0,172,54,1,0,0,0,173,174,5,119,
  	0,0,174,175,5,104,0,0,175,176,5,105,0,0,176,177,5,108,0,0,177,178,5,101,
  	0,0,178,56,1,0,0,0,179,180,5,101,0,0,180,181,5,110,0,0,181,182,5,100,
  	0,0,182,58,1,0,0,0,183,184,5,103,0,0,184,185,5,108,0,0,185,186,5,111,
  	0,0,186,187,5,98,0,0,187,188,5,97,0,0,188,189,5,108,0,0,189,60,1,0,0,
  	0,190,191,5,105,0,0,191,192,5,102,0,0,192,62,1,0,0,0,193,194,5,99,0,0,
  	194,195,5,108,0,0,195,196,5,101,0,0,196,197,5,97,0,0,197,198,5,114,0,
  	0,198,64,1,0,0,0,199,200,5,101,0,0,200,201,5,108,0,0,201,202,5,115,0,
  	0,202,203,5,101,0,0,203,66,1,0,0,0,204,205,5,101,0,0,205,206,5,108,0,
  	0,206,207,5,115,0,0,207,208,5,101,0,0,208,209,5,105,0,0,209,210,5,102,
  	0,0,210,68,1,0,0,0,211,212,5,60,0,0,212,213,5,61,0,0,213,70,1,0,0,0,214,
  	215,5,62,0,0,215,216,5,61,0,0,216,72,1,0,0,0,217,218,5,61,0,0,218,219,
  	5,61,0,0,219,74,1,0,0,0,220,221,5,126,0,0,221,222,5,61,0,0,222,76,1,0,
  	0,0,223,224,5,116,0,0,224,225,5,114,0,0,225,226,5,97,0,0,226,227,5,110,
  	0,0,227,228,5,115,0,0,228,229,5,112,0,0,229,230,5,111,0,0,230,231,5,115,
  	0,0,231,232,5,101,0,0,232,78,1,0,0,0,233,234,5,46,0,0,234,235,5,39,0,
  	0,235,80,1,0,0,0,236,242,5,39,0,0,237,241,8,0,0,0,238,239,5,39,0,0,239,
  	241,5,39,0,0,240,237,1,0,0,0,240,238,1,0,0,0,241,244,1,0,0,0,242,240,
  	1,0,0,0,242,243,1,0,0,0,243,245,1,0,0,0,244,242,1,0,0,0,245,246,5,39,
  	0,0,246,82,1,0,0,0,247,251,7,1,0,0,248,250,7,2,0,0,249,248,1,0,0,0,250,
  	253,1,0,0,0,251,249,1,0,0,0,251,252,1,0,0,0,252,84,1,0,0,0,253,251,1,
  	0,0,0,254,261,3,87,43,0,255,257,3,89,44,0,256,258,3,91,45,0,257,256,1,
  	0,0,0,257,258,1,0,0,0,258,259,1,0,0,0,259,260,3,87,43,0,260,262,1,0,0,
  	0,261,255,1,0,0,0,261,262,1,0,0,0,262,86,1,0,0,0,263,265,2,48,57,0,264,
  	263,1,0,0,0,265,266,1,0,0,0,266,264,1,0,0,0,266,267,1,0,0,0,267,274,1,
  	0,0,0,268,270,5,46,0,0,269,271,2,48,57,0,270,269,1,0,0,0,271,272,1,0,
  	0,0,272,270,1,0,0,0,272,273,1,0,0,0,273,275,1,0,0,0,274,268,1,0,0,0,274,
  	275,1,0,0,0,275,88,1,0,0,0,276,277,7,3,0,0,277,90,1,0,0,0,278,279,7,4,
  	0,0,279,92,1,0,0,0,280,282,7,5,0,0,281,280,1,0,0,0,282,283,1,0,0,0,283,
  	281,1,0,0,0,283,284,1,0,0,0,284,94,1,0,0,0,285,287,7,6,0,0,286,285,1,
  	0,0,0,287,288,1,0,0,0,288,286,1,0,0,0,288,289,1,0,0,0,289,290,1,0,0,0,
  	290,291,6,47,0,0,291,96,1,0,0,0,11,0,240,242,251,257,261,266,272,274,
  	283,288,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  matlablexerLexerStaticData = staticData.release();
}

}

matlabLexer::matlabLexer(CharStream *input) : Lexer(input) {
  matlabLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *matlablexerLexerStaticData->atn, matlablexerLexerStaticData->decisionToDFA, matlablexerLexerStaticData->sharedContextCache);
}

matlabLexer::~matlabLexer() {
  delete _interpreter;
}

std::string matlabLexer::getGrammarFileName() const {
  return "matlab.g4";
}

const std::vector<std::string>& matlabLexer::getRuleNames() const {
  return matlablexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& matlabLexer::getChannelNames() const {
  return matlablexerLexerStaticData->channelNames;
}

const std::vector<std::string>& matlabLexer::getModeNames() const {
  return matlablexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& matlabLexer::getVocabulary() const {
  return matlablexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView matlabLexer::getSerializedATN() const {
  return matlablexerLexerStaticData->serializedATN;
}

const atn::ATN& matlabLexer::getATN() const {
  return *matlablexerLexerStaticData->atn;
}




void matlabLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  matlablexerLexerInitialize();
#else
  ::antlr4::internal::call_once(matlablexerLexerOnceFlag, matlablexerLexerInitialize);
#endif
}
