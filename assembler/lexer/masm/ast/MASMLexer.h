 
#include <cstdio>
#include <cstdlib>
#include <vector>


// Generated from MASM.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"




class  MASMLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, Identifier = 10, DS = 11, ES = 12, CS = 13, SS = 14, 
    GS = 15, FS = 16, AH = 17, AL = 18, AX = 19, BH = 20, BL = 21, BX = 22, 
    CH = 23, CL = 24, CX = 25, DH = 26, DL = 27, DX = 28, SI = 29, DI = 30, 
    SP = 31, BP = 32, EAX = 33, EBX = 34, ECX = 35, EDX = 36, ESI = 37, 
    EDI = 38, ESP = 39, EBP = 40, MOV = 41, CMP = 42, TEST = 43, PUSH = 44, 
    POP = 45, IDIV = 46, INC = 47, DEC = 48, NEG = 49, MUL = 50, DIV = 51, 
    IMUL = 52, NOT = 53, SETPO = 54, SETAE = 55, SETNLE = 56, SETC = 57, 
    SETNO = 58, SETNB = 59, SETP = 60, SETNGE = 61, SETL = 62, SETGE = 63, 
    SETPE = 64, SETNL = 65, SETNZ = 66, SETNE = 67, SETNC = 68, SETBE = 69, 
    SETNP = 70, SETNS = 71, SETO = 72, SETNA = 73, SETNAE = 74, SETZ = 75, 
    SETLE = 76, SETNBE = 77, SETS = 78, SETE = 79, SETB = 80, SETA = 81, 
    SETG = 82, SETNG = 83, XCHG = 84, POPAD = 85, AAA = 86, POPA = 87, POPFD = 88, 
    CWD = 89, LAHF = 90, PUSHAD = 91, PUSHF = 92, AAS = 93, BSWAP = 94, 
    PUSHFD = 95, CBW = 96, CWDE = 97, XLAT = 98, AAM = 99, AAD = 100, CDQ = 101, 
    DAA = 102, SAHF = 103, DAS = 104, INTO = 105, IRET = 106, CLC = 107, 
    STC = 108, CMC = 109, CLD = 110, STD = 111, CLI = 112, STI = 113, MOVSB = 114, 
    MOVSW = 115, MOVSD = 116, LODS = 117, LODSB = 118, LODSW = 119, LODSD = 120, 
    STOS = 121, STOSB = 122, STOSW = 123, SOTSD = 124, SCAS = 125, SCASB = 126, 
    SCASW = 127, SCASD = 128, CMPS = 129, CMPSB = 130, CMPSW = 131, CMPSD = 132, 
    INSB = 133, INSW = 134, INSD = 135, OUTSB = 136, OUTSW = 137, OUTSD = 138, 
    ADC = 139, ADD = 140, SUB = 141, CBB = 142, XOR = 143, OR = 144, JNBE = 145, 
    JNZ = 146, JPO = 147, JZ = 148, JS = 149, LOOPNZ = 150, JGE = 151, JB = 152, 
    JNB = 153, JO = 154, JP = 155, JNO = 156, JNL = 157, JNAE = 158, LOOPZ = 159, 
    JMP = 160, JNP = 161, LOOP = 162, JL = 163, JCXZ = 164, JAE = 165, JNGE = 166, 
    JA = 167, LOOPNE = 168, LOOPE = 169, JG = 170, JNLE = 171, JE = 172, 
    JNC = 173, JC = 174, JNA = 175, JBE = 176, JLE = 177, JPE = 178, JNS = 179, 
    JECXZ = 180, JNG = 181, MOVZX = 182, BSF = 183, BSR = 184, LES = 185, 
    LEA = 186, LDS = 187, INS = 188, OUTS = 189, XADD = 190, CMPXCHG = 191, 
    SHL = 192, SHR = 193, ROR = 194, ROL = 195, RCL = 196, SAL = 197, RCR = 198, 
    SAR = 199, SHRD = 200, SHLD = 201, BTR = 202, BT = 203, BTC = 204, CALL = 205, 
    INT = 206, RETN = 207, RET = 208, RETF = 209, IN = 210, OUT = 211, REP = 212, 
    REPE = 213, REPZ = 214, REPNE = 215, REPNZ = 216, ALPHA = 217, CONST = 218, 
    CREF = 219, XCREF = 220, DATA = 221, DATA2 = 222, DOSSEG = 223, ERR = 224, 
    ERR1 = 225, ERR2 = 226, ERRE = 227, ERRNZ = 228, ERRDEF = 229, ERRNDEF = 230, 
    ERRB = 231, ERRNB = 232, ERRIDN = 233, ERRDIF = 234, EVEN = 235, LIST = 236, 
    WIDTH = 237, MASK = 238, SEQ = 239, XLIST = 240, EXIT = 241, MODEL = 242, 
    BYTE = 243, SBYTE = 244, DB = 245, WORD = 246, SWORD = 247, DW = 248, 
    DWORD = 249, SDWORD = 250, DD = 251, FWORD = 252, DF = 253, QWORD = 254, 
    DQ = 255, TBYTE = 256, DT = 257, REAL4 = 258, REAL8 = 259, REAL = 260, 
    FAR = 261, NEAR = 262, PROC = 263, QUESTION = 264, TIMES = 265, Hexnum = 266, 
    Integer = 267, Octalnum = 268, FloatingPointLiteral = 269, String = 270, 
    Etiqueta = 271, Separator = 272, WS = 273, LINE_COMMENT = 274
  };

  MASMLexer(antlr4::CharStream *input);
  ~MASMLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

