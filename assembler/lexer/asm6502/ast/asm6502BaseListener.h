
#include <stdio.h>
#include <stdlib.h>


// Generated from asm6502.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "asm6502Listener.h"


/**
 * This class provides an empty implementation of asm6502Listener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  asm6502BaseListener : public asm6502Listener {
public:

  virtual void enterProg(asm6502Parser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(asm6502Parser::ProgContext * /*ctx*/) override { }

  virtual void enterLine(asm6502Parser::LineContext * /*ctx*/) override { }
  virtual void exitLine(asm6502Parser::LineContext * /*ctx*/) override { }

  virtual void enterInstruction(asm6502Parser::InstructionContext * /*ctx*/) override { }
  virtual void exitInstruction(asm6502Parser::InstructionContext * /*ctx*/) override { }

  virtual void enterAssemblerinstruction(asm6502Parser::AssemblerinstructionContext * /*ctx*/) override { }
  virtual void exitAssemblerinstruction(asm6502Parser::AssemblerinstructionContext * /*ctx*/) override { }

  virtual void enterAssembleropcode(asm6502Parser::AssembleropcodeContext * /*ctx*/) override { }
  virtual void exitAssembleropcode(asm6502Parser::AssembleropcodeContext * /*ctx*/) override { }

  virtual void enterLbl(asm6502Parser::LblContext * /*ctx*/) override { }
  virtual void exitLbl(asm6502Parser::LblContext * /*ctx*/) override { }

  virtual void enterArgumentlist(asm6502Parser::ArgumentlistContext * /*ctx*/) override { }
  virtual void exitArgumentlist(asm6502Parser::ArgumentlistContext * /*ctx*/) override { }

  virtual void enterLabel(asm6502Parser::LabelContext * /*ctx*/) override { }
  virtual void exitLabel(asm6502Parser::LabelContext * /*ctx*/) override { }

  virtual void enterArgument(asm6502Parser::ArgumentContext * /*ctx*/) override { }
  virtual void exitArgument(asm6502Parser::ArgumentContext * /*ctx*/) override { }

  virtual void enterPrefix(asm6502Parser::PrefixContext * /*ctx*/) override { }
  virtual void exitPrefix(asm6502Parser::PrefixContext * /*ctx*/) override { }

  virtual void enterString(asm6502Parser::StringContext * /*ctx*/) override { }
  virtual void exitString(asm6502Parser::StringContext * /*ctx*/) override { }

  virtual void enterName(asm6502Parser::NameContext * /*ctx*/) override { }
  virtual void exitName(asm6502Parser::NameContext * /*ctx*/) override { }

  virtual void enterNumber(asm6502Parser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(asm6502Parser::NumberContext * /*ctx*/) override { }

  virtual void enterComment(asm6502Parser::CommentContext * /*ctx*/) override { }
  virtual void exitComment(asm6502Parser::CommentContext * /*ctx*/) override { }

  virtual void enterOpcode(asm6502Parser::OpcodeContext * /*ctx*/) override { }
  virtual void exitOpcode(asm6502Parser::OpcodeContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

