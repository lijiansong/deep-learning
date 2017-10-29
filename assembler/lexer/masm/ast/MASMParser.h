 
#include <cstdio>
#include <cstdlib>
#include <vector>


// Generated from MASM.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"




class  MASMParser : public antlr4::Parser {
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

  enum {
    RuleCompilationUnit = 0, RuleSegments = 1, RuleProc = 2, RuleCode = 3, 
    RuleBinary_exp1 = 4, RuleUnuary_exp1 = 5, RuleUnuary_exp2 = 6, RuleBinary_exp2 = 7, 
    RuleNotarguments = 8, RuleBinary_exp3 = 9, RuleUnuary_exp3 = 10, RuleBinary_exp4 = 11, 
    RuleBinary_exp5 = 12, RuleBinary_exp6 = 13, RuleBinary_exp7 = 14, RuleBinary_exp8 = 15, 
    RuleBinary_exp9 = 16, RuleUnuary_exp4 = 17, RuleUnuary_exp5 = 18, RuleBinary_exp10 = 19, 
    RuleBinary_exp11 = 20, RuleBinary_exp12 = 21, RuleDirective_exp1 = 22, 
    RuleVariabledeclaration = 23, RuleMemory = 24, RuleSegmentos = 25, RuleRegister = 26, 
    RuleO = 27, RuleOp = 28, RuleOpe = 29, RuleOper = 30, RuleOpera = 31, 
    RuleOperat = 32, RuleOperato = 33, RuleOperator = 34, RuleL = 35, RuleX = 36, 
    RuleS = 37, RuleSh = 38, RuleB = 39, RuleCall = 40, RuleInterruption = 41, 
    RuleIn = 42, RuleOut = 43, RuleRe = 44, RuleDirectives = 45, RuleTy = 46, 
    RuleQuestion = 47, RuleTime = 48
  };

  MASMParser(antlr4::TokenStream *input);
  ~MASMParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class CompilationUnitContext;
  class SegmentsContext;
  class ProcContext;
  class CodeContext;
  class Binary_exp1Context;
  class Unuary_exp1Context;
  class Unuary_exp2Context;
  class Binary_exp2Context;
  class NotargumentsContext;
  class Binary_exp3Context;
  class Unuary_exp3Context;
  class Binary_exp4Context;
  class Binary_exp5Context;
  class Binary_exp6Context;
  class Binary_exp7Context;
  class Binary_exp8Context;
  class Binary_exp9Context;
  class Unuary_exp4Context;
  class Unuary_exp5Context;
  class Binary_exp10Context;
  class Binary_exp11Context;
  class Binary_exp12Context;
  class Directive_exp1Context;
  class VariabledeclarationContext;
  class MemoryContext;
  class SegmentosContext;
  class RegisterContext;
  class OContext;
  class OpContext;
  class OpeContext;
  class OperContext;
  class OperaContext;
  class OperatContext;
  class OperatoContext;
  class OperatorContext;
  class LContext;
  class XContext;
  class SContext;
  class ShContext;
  class BContext;
  class CallContext;
  class InterruptionContext;
  class InContext;
  class OutContext;
  class ReContext;
  class DirectivesContext;
  class TyContext;
  class QuestionContext;
  class TimeContext; 

  class  CompilationUnitContext : public antlr4::ParserRuleContext {
  public:
    CompilationUnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    std::vector<SegmentsContext *> segments();
    SegmentsContext* segments(size_t i);
    std::vector<Directive_exp1Context *> directive_exp1();
    Directive_exp1Context* directive_exp1(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompilationUnitContext* compilationUnit();

  class  SegmentsContext : public antlr4::ParserRuleContext {
  public:
    SegmentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    std::vector<CodeContext *> code();
    CodeContext* code(size_t i);
    std::vector<ProcContext *> proc();
    ProcContext* proc(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SegmentsContext* segments();

  class  ProcContext : public antlr4::ParserRuleContext {
  public:
    ProcContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    std::vector<CodeContext *> code();
    CodeContext* code(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProcContext* proc();

  class  CodeContext : public antlr4::ParserRuleContext {
  public:
    CodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Binary_exp1Context *binary_exp1();
    Binary_exp10Context *binary_exp10();
    Binary_exp11Context *binary_exp11();
    Binary_exp12Context *binary_exp12();
    Binary_exp2Context *binary_exp2();
    Binary_exp3Context *binary_exp3();
    Binary_exp4Context *binary_exp4();
    Binary_exp5Context *binary_exp5();
    Binary_exp6Context *binary_exp6();
    Binary_exp7Context *binary_exp7();
    Binary_exp8Context *binary_exp8();
    Binary_exp9Context *binary_exp9();
    Unuary_exp1Context *unuary_exp1();
    Unuary_exp2Context *unuary_exp2();
    Unuary_exp3Context *unuary_exp3();
    Unuary_exp4Context *unuary_exp4();
    Unuary_exp5Context *unuary_exp5();
    NotargumentsContext *notarguments();
    VariabledeclarationContext *variabledeclaration();
    Directive_exp1Context *directive_exp1();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CodeContext* code();

  class  Binary_exp1Context : public antlr4::ParserRuleContext {
  public:
    Binary_exp1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OContext *o();
    std::vector<RegisterContext *> register();
    RegisterContext* register(size_t i);
    antlr4::tree::TerminalNode *Separator();
    antlr4::tree::TerminalNode *Integer();
    MemoryContext *memory();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Binary_exp1Context* binary_exp1();

  class  Unuary_exp1Context : public antlr4::ParserRuleContext {
  public:
    Unuary_exp1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OpContext *op();
    antlr4::tree::TerminalNode *Integer();
    RegisterContext *register();
    MemoryContext *memory();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unuary_exp1Context* unuary_exp1();

  class  Unuary_exp2Context : public antlr4::ParserRuleContext {
  public:
    Unuary_exp2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OpeContext *ope();
    RegisterContext *register();
    MemoryContext *memory();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unuary_exp2Context* unuary_exp2();

  class  Binary_exp2Context : public antlr4::ParserRuleContext {
  public:
    Binary_exp2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OperContext *oper();
    std::vector<RegisterContext *> register();
    RegisterContext* register(size_t i);
    antlr4::tree::TerminalNode *Separator();
    MemoryContext *memory();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Binary_exp2Context* binary_exp2();

  class  NotargumentsContext : public antlr4::ParserRuleContext {
  public:
    NotargumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OperaContext *opera();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NotargumentsContext* notarguments();

  class  Binary_exp3Context : public antlr4::ParserRuleContext {
  public:
    Binary_exp3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OperatContext *operat();
    antlr4::tree::TerminalNode *Separator();
    std::vector<RegisterContext *> register();
    RegisterContext* register(size_t i);
    std::vector<MemoryContext *> memory();
    MemoryContext* memory(size_t i);
    antlr4::tree::TerminalNode *Integer();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Binary_exp3Context* binary_exp3();

  class  Unuary_exp3Context : public antlr4::ParserRuleContext {
  public:
    Unuary_exp3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OperatoContext *operato();
    antlr4::tree::TerminalNode *Identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unuary_exp3Context* unuary_exp3();

  class  Binary_exp4Context : public antlr4::ParserRuleContext {
  public:
    Binary_exp4Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OperatorContext *operator();
    std::vector<RegisterContext *> register();
    RegisterContext* register(size_t i);
    antlr4::tree::TerminalNode *Separator();
    MemoryContext *memory();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Binary_exp4Context* binary_exp4();

  class  Binary_exp5Context : public antlr4::ParserRuleContext {
  public:
    Binary_exp5Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LContext *l();
    RegisterContext *register();
    antlr4::tree::TerminalNode *Separator();
    MemoryContext *memory();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Binary_exp5Context* binary_exp5();

  class  Binary_exp6Context : public antlr4::ParserRuleContext {
  public:
    Binary_exp6Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    XContext *x();
    antlr4::tree::TerminalNode *Separator();
    std::vector<RegisterContext *> register();
    RegisterContext* register(size_t i);
    MemoryContext *memory();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Binary_exp6Context* binary_exp6();

  class  Binary_exp7Context : public antlr4::ParserRuleContext {
  public:
    Binary_exp7Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SContext *s();
    antlr4::tree::TerminalNode *Separator();
    std::vector<RegisterContext *> register();
    RegisterContext* register(size_t i);
    MemoryContext *memory();
    antlr4::tree::TerminalNode *Integer();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Binary_exp7Context* binary_exp7();

  class  Binary_exp8Context : public antlr4::ParserRuleContext {
  public:
    Binary_exp8Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ShContext *sh();
    std::vector<antlr4::tree::TerminalNode *> Separator();
    antlr4::tree::TerminalNode* Separator(size_t i);
    std::vector<RegisterContext *> register();
    RegisterContext* register(size_t i);
    MemoryContext *memory();
    antlr4::tree::TerminalNode *Integer();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Binary_exp8Context* binary_exp8();

  class  Binary_exp9Context : public antlr4::ParserRuleContext {
  public:
    Binary_exp9Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BContext *b();
    antlr4::tree::TerminalNode *Separator();
    std::vector<RegisterContext *> register();
    RegisterContext* register(size_t i);
    std::vector<MemoryContext *> memory();
    MemoryContext* memory(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Binary_exp9Context* binary_exp9();

  class  Unuary_exp4Context : public antlr4::ParserRuleContext {
  public:
    Unuary_exp4Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CallContext *call();
    RegisterContext *register();
    MemoryContext *memory();
    antlr4::tree::TerminalNode *Integer();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unuary_exp4Context* unuary_exp4();

  class  Unuary_exp5Context : public antlr4::ParserRuleContext {
  public:
    Unuary_exp5Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InterruptionContext *interruption();
    antlr4::tree::TerminalNode *Integer();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Unuary_exp5Context* unuary_exp5();

  class  Binary_exp10Context : public antlr4::ParserRuleContext {
  public:
    Binary_exp10Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InContext *in();
    std::vector<RegisterContext *> register();
    RegisterContext* register(size_t i);
    antlr4::tree::TerminalNode *Separator();
    antlr4::tree::TerminalNode *Integer();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Binary_exp10Context* binary_exp10();

  class  Binary_exp11Context : public antlr4::ParserRuleContext {
  public:
    Binary_exp11Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OutContext *out();
    antlr4::tree::TerminalNode *Separator();
    std::vector<RegisterContext *> register();
    RegisterContext* register(size_t i);
    antlr4::tree::TerminalNode *Integer();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Binary_exp11Context* binary_exp11();

  class  Binary_exp12Context : public antlr4::ParserRuleContext {
  public:
    Binary_exp12Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ReContext *re();
    OperaContext *opera();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Binary_exp12Context* binary_exp12();

  class  Directive_exp1Context : public antlr4::ParserRuleContext {
  public:
    Directive_exp1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DirectivesContext *directives();
    antlr4::tree::TerminalNode *Identifier();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Directive_exp1Context* directive_exp1();

  class  VariabledeclarationContext : public antlr4::ParserRuleContext {
  public:
    VariabledeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    TyContext *ty();
    QuestionContext *question();
    antlr4::tree::TerminalNode *String();
    antlr4::tree::TerminalNode *Integer();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariabledeclarationContext* variabledeclaration();

  class  MemoryContext : public antlr4::ParserRuleContext {
  public:
    MemoryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RegisterContext *> register();
    RegisterContext* register(size_t i);
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Integer();
    antlr4::tree::TerminalNode *Hexnum();
    antlr4::tree::TerminalNode *Octalnum();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemoryContext* memory();

  class  SegmentosContext : public antlr4::ParserRuleContext {
  public:
    SegmentosContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DS();
    antlr4::tree::TerminalNode *ES();
    antlr4::tree::TerminalNode *CS();
    antlr4::tree::TerminalNode *SS();
    antlr4::tree::TerminalNode *GS();
    antlr4::tree::TerminalNode *FS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SegmentosContext* segmentos();

  class  RegisterContext : public antlr4::ParserRuleContext {
  public:
    RegisterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AH();
    antlr4::tree::TerminalNode *AL();
    antlr4::tree::TerminalNode *AX();
    antlr4::tree::TerminalNode *BH();
    antlr4::tree::TerminalNode *BL();
    antlr4::tree::TerminalNode *BX();
    antlr4::tree::TerminalNode *CH();
    antlr4::tree::TerminalNode *CL();
    antlr4::tree::TerminalNode *CX();
    antlr4::tree::TerminalNode *DH();
    antlr4::tree::TerminalNode *DL();
    antlr4::tree::TerminalNode *DX();
    antlr4::tree::TerminalNode *SI();
    antlr4::tree::TerminalNode *DI();
    antlr4::tree::TerminalNode *SP();
    antlr4::tree::TerminalNode *BP();
    antlr4::tree::TerminalNode *EAX();
    antlr4::tree::TerminalNode *EBX();
    antlr4::tree::TerminalNode *ECX();
    antlr4::tree::TerminalNode *EDX();
    antlr4::tree::TerminalNode *ESI();
    antlr4::tree::TerminalNode *EDI();
    antlr4::tree::TerminalNode *ESP();
    antlr4::tree::TerminalNode *EBP();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RegisterContext* register();

  class  OContext : public antlr4::ParserRuleContext {
  public:
    OContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MOV();
    antlr4::tree::TerminalNode *CMP();
    antlr4::tree::TerminalNode *TEST();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OContext* o();

  class  OpContext : public antlr4::ParserRuleContext {
  public:
    OpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PUSH();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpContext* op();

  class  OpeContext : public antlr4::ParserRuleContext {
  public:
    OpeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POP();
    antlr4::tree::TerminalNode *IDIV();
    antlr4::tree::TerminalNode *INC();
    antlr4::tree::TerminalNode *DEC();
    antlr4::tree::TerminalNode *NEG();
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *IMUL();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *SETPO();
    antlr4::tree::TerminalNode *SETAE();
    antlr4::tree::TerminalNode *SETNLE();
    antlr4::tree::TerminalNode *SETC();
    antlr4::tree::TerminalNode *SETNO();
    antlr4::tree::TerminalNode *SETNB();
    antlr4::tree::TerminalNode *SETP();
    antlr4::tree::TerminalNode *SETNGE();
    antlr4::tree::TerminalNode *SETL();
    antlr4::tree::TerminalNode *SETGE();
    antlr4::tree::TerminalNode *SETPE();
    antlr4::tree::TerminalNode *SETNL();
    antlr4::tree::TerminalNode *SETNZ();
    antlr4::tree::TerminalNode *SETNE();
    antlr4::tree::TerminalNode *SETNC();
    antlr4::tree::TerminalNode *SETBE();
    antlr4::tree::TerminalNode *SETNP();
    antlr4::tree::TerminalNode *SETNS();
    antlr4::tree::TerminalNode *SETO();
    antlr4::tree::TerminalNode *SETNA();
    antlr4::tree::TerminalNode *SETNAE();
    antlr4::tree::TerminalNode *SETZ();
    antlr4::tree::TerminalNode *SETLE();
    antlr4::tree::TerminalNode *SETNBE();
    antlr4::tree::TerminalNode *SETS();
    antlr4::tree::TerminalNode *SETE();
    antlr4::tree::TerminalNode *SETB();
    antlr4::tree::TerminalNode *SETA();
    antlr4::tree::TerminalNode *SETG();
    antlr4::tree::TerminalNode *SETNG();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpeContext* ope();

  class  OperContext : public antlr4::ParserRuleContext {
  public:
    OperContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XCHG();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperContext* oper();

  class  OperaContext : public antlr4::ParserRuleContext {
  public:
    OperaContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POPAD();
    antlr4::tree::TerminalNode *AAA();
    antlr4::tree::TerminalNode *POPA();
    antlr4::tree::TerminalNode *POPFD();
    antlr4::tree::TerminalNode *CWD();
    antlr4::tree::TerminalNode *LAHF();
    antlr4::tree::TerminalNode *PUSHAD();
    antlr4::tree::TerminalNode *PUSHF();
    antlr4::tree::TerminalNode *AAS();
    antlr4::tree::TerminalNode *BSWAP();
    antlr4::tree::TerminalNode *PUSHFD();
    antlr4::tree::TerminalNode *CBW();
    antlr4::tree::TerminalNode *CWDE();
    antlr4::tree::TerminalNode *XLAT();
    antlr4::tree::TerminalNode *AAM();
    antlr4::tree::TerminalNode *AAD();
    antlr4::tree::TerminalNode *CDQ();
    antlr4::tree::TerminalNode *DAA();
    antlr4::tree::TerminalNode *SAHF();
    antlr4::tree::TerminalNode *DAS();
    antlr4::tree::TerminalNode *INTO();
    antlr4::tree::TerminalNode *IRET();
    antlr4::tree::TerminalNode *CLC();
    antlr4::tree::TerminalNode *STC();
    antlr4::tree::TerminalNode *CMC();
    antlr4::tree::TerminalNode *CLD();
    antlr4::tree::TerminalNode *STD();
    antlr4::tree::TerminalNode *CLI();
    antlr4::tree::TerminalNode *STI();
    antlr4::tree::TerminalNode *MOVSB();
    antlr4::tree::TerminalNode *MOVSW();
    antlr4::tree::TerminalNode *MOVSD();
    antlr4::tree::TerminalNode *LODS();
    antlr4::tree::TerminalNode *LODSB();
    antlr4::tree::TerminalNode *LODSW();
    antlr4::tree::TerminalNode *LODSD();
    antlr4::tree::TerminalNode *STOS();
    antlr4::tree::TerminalNode *STOSB();
    antlr4::tree::TerminalNode *STOSW();
    antlr4::tree::TerminalNode *SOTSD();
    antlr4::tree::TerminalNode *SCAS();
    antlr4::tree::TerminalNode *SCASB();
    antlr4::tree::TerminalNode *SCASW();
    antlr4::tree::TerminalNode *SCASD();
    antlr4::tree::TerminalNode *CMPS();
    antlr4::tree::TerminalNode *CMPSB();
    antlr4::tree::TerminalNode *CMPSW();
    antlr4::tree::TerminalNode *CMPSD();
    antlr4::tree::TerminalNode *INSB();
    antlr4::tree::TerminalNode *INSW();
    antlr4::tree::TerminalNode *INSD();
    antlr4::tree::TerminalNode *OUTSB();
    antlr4::tree::TerminalNode *OUTSW();
    antlr4::tree::TerminalNode *OUTSD();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperaContext* opera();

  class  OperatContext : public antlr4::ParserRuleContext {
  public:
    OperatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADC();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();
    antlr4::tree::TerminalNode *CBB();
    antlr4::tree::TerminalNode *XOR();
    antlr4::tree::TerminalNode *OR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperatContext* operat();

  class  OperatoContext : public antlr4::ParserRuleContext {
  public:
    OperatoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *JNBE();
    antlr4::tree::TerminalNode *JNZ();
    antlr4::tree::TerminalNode *JPO();
    antlr4::tree::TerminalNode *JZ();
    antlr4::tree::TerminalNode *JS();
    antlr4::tree::TerminalNode *LOOPNZ();
    antlr4::tree::TerminalNode *JGE();
    antlr4::tree::TerminalNode *JB();
    antlr4::tree::TerminalNode *JNB();
    antlr4::tree::TerminalNode *JO();
    antlr4::tree::TerminalNode *JP();
    antlr4::tree::TerminalNode *JNO();
    antlr4::tree::TerminalNode *JNL();
    antlr4::tree::TerminalNode *JNAE();
    antlr4::tree::TerminalNode *LOOPZ();
    antlr4::tree::TerminalNode *JMP();
    antlr4::tree::TerminalNode *JNP();
    antlr4::tree::TerminalNode *LOOP();
    antlr4::tree::TerminalNode *JL();
    antlr4::tree::TerminalNode *JCXZ();
    antlr4::tree::TerminalNode *JAE();
    antlr4::tree::TerminalNode *JNGE();
    antlr4::tree::TerminalNode *JA();
    antlr4::tree::TerminalNode *LOOPNE();
    antlr4::tree::TerminalNode *LOOPE();
    antlr4::tree::TerminalNode *JG();
    antlr4::tree::TerminalNode *JNLE();
    antlr4::tree::TerminalNode *JE();
    antlr4::tree::TerminalNode *JNC();
    antlr4::tree::TerminalNode *JC();
    antlr4::tree::TerminalNode *JNA();
    antlr4::tree::TerminalNode *JBE();
    antlr4::tree::TerminalNode *JLE();
    antlr4::tree::TerminalNode *JPE();
    antlr4::tree::TerminalNode *JNS();
    antlr4::tree::TerminalNode *JECXZ();
    antlr4::tree::TerminalNode *JNG();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperatoContext* operato();

  class  OperatorContext : public antlr4::ParserRuleContext {
  public:
    OperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MOVZX();
    antlr4::tree::TerminalNode *BSF();
    antlr4::tree::TerminalNode *BSR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OperatorContext* operator();

  class  LContext : public antlr4::ParserRuleContext {
  public:
    LContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LES();
    antlr4::tree::TerminalNode *LEA();
    antlr4::tree::TerminalNode *LDS();
    antlr4::tree::TerminalNode *INS();
    antlr4::tree::TerminalNode *OUTS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LContext* l();

  class  XContext : public antlr4::ParserRuleContext {
  public:
    XContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *XADD();
    antlr4::tree::TerminalNode *CMPXCHG();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  XContext* x();

  class  SContext : public antlr4::ParserRuleContext {
  public:
    SContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHL();
    antlr4::tree::TerminalNode *SHR();
    antlr4::tree::TerminalNode *ROR();
    antlr4::tree::TerminalNode *ROL();
    antlr4::tree::TerminalNode *RCL();
    antlr4::tree::TerminalNode *SAL();
    antlr4::tree::TerminalNode *RCR();
    antlr4::tree::TerminalNode *SAR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SContext* s();

  class  ShContext : public antlr4::ParserRuleContext {
  public:
    ShContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHRD();
    antlr4::tree::TerminalNode *SHLD();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShContext* sh();

  class  BContext : public antlr4::ParserRuleContext {
  public:
    BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BTR();
    antlr4::tree::TerminalNode *BT();
    antlr4::tree::TerminalNode *BTC();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BContext* b();

  class  CallContext : public antlr4::ParserRuleContext {
  public:
    CallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CALL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CallContext* call();

  class  InterruptionContext : public antlr4::ParserRuleContext {
  public:
    InterruptionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *RETN();
    antlr4::tree::TerminalNode *RET();
    antlr4::tree::TerminalNode *RETF();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterruptionContext* interruption();

  class  InContext : public antlr4::ParserRuleContext {
  public:
    InContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InContext* in();

  class  OutContext : public antlr4::ParserRuleContext {
  public:
    OutContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OUT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OutContext* out();

  class  ReContext : public antlr4::ParserRuleContext {
  public:
    ReContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REP();
    antlr4::tree::TerminalNode *REPE();
    antlr4::tree::TerminalNode *REPZ();
    antlr4::tree::TerminalNode *REPNE();
    antlr4::tree::TerminalNode *REPNZ();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReContext* re();

  class  DirectivesContext : public antlr4::ParserRuleContext {
  public:
    DirectivesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ALPHA();
    antlr4::tree::TerminalNode *CONST();
    antlr4::tree::TerminalNode *CREF();
    antlr4::tree::TerminalNode *XCREF();
    antlr4::tree::TerminalNode *DATA();
    antlr4::tree::TerminalNode *DATA2();
    antlr4::tree::TerminalNode *DOSSEG();
    antlr4::tree::TerminalNode *ERR();
    antlr4::tree::TerminalNode *ERR1();
    antlr4::tree::TerminalNode *ERR2();
    antlr4::tree::TerminalNode *ERRE();
    antlr4::tree::TerminalNode *ERRNZ();
    antlr4::tree::TerminalNode *ERRDEF();
    antlr4::tree::TerminalNode *ERRNDEF();
    antlr4::tree::TerminalNode *ERRB();
    antlr4::tree::TerminalNode *ERRNB();
    antlr4::tree::TerminalNode *ERRIDN();
    antlr4::tree::TerminalNode *ERRDIF();
    antlr4::tree::TerminalNode *EVEN();
    antlr4::tree::TerminalNode *LIST();
    antlr4::tree::TerminalNode *WIDTH();
    antlr4::tree::TerminalNode *MASK();
    antlr4::tree::TerminalNode *SEQ();
    antlr4::tree::TerminalNode *XLIST();
    antlr4::tree::TerminalNode *EXIT();
    antlr4::tree::TerminalNode *MODEL();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DirectivesContext* directives();

  class  TyContext : public antlr4::ParserRuleContext {
  public:
    TyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BYTE();
    antlr4::tree::TerminalNode *SBYTE();
    antlr4::tree::TerminalNode *DB();
    antlr4::tree::TerminalNode *WORD();
    antlr4::tree::TerminalNode *SWORD();
    antlr4::tree::TerminalNode *DW();
    antlr4::tree::TerminalNode *DWORD();
    antlr4::tree::TerminalNode *SDWORD();
    antlr4::tree::TerminalNode *DD();
    antlr4::tree::TerminalNode *FWORD();
    antlr4::tree::TerminalNode *DF();
    antlr4::tree::TerminalNode *QWORD();
    antlr4::tree::TerminalNode *DQ();
    antlr4::tree::TerminalNode *TBYTE();
    antlr4::tree::TerminalNode *DT();
    antlr4::tree::TerminalNode *REAL4();
    antlr4::tree::TerminalNode *REAL8();
    antlr4::tree::TerminalNode *REAL();
    antlr4::tree::TerminalNode *FAR();
    antlr4::tree::TerminalNode *NEAR();
    antlr4::tree::TerminalNode *PROC();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TyContext* ty();

  class  QuestionContext : public antlr4::ParserRuleContext {
  public:
    QuestionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUESTION();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  QuestionContext* question();

  class  TimeContext : public antlr4::ParserRuleContext {
  public:
    TimeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TIMES();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TimeContext* time();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

