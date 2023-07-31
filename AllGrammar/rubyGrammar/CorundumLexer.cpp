
// Generated from Corundum.g4 by ANTLR 4.13.0


#include "CorundumLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct CorundumLexerStaticData final {
  CorundumLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CorundumLexerStaticData(const CorundumLexerStaticData&) = delete;
  CorundumLexerStaticData(CorundumLexerStaticData&&) = delete;
  CorundumLexerStaticData& operator=(const CorundumLexerStaticData&) = delete;
  CorundumLexerStaticData& operator=(CorundumLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag corundumlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
CorundumLexerStaticData *corundumlexerLexerStaticData = nullptr;

void corundumlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (corundumlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(corundumlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CorundumLexerStaticData>(
    std::vector<std::string>{
      "ESCAPED_QUOTE", "LITERAL", "COMMA", "SEMICOLON", "CRLF", "REQUIRE", 
      "END", "DEF", "RETURN", "PIR", "IF", "ELSE", "ELSIF", "UNLESS", "WHILE", 
      "RETRY", "BREAK", "FOR", "TRUE", "FALSE", "PLUS", "MINUS", "MUL", 
      "DIV", "MOD", "EXP", "EQUAL", "NOT_EQUAL", "GREATER", "LESS", "LESS_EQUAL", 
      "GREATER_EQUAL", "ASSIGN", "PLUS_ASSIGN", "MINUS_ASSIGN", "MUL_ASSIGN", 
      "DIV_ASSIGN", "MOD_ASSIGN", "EXP_ASSIGN", "BIT_AND", "BIT_OR", "BIT_XOR", 
      "BIT_NOT", "BIT_SHL", "BIT_SHR", "AND", "OR", "NOT", "LEFT_RBRACKET", 
      "RIGHT_RBRACKET", "LEFT_SBRACKET", "RIGHT_SBRACKET", "NIL", "SL_COMMENT", 
      "ML_COMMENT", "WS", "INT", "FLOAT", "ID", "ID_GLOBAL", "ID_FUNCTION"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "", "','", "';'", "", "'require'", "'end'", "'def'", "'return'", 
      "'pir'", "'if'", "'else'", "'elsif'", "'unless'", "'while'", "'retry'", 
      "'break'", "'for'", "'true'", "'false'", "'+'", "'-'", "'*'", "'/'", 
      "'%'", "'**'", "'=='", "'!='", "'>'", "'<'", "'<='", "'>='", "'='", 
      "'+='", "'-='", "'*='", "'/='", "'%='", "'**='", "'&'", "'|'", "'^'", 
      "'~'", "'<<'", "'>>'", "", "", "", "'('", "')'", "'['", "']'", "'nil'"
    },
    std::vector<std::string>{
      "", "LITERAL", "COMMA", "SEMICOLON", "CRLF", "REQUIRE", "END", "DEF", 
      "RETURN", "PIR", "IF", "ELSE", "ELSIF", "UNLESS", "WHILE", "RETRY", 
      "BREAK", "FOR", "TRUE", "FALSE", "PLUS", "MINUS", "MUL", "DIV", "MOD", 
      "EXP", "EQUAL", "NOT_EQUAL", "GREATER", "LESS", "LESS_EQUAL", "GREATER_EQUAL", 
      "ASSIGN", "PLUS_ASSIGN", "MINUS_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", 
      "MOD_ASSIGN", "EXP_ASSIGN", "BIT_AND", "BIT_OR", "BIT_XOR", "BIT_NOT", 
      "BIT_SHL", "BIT_SHR", "AND", "OR", "NOT", "LEFT_RBRACKET", "RIGHT_RBRACKET", 
      "LEFT_SBRACKET", "RIGHT_SBRACKET", "NIL", "SL_COMMENT", "ML_COMMENT", 
      "WS", "INT", "FLOAT", "ID", "ID_GLOBAL", "ID_FUNCTION"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,60,407,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,
  	7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,49,
  	7,49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,56,
  	7,56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,1,0,1,0,1,0,1,1,1,1,1,1,
  	5,1,130,8,1,10,1,12,1,133,9,1,1,1,1,1,1,1,1,1,5,1,139,8,1,10,1,12,1,142,
  	9,1,1,1,3,1,145,8,1,1,2,1,2,1,3,1,3,1,4,3,4,152,8,4,1,4,1,4,1,5,1,5,1,
  	5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,
  	1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,
  	12,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,14,1,
  	14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,16,1,16,1,16,1,
  	16,1,16,1,16,1,17,1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,
  	19,1,19,1,19,1,19,1,20,1,20,1,21,1,21,1,22,1,22,1,23,1,23,1,24,1,24,1,
  	25,1,25,1,25,1,26,1,26,1,26,1,27,1,27,1,27,1,28,1,28,1,29,1,29,1,30,1,
  	30,1,30,1,31,1,31,1,31,1,32,1,32,1,33,1,33,1,33,1,34,1,34,1,34,1,35,1,
  	35,1,35,1,36,1,36,1,36,1,37,1,37,1,37,1,38,1,38,1,38,1,38,1,39,1,39,1,
  	40,1,40,1,41,1,41,1,42,1,42,1,43,1,43,1,43,1,44,1,44,1,44,1,45,1,45,1,
  	45,1,45,1,45,3,45,306,8,45,1,46,1,46,1,46,1,46,3,46,312,8,46,1,47,1,47,
  	1,47,1,47,3,47,318,8,47,1,48,1,48,1,49,1,49,1,50,1,50,1,51,1,51,1,52,
  	1,52,1,52,1,52,1,53,1,53,5,53,334,8,53,10,53,12,53,337,9,53,1,53,3,53,
  	340,8,53,1,53,1,53,1,53,1,53,1,54,1,54,1,54,1,54,1,54,1,54,1,54,1,54,
  	5,54,354,8,54,10,54,12,54,357,9,54,1,54,1,54,1,54,1,54,1,54,1,54,3,54,
  	365,8,54,1,54,1,54,1,54,1,54,1,55,4,55,372,8,55,11,55,12,55,373,1,55,
  	1,55,1,56,4,56,379,8,56,11,56,12,56,380,1,57,5,57,384,8,57,10,57,12,57,
  	387,9,57,1,57,1,57,4,57,391,8,57,11,57,12,57,392,1,58,1,58,5,58,397,8,
  	58,10,58,12,58,400,9,58,1,59,1,59,1,59,1,60,1,60,1,60,3,131,140,355,0,
  	61,1,0,3,1,5,2,7,3,9,4,11,5,13,6,15,7,17,8,19,9,21,10,23,11,25,12,27,
  	13,29,14,31,15,33,16,35,17,37,18,39,19,41,20,43,21,45,22,47,23,49,24,
  	51,25,53,26,55,27,57,28,59,29,61,30,63,31,65,32,67,33,69,34,71,35,73,
  	36,75,37,77,38,79,39,81,40,83,41,85,42,87,43,89,44,91,45,93,46,95,47,
  	97,48,99,49,101,50,103,51,105,52,107,53,109,54,111,55,113,56,115,57,117,
  	58,119,59,121,60,1,0,6,2,0,10,10,13,13,2,0,9,9,32,32,1,0,48,57,3,0,65,
  	90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,1,0,63,63,423,0,3,1,0,0,
  	0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,
  	1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,
  	0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,
  	0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,
  	1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,
  	0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,
  	0,69,1,0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,0,75,1,0,0,0,0,77,1,0,0,0,0,79,
  	1,0,0,0,0,81,1,0,0,0,0,83,1,0,0,0,0,85,1,0,0,0,0,87,1,0,0,0,0,89,1,0,
  	0,0,0,91,1,0,0,0,0,93,1,0,0,0,0,95,1,0,0,0,0,97,1,0,0,0,0,99,1,0,0,0,
  	0,101,1,0,0,0,0,103,1,0,0,0,0,105,1,0,0,0,0,107,1,0,0,0,0,109,1,0,0,0,
  	0,111,1,0,0,0,0,113,1,0,0,0,0,115,1,0,0,0,0,117,1,0,0,0,0,119,1,0,0,0,
  	0,121,1,0,0,0,1,123,1,0,0,0,3,144,1,0,0,0,5,146,1,0,0,0,7,148,1,0,0,0,
  	9,151,1,0,0,0,11,155,1,0,0,0,13,163,1,0,0,0,15,167,1,0,0,0,17,171,1,0,
  	0,0,19,178,1,0,0,0,21,182,1,0,0,0,23,185,1,0,0,0,25,190,1,0,0,0,27,196,
  	1,0,0,0,29,203,1,0,0,0,31,209,1,0,0,0,33,215,1,0,0,0,35,221,1,0,0,0,37,
  	225,1,0,0,0,39,230,1,0,0,0,41,236,1,0,0,0,43,238,1,0,0,0,45,240,1,0,0,
  	0,47,242,1,0,0,0,49,244,1,0,0,0,51,246,1,0,0,0,53,249,1,0,0,0,55,252,
  	1,0,0,0,57,255,1,0,0,0,59,257,1,0,0,0,61,259,1,0,0,0,63,262,1,0,0,0,65,
  	265,1,0,0,0,67,267,1,0,0,0,69,270,1,0,0,0,71,273,1,0,0,0,73,276,1,0,0,
  	0,75,279,1,0,0,0,77,282,1,0,0,0,79,286,1,0,0,0,81,288,1,0,0,0,83,290,
  	1,0,0,0,85,292,1,0,0,0,87,294,1,0,0,0,89,297,1,0,0,0,91,305,1,0,0,0,93,
  	311,1,0,0,0,95,317,1,0,0,0,97,319,1,0,0,0,99,321,1,0,0,0,101,323,1,0,
  	0,0,103,325,1,0,0,0,105,327,1,0,0,0,107,331,1,0,0,0,109,345,1,0,0,0,111,
  	371,1,0,0,0,113,378,1,0,0,0,115,385,1,0,0,0,117,394,1,0,0,0,119,401,1,
  	0,0,0,121,404,1,0,0,0,123,124,5,92,0,0,124,125,5,34,0,0,125,2,1,0,0,0,
  	126,131,5,34,0,0,127,130,3,1,0,0,128,130,8,0,0,0,129,127,1,0,0,0,129,
  	128,1,0,0,0,130,133,1,0,0,0,131,132,1,0,0,0,131,129,1,0,0,0,132,134,1,
  	0,0,0,133,131,1,0,0,0,134,145,5,34,0,0,135,140,5,39,0,0,136,139,3,1,0,
  	0,137,139,8,0,0,0,138,136,1,0,0,0,138,137,1,0,0,0,139,142,1,0,0,0,140,
  	141,1,0,0,0,140,138,1,0,0,0,141,143,1,0,0,0,142,140,1,0,0,0,143,145,5,
  	39,0,0,144,126,1,0,0,0,144,135,1,0,0,0,145,4,1,0,0,0,146,147,5,44,0,0,
  	147,6,1,0,0,0,148,149,5,59,0,0,149,8,1,0,0,0,150,152,5,13,0,0,151,150,
  	1,0,0,0,151,152,1,0,0,0,152,153,1,0,0,0,153,154,5,10,0,0,154,10,1,0,0,
  	0,155,156,5,114,0,0,156,157,5,101,0,0,157,158,5,113,0,0,158,159,5,117,
  	0,0,159,160,5,105,0,0,160,161,5,114,0,0,161,162,5,101,0,0,162,12,1,0,
  	0,0,163,164,5,101,0,0,164,165,5,110,0,0,165,166,5,100,0,0,166,14,1,0,
  	0,0,167,168,5,100,0,0,168,169,5,101,0,0,169,170,5,102,0,0,170,16,1,0,
  	0,0,171,172,5,114,0,0,172,173,5,101,0,0,173,174,5,116,0,0,174,175,5,117,
  	0,0,175,176,5,114,0,0,176,177,5,110,0,0,177,18,1,0,0,0,178,179,5,112,
  	0,0,179,180,5,105,0,0,180,181,5,114,0,0,181,20,1,0,0,0,182,183,5,105,
  	0,0,183,184,5,102,0,0,184,22,1,0,0,0,185,186,5,101,0,0,186,187,5,108,
  	0,0,187,188,5,115,0,0,188,189,5,101,0,0,189,24,1,0,0,0,190,191,5,101,
  	0,0,191,192,5,108,0,0,192,193,5,115,0,0,193,194,5,105,0,0,194,195,5,102,
  	0,0,195,26,1,0,0,0,196,197,5,117,0,0,197,198,5,110,0,0,198,199,5,108,
  	0,0,199,200,5,101,0,0,200,201,5,115,0,0,201,202,5,115,0,0,202,28,1,0,
  	0,0,203,204,5,119,0,0,204,205,5,104,0,0,205,206,5,105,0,0,206,207,5,108,
  	0,0,207,208,5,101,0,0,208,30,1,0,0,0,209,210,5,114,0,0,210,211,5,101,
  	0,0,211,212,5,116,0,0,212,213,5,114,0,0,213,214,5,121,0,0,214,32,1,0,
  	0,0,215,216,5,98,0,0,216,217,5,114,0,0,217,218,5,101,0,0,218,219,5,97,
  	0,0,219,220,5,107,0,0,220,34,1,0,0,0,221,222,5,102,0,0,222,223,5,111,
  	0,0,223,224,5,114,0,0,224,36,1,0,0,0,225,226,5,116,0,0,226,227,5,114,
  	0,0,227,228,5,117,0,0,228,229,5,101,0,0,229,38,1,0,0,0,230,231,5,102,
  	0,0,231,232,5,97,0,0,232,233,5,108,0,0,233,234,5,115,0,0,234,235,5,101,
  	0,0,235,40,1,0,0,0,236,237,5,43,0,0,237,42,1,0,0,0,238,239,5,45,0,0,239,
  	44,1,0,0,0,240,241,5,42,0,0,241,46,1,0,0,0,242,243,5,47,0,0,243,48,1,
  	0,0,0,244,245,5,37,0,0,245,50,1,0,0,0,246,247,5,42,0,0,247,248,5,42,0,
  	0,248,52,1,0,0,0,249,250,5,61,0,0,250,251,5,61,0,0,251,54,1,0,0,0,252,
  	253,5,33,0,0,253,254,5,61,0,0,254,56,1,0,0,0,255,256,5,62,0,0,256,58,
  	1,0,0,0,257,258,5,60,0,0,258,60,1,0,0,0,259,260,5,60,0,0,260,261,5,61,
  	0,0,261,62,1,0,0,0,262,263,5,62,0,0,263,264,5,61,0,0,264,64,1,0,0,0,265,
  	266,5,61,0,0,266,66,1,0,0,0,267,268,5,43,0,0,268,269,5,61,0,0,269,68,
  	1,0,0,0,270,271,5,45,0,0,271,272,5,61,0,0,272,70,1,0,0,0,273,274,5,42,
  	0,0,274,275,5,61,0,0,275,72,1,0,0,0,276,277,5,47,0,0,277,278,5,61,0,0,
  	278,74,1,0,0,0,279,280,5,37,0,0,280,281,5,61,0,0,281,76,1,0,0,0,282,283,
  	5,42,0,0,283,284,5,42,0,0,284,285,5,61,0,0,285,78,1,0,0,0,286,287,5,38,
  	0,0,287,80,1,0,0,0,288,289,5,124,0,0,289,82,1,0,0,0,290,291,5,94,0,0,
  	291,84,1,0,0,0,292,293,5,126,0,0,293,86,1,0,0,0,294,295,5,60,0,0,295,
  	296,5,60,0,0,296,88,1,0,0,0,297,298,5,62,0,0,298,299,5,62,0,0,299,90,
  	1,0,0,0,300,301,5,97,0,0,301,302,5,110,0,0,302,306,5,100,0,0,303,304,
  	5,38,0,0,304,306,5,38,0,0,305,300,1,0,0,0,305,303,1,0,0,0,306,92,1,0,
  	0,0,307,308,5,111,0,0,308,312,5,114,0,0,309,310,5,124,0,0,310,312,5,124,
  	0,0,311,307,1,0,0,0,311,309,1,0,0,0,312,94,1,0,0,0,313,314,5,110,0,0,
  	314,315,5,111,0,0,315,318,5,116,0,0,316,318,5,33,0,0,317,313,1,0,0,0,
  	317,316,1,0,0,0,318,96,1,0,0,0,319,320,5,40,0,0,320,98,1,0,0,0,321,322,
  	5,41,0,0,322,100,1,0,0,0,323,324,5,91,0,0,324,102,1,0,0,0,325,326,5,93,
  	0,0,326,104,1,0,0,0,327,328,5,110,0,0,328,329,5,105,0,0,329,330,5,108,
  	0,0,330,106,1,0,0,0,331,335,5,35,0,0,332,334,8,0,0,0,333,332,1,0,0,0,
  	334,337,1,0,0,0,335,333,1,0,0,0,335,336,1,0,0,0,336,339,1,0,0,0,337,335,
  	1,0,0,0,338,340,5,13,0,0,339,338,1,0,0,0,339,340,1,0,0,0,340,341,1,0,
  	0,0,341,342,5,10,0,0,342,343,1,0,0,0,343,344,6,53,0,0,344,108,1,0,0,0,
  	345,346,5,61,0,0,346,347,5,98,0,0,347,348,5,101,0,0,348,349,5,103,0,0,
  	349,350,5,105,0,0,350,351,5,110,0,0,351,355,1,0,0,0,352,354,9,0,0,0,353,
  	352,1,0,0,0,354,357,1,0,0,0,355,356,1,0,0,0,355,353,1,0,0,0,356,358,1,
  	0,0,0,357,355,1,0,0,0,358,359,5,61,0,0,359,360,5,101,0,0,360,361,5,110,
  	0,0,361,362,5,100,0,0,362,364,1,0,0,0,363,365,5,13,0,0,364,363,1,0,0,
  	0,364,365,1,0,0,0,365,366,1,0,0,0,366,367,5,10,0,0,367,368,1,0,0,0,368,
  	369,6,54,0,0,369,110,1,0,0,0,370,372,7,1,0,0,371,370,1,0,0,0,372,373,
  	1,0,0,0,373,371,1,0,0,0,373,374,1,0,0,0,374,375,1,0,0,0,375,376,6,55,
  	0,0,376,112,1,0,0,0,377,379,7,2,0,0,378,377,1,0,0,0,379,380,1,0,0,0,380,
  	378,1,0,0,0,380,381,1,0,0,0,381,114,1,0,0,0,382,384,7,2,0,0,383,382,1,
  	0,0,0,384,387,1,0,0,0,385,383,1,0,0,0,385,386,1,0,0,0,386,388,1,0,0,0,
  	387,385,1,0,0,0,388,390,5,46,0,0,389,391,7,2,0,0,390,389,1,0,0,0,391,
  	392,1,0,0,0,392,390,1,0,0,0,392,393,1,0,0,0,393,116,1,0,0,0,394,398,7,
  	3,0,0,395,397,7,4,0,0,396,395,1,0,0,0,397,400,1,0,0,0,398,396,1,0,0,0,
  	398,399,1,0,0,0,399,118,1,0,0,0,400,398,1,0,0,0,401,402,5,36,0,0,402,
  	403,3,117,58,0,403,120,1,0,0,0,404,405,3,117,58,0,405,406,7,5,0,0,406,
  	122,1,0,0,0,19,0,129,131,138,140,144,151,305,311,317,335,339,355,364,
  	373,380,385,392,398,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  corundumlexerLexerStaticData = staticData.release();
}

}

CorundumLexer::CorundumLexer(CharStream *input) : Lexer(input) {
  CorundumLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *corundumlexerLexerStaticData->atn, corundumlexerLexerStaticData->decisionToDFA, corundumlexerLexerStaticData->sharedContextCache);
}

CorundumLexer::~CorundumLexer() {
  delete _interpreter;
}

std::string CorundumLexer::getGrammarFileName() const {
  return "Corundum.g4";
}

const std::vector<std::string>& CorundumLexer::getRuleNames() const {
  return corundumlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& CorundumLexer::getChannelNames() const {
  return corundumlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& CorundumLexer::getModeNames() const {
  return corundumlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& CorundumLexer::getVocabulary() const {
  return corundumlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CorundumLexer::getSerializedATN() const {
  return corundumlexerLexerStaticData->serializedATN;
}

const atn::ATN& CorundumLexer::getATN() const {
  return *corundumlexerLexerStaticData->atn;
}




void CorundumLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  corundumlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(corundumlexerLexerOnceFlag, corundumlexerLexerInitialize);
#endif
}
