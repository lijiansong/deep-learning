
#include <stdio.h>
#include <stdlib.h>


// Generated from asm6502.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "asm6502Visitor.h"


/**
 * This class provides an empty implementation of asm6502Visitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  asm6502BaseVisitor : public asm6502Visitor {
public:

  virtual antlrcpp::Any visitProg(asm6502Parser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLine(asm6502Parser::LineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstruction(asm6502Parser::InstructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssemblerinstruction(asm6502Parser::AssemblerinstructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssembleropcode(asm6502Parser::AssembleropcodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLbl(asm6502Parser::LblContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgumentlist(asm6502Parser::ArgumentlistContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLabel(asm6502Parser::LabelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgument(asm6502Parser::ArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrefix(asm6502Parser::PrefixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString(asm6502Parser::StringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitName(asm6502Parser::NameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNumber(asm6502Parser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComment(asm6502Parser::CommentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpcode(asm6502Parser::OpcodeContext *ctx) override {
    return visitChildren(ctx);
  }


};

