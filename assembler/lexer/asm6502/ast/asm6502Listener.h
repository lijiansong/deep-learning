
#include <stdio.h>
#include <stdlib.h>


// Generated from asm6502.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "asm6502Parser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by asm6502Parser.
 */
class  asm6502Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(asm6502Parser::ProgContext *ctx) = 0;
  virtual void exitProg(asm6502Parser::ProgContext *ctx) = 0;

  virtual void enterLine(asm6502Parser::LineContext *ctx) = 0;
  virtual void exitLine(asm6502Parser::LineContext *ctx) = 0;

  virtual void enterInstruction(asm6502Parser::InstructionContext *ctx) = 0;
  virtual void exitInstruction(asm6502Parser::InstructionContext *ctx) = 0;

  virtual void enterAssemblerinstruction(asm6502Parser::AssemblerinstructionContext *ctx) = 0;
  virtual void exitAssemblerinstruction(asm6502Parser::AssemblerinstructionContext *ctx) = 0;

  virtual void enterAssembleropcode(asm6502Parser::AssembleropcodeContext *ctx) = 0;
  virtual void exitAssembleropcode(asm6502Parser::AssembleropcodeContext *ctx) = 0;

  virtual void enterLbl(asm6502Parser::LblContext *ctx) = 0;
  virtual void exitLbl(asm6502Parser::LblContext *ctx) = 0;

  virtual void enterArgumentlist(asm6502Parser::ArgumentlistContext *ctx) = 0;
  virtual void exitArgumentlist(asm6502Parser::ArgumentlistContext *ctx) = 0;

  virtual void enterLabel(asm6502Parser::LabelContext *ctx) = 0;
  virtual void exitLabel(asm6502Parser::LabelContext *ctx) = 0;

  virtual void enterArgument(asm6502Parser::ArgumentContext *ctx) = 0;
  virtual void exitArgument(asm6502Parser::ArgumentContext *ctx) = 0;

  virtual void enterPrefix(asm6502Parser::PrefixContext *ctx) = 0;
  virtual void exitPrefix(asm6502Parser::PrefixContext *ctx) = 0;

  virtual void enterString(asm6502Parser::StringContext *ctx) = 0;
  virtual void exitString(asm6502Parser::StringContext *ctx) = 0;

  virtual void enterName(asm6502Parser::NameContext *ctx) = 0;
  virtual void exitName(asm6502Parser::NameContext *ctx) = 0;

  virtual void enterNumber(asm6502Parser::NumberContext *ctx) = 0;
  virtual void exitNumber(asm6502Parser::NumberContext *ctx) = 0;

  virtual void enterComment(asm6502Parser::CommentContext *ctx) = 0;
  virtual void exitComment(asm6502Parser::CommentContext *ctx) = 0;

  virtual void enterOpcode(asm6502Parser::OpcodeContext *ctx) = 0;
  virtual void exitOpcode(asm6502Parser::OpcodeContext *ctx) = 0;


};

