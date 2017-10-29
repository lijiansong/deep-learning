
#include <stdio.h>
#include <stdlib.h>


// Generated from asm6502.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"




class  asm6502Parser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, ASSEMBLER_INSTRUCTION = 9, ADC = 10, AND = 11, ASL = 12, BCC = 13, 
    BCS = 14, BEQ = 15, BIT = 16, BMI = 17, BNE = 18, BPL = 19, BRA = 20, 
    BRK = 21, BVC = 22, BVS = 23, CLC = 24, CLD = 25, CLI = 26, CLV = 27, 
    CMP = 28, CPX = 29, CPY = 30, DEC = 31, DEX = 32, DEY = 33, EOR = 34, 
    INC = 35, INX = 36, INY = 37, JMP = 38, JSR = 39, LDA = 40, LDY = 41, 
    LDX = 42, LSR = 43, NOP = 44, ORA = 45, PHA = 46, PHX = 47, PHY = 48, 
    PHP = 49, PLA = 50, PLP = 51, PLY = 52, ROL = 53, ROR = 54, RTI = 55, 
    RTS = 56, SBC = 57, SEC = 58, SED = 59, SEI = 60, STA = 61, STX = 62, 
    STY = 63, STZ = 64, TAX = 65, TAY = 66, TSX = 67, TXA = 68, TXS = 69, 
    TYA = 70, NAME = 71, NUMBER = 72, COMMENT = 73, STRING = 74, EOL = 75, 
    WS = 76
  };

  enum {
    RuleProg = 0, RuleLine = 1, RuleInstruction = 2, RuleAssemblerinstruction = 3, 
    RuleAssembleropcode = 4, RuleLbl = 5, RuleArgumentlist = 6, RuleLabel = 7, 
    RuleArgument = 8, RulePrefix = 9, RuleString = 10, RuleName = 11, RuleNumber = 12, 
    RuleComment = 13, RuleOpcode = 14
  };

  asm6502Parser(antlr4::TokenStream *input);
  ~asm6502Parser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgContext;
  class LineContext;
  class InstructionContext;
  class AssemblerinstructionContext;
  class AssembleropcodeContext;
  class LblContext;
  class ArgumentlistContext;
  class LabelContext;
  class ArgumentContext;
  class PrefixContext;
  class StringContext;
  class NameContext;
  class NumberContext;
  class CommentContext;
  class OpcodeContext; 

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);
    std::vector<LineContext *> line();
    LineContext* line(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgContext* prog();

  class  LineContext : public antlr4::ParserRuleContext {
  public:
    LineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CommentContext *comment();
    InstructionContext *instruction();
    AssemblerinstructionContext *assemblerinstruction();
    LblContext *lbl();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LineContext* line();

  class  InstructionContext : public antlr4::ParserRuleContext {
  public:
    InstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OpcodeContext *opcode();
    LabelContext *label();
    ArgumentlistContext *argumentlist();
    CommentContext *comment();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstructionContext* instruction();

  class  AssemblerinstructionContext : public antlr4::ParserRuleContext {
  public:
    AssemblerinstructionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssembleropcodeContext *assembleropcode();
    ArgumentContext *argument();
    ArgumentlistContext *argumentlist();
    CommentContext *comment();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssemblerinstructionContext* assemblerinstruction();

  class  AssembleropcodeContext : public antlr4::ParserRuleContext {
  public:
    AssembleropcodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSEMBLER_INSTRUCTION();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssembleropcodeContext* assembleropcode();

  class  LblContext : public antlr4::ParserRuleContext {
  public:
    LblContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LabelContext *label();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LblContext* lbl();

  class  ArgumentlistContext : public antlr4::ParserRuleContext {
  public:
    ArgumentlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ArgumentContext *argument();
    ArgumentlistContext *argumentlist();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentlistContext* argumentlist();

  class  LabelContext : public antlr4::ParserRuleContext {
  public:
    LabelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NameContext *name();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabelContext* label();

  class  ArgumentContext : public antlr4::ParserRuleContext {
  public:
    ArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NumberContext *> number();
    NumberContext* number(size_t i);
    NameContext *name();
    StringContext *string();
    PrefixContext *prefix();
    ArgumentContext *argument();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentContext* argument();

  class  PrefixContext : public antlr4::ParserRuleContext {
  public:
    PrefixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrefixContext* prefix();

  class  StringContext : public antlr4::ParserRuleContext {
  public:
    StringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringContext* string();

  class  NameContext : public antlr4::ParserRuleContext {
  public:
    NameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NameContext* name();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumberContext* number();

  class  CommentContext : public antlr4::ParserRuleContext {
  public:
    CommentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMENT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CommentContext* comment();

  class  OpcodeContext : public antlr4::ParserRuleContext {
  public:
    OpcodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADC();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *ASL();
    antlr4::tree::TerminalNode *BCC();
    antlr4::tree::TerminalNode *BCS();
    antlr4::tree::TerminalNode *BEQ();
    antlr4::tree::TerminalNode *BIT();
    antlr4::tree::TerminalNode *BMI();
    antlr4::tree::TerminalNode *BNE();
    antlr4::tree::TerminalNode *BPL();
    antlr4::tree::TerminalNode *BRA();
    antlr4::tree::TerminalNode *BRK();
    antlr4::tree::TerminalNode *BVC();
    antlr4::tree::TerminalNode *BVS();
    antlr4::tree::TerminalNode *CLC();
    antlr4::tree::TerminalNode *CLD();
    antlr4::tree::TerminalNode *CLI();
    antlr4::tree::TerminalNode *CLV();
    antlr4::tree::TerminalNode *CMP();
    antlr4::tree::TerminalNode *CPX();
    antlr4::tree::TerminalNode *CPY();
    antlr4::tree::TerminalNode *DEC();
    antlr4::tree::TerminalNode *DEX();
    antlr4::tree::TerminalNode *DEY();
    antlr4::tree::TerminalNode *EOR();
    antlr4::tree::TerminalNode *INC();
    antlr4::tree::TerminalNode *INX();
    antlr4::tree::TerminalNode *INY();
    antlr4::tree::TerminalNode *JMP();
    antlr4::tree::TerminalNode *JSR();
    antlr4::tree::TerminalNode *LDA();
    antlr4::tree::TerminalNode *LDY();
    antlr4::tree::TerminalNode *LDX();
    antlr4::tree::TerminalNode *LSR();
    antlr4::tree::TerminalNode *NOP();
    antlr4::tree::TerminalNode *ORA();
    antlr4::tree::TerminalNode *PHA();
    antlr4::tree::TerminalNode *PHX();
    antlr4::tree::TerminalNode *PHY();
    antlr4::tree::TerminalNode *PHP();
    antlr4::tree::TerminalNode *PLA();
    antlr4::tree::TerminalNode *PLP();
    antlr4::tree::TerminalNode *PLY();
    antlr4::tree::TerminalNode *ROL();
    antlr4::tree::TerminalNode *ROR();
    antlr4::tree::TerminalNode *RTI();
    antlr4::tree::TerminalNode *RTS();
    antlr4::tree::TerminalNode *SBC();
    antlr4::tree::TerminalNode *SEC();
    antlr4::tree::TerminalNode *SED();
    antlr4::tree::TerminalNode *SEI();
    antlr4::tree::TerminalNode *STA();
    antlr4::tree::TerminalNode *STX();
    antlr4::tree::TerminalNode *STY();
    antlr4::tree::TerminalNode *STZ();
    antlr4::tree::TerminalNode *TAX();
    antlr4::tree::TerminalNode *TAY();
    antlr4::tree::TerminalNode *TSX();
    antlr4::tree::TerminalNode *TXA();
    antlr4::tree::TerminalNode *TXS();
    antlr4::tree::TerminalNode *TYA();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpcodeContext* opcode();


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

