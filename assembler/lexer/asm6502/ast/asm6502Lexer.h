
#include <stdio.h>
#include <stdlib.h>


// Generated from asm6502.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"




class  asm6502Lexer : public antlr4::Lexer {
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

  asm6502Lexer(antlr4::CharStream *input);
  ~asm6502Lexer();

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

