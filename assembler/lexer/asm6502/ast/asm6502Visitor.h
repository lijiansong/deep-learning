
#include <stdio.h>
#include <stdlib.h>


// Generated from asm6502.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "asm6502Parser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by asm6502Parser.
 */
class  asm6502Visitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by asm6502Parser.
   */
    virtual antlrcpp::Any visitProg(asm6502Parser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitLine(asm6502Parser::LineContext *context) = 0;

    virtual antlrcpp::Any visitInstruction(asm6502Parser::InstructionContext *context) = 0;

    virtual antlrcpp::Any visitAssemblerinstruction(asm6502Parser::AssemblerinstructionContext *context) = 0;

    virtual antlrcpp::Any visitAssembleropcode(asm6502Parser::AssembleropcodeContext *context) = 0;

    virtual antlrcpp::Any visitLbl(asm6502Parser::LblContext *context) = 0;

    virtual antlrcpp::Any visitArgumentlist(asm6502Parser::ArgumentlistContext *context) = 0;

    virtual antlrcpp::Any visitLabel(asm6502Parser::LabelContext *context) = 0;

    virtual antlrcpp::Any visitArgument(asm6502Parser::ArgumentContext *context) = 0;

    virtual antlrcpp::Any visitPrefix(asm6502Parser::PrefixContext *context) = 0;

    virtual antlrcpp::Any visitString(asm6502Parser::StringContext *context) = 0;

    virtual antlrcpp::Any visitName(asm6502Parser::NameContext *context) = 0;

    virtual antlrcpp::Any visitNumber(asm6502Parser::NumberContext *context) = 0;

    virtual antlrcpp::Any visitComment(asm6502Parser::CommentContext *context) = 0;

    virtual antlrcpp::Any visitOpcode(asm6502Parser::OpcodeContext *context) = 0;


};

