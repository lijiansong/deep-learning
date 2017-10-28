 
#include <cstdio>
#include <cstdlib>
#include <vector>


// Generated from MASM.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "MASMListener.h"


/**
 * This class provides an empty implementation of MASMListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  MASMBaseListener : public MASMListener {
public:

  virtual void enterCompilationUnit(MASMParser::CompilationUnitContext * /*ctx*/) override { }
  virtual void exitCompilationUnit(MASMParser::CompilationUnitContext * /*ctx*/) override { }

  virtual void enterSegments(MASMParser::SegmentsContext * /*ctx*/) override { }
  virtual void exitSegments(MASMParser::SegmentsContext * /*ctx*/) override { }

  virtual void enterProc(MASMParser::ProcContext * /*ctx*/) override { }
  virtual void exitProc(MASMParser::ProcContext * /*ctx*/) override { }

  virtual void enterCode(MASMParser::CodeContext * /*ctx*/) override { }
  virtual void exitCode(MASMParser::CodeContext * /*ctx*/) override { }

  virtual void enterBinary_exp1(MASMParser::Binary_exp1Context * /*ctx*/) override { }
  virtual void exitBinary_exp1(MASMParser::Binary_exp1Context * /*ctx*/) override { }

  virtual void enterUnuary_exp1(MASMParser::Unuary_exp1Context * /*ctx*/) override { }
  virtual void exitUnuary_exp1(MASMParser::Unuary_exp1Context * /*ctx*/) override { }

  virtual void enterUnuary_exp2(MASMParser::Unuary_exp2Context * /*ctx*/) override { }
  virtual void exitUnuary_exp2(MASMParser::Unuary_exp2Context * /*ctx*/) override { }

  virtual void enterBinary_exp2(MASMParser::Binary_exp2Context * /*ctx*/) override { }
  virtual void exitBinary_exp2(MASMParser::Binary_exp2Context * /*ctx*/) override { }

  virtual void enterNotarguments(MASMParser::NotargumentsContext * /*ctx*/) override { }
  virtual void exitNotarguments(MASMParser::NotargumentsContext * /*ctx*/) override { }

  virtual void enterBinary_exp3(MASMParser::Binary_exp3Context * /*ctx*/) override { }
  virtual void exitBinary_exp3(MASMParser::Binary_exp3Context * /*ctx*/) override { }

  virtual void enterUnuary_exp3(MASMParser::Unuary_exp3Context * /*ctx*/) override { }
  virtual void exitUnuary_exp3(MASMParser::Unuary_exp3Context * /*ctx*/) override { }

  virtual void enterBinary_exp4(MASMParser::Binary_exp4Context * /*ctx*/) override { }
  virtual void exitBinary_exp4(MASMParser::Binary_exp4Context * /*ctx*/) override { }

  virtual void enterBinary_exp5(MASMParser::Binary_exp5Context * /*ctx*/) override { }
  virtual void exitBinary_exp5(MASMParser::Binary_exp5Context * /*ctx*/) override { }

  virtual void enterBinary_exp6(MASMParser::Binary_exp6Context * /*ctx*/) override { }
  virtual void exitBinary_exp6(MASMParser::Binary_exp6Context * /*ctx*/) override { }

  virtual void enterBinary_exp7(MASMParser::Binary_exp7Context * /*ctx*/) override { }
  virtual void exitBinary_exp7(MASMParser::Binary_exp7Context * /*ctx*/) override { }

  virtual void enterBinary_exp8(MASMParser::Binary_exp8Context * /*ctx*/) override { }
  virtual void exitBinary_exp8(MASMParser::Binary_exp8Context * /*ctx*/) override { }

  virtual void enterBinary_exp9(MASMParser::Binary_exp9Context * /*ctx*/) override { }
  virtual void exitBinary_exp9(MASMParser::Binary_exp9Context * /*ctx*/) override { }

  virtual void enterUnuary_exp4(MASMParser::Unuary_exp4Context * /*ctx*/) override { }
  virtual void exitUnuary_exp4(MASMParser::Unuary_exp4Context * /*ctx*/) override { }

  virtual void enterUnuary_exp5(MASMParser::Unuary_exp5Context * /*ctx*/) override { }
  virtual void exitUnuary_exp5(MASMParser::Unuary_exp5Context * /*ctx*/) override { }

  virtual void enterBinary_exp10(MASMParser::Binary_exp10Context * /*ctx*/) override { }
  virtual void exitBinary_exp10(MASMParser::Binary_exp10Context * /*ctx*/) override { }

  virtual void enterBinary_exp11(MASMParser::Binary_exp11Context * /*ctx*/) override { }
  virtual void exitBinary_exp11(MASMParser::Binary_exp11Context * /*ctx*/) override { }

  virtual void enterBinary_exp12(MASMParser::Binary_exp12Context * /*ctx*/) override { }
  virtual void exitBinary_exp12(MASMParser::Binary_exp12Context * /*ctx*/) override { }

  virtual void enterDirective_exp1(MASMParser::Directive_exp1Context * /*ctx*/) override { }
  virtual void exitDirective_exp1(MASMParser::Directive_exp1Context * /*ctx*/) override { }

  virtual void enterVariabledeclaration(MASMParser::VariabledeclarationContext * /*ctx*/) override { }
  virtual void exitVariabledeclaration(MASMParser::VariabledeclarationContext * /*ctx*/) override { }

  virtual void enterMemory(MASMParser::MemoryContext * /*ctx*/) override { }
  virtual void exitMemory(MASMParser::MemoryContext * /*ctx*/) override { }

  virtual void enterSegmentos(MASMParser::SegmentosContext * /*ctx*/) override { }
  virtual void exitSegmentos(MASMParser::SegmentosContext * /*ctx*/) override { }

  virtual void enterRegister(MASMParser::RegisterContext * /*ctx*/) override { }
  virtual void exitRegister(MASMParser::RegisterContext * /*ctx*/) override { }

  virtual void enterO(MASMParser::OContext * /*ctx*/) override { }
  virtual void exitO(MASMParser::OContext * /*ctx*/) override { }

  virtual void enterOp(MASMParser::OpContext * /*ctx*/) override { }
  virtual void exitOp(MASMParser::OpContext * /*ctx*/) override { }

  virtual void enterOpe(MASMParser::OpeContext * /*ctx*/) override { }
  virtual void exitOpe(MASMParser::OpeContext * /*ctx*/) override { }

  virtual void enterOper(MASMParser::OperContext * /*ctx*/) override { }
  virtual void exitOper(MASMParser::OperContext * /*ctx*/) override { }

  virtual void enterOpera(MASMParser::OperaContext * /*ctx*/) override { }
  virtual void exitOpera(MASMParser::OperaContext * /*ctx*/) override { }

  virtual void enterOperat(MASMParser::OperatContext * /*ctx*/) override { }
  virtual void exitOperat(MASMParser::OperatContext * /*ctx*/) override { }

  virtual void enterOperato(MASMParser::OperatoContext * /*ctx*/) override { }
  virtual void exitOperato(MASMParser::OperatoContext * /*ctx*/) override { }

  virtual void enterOperator(MASMParser::OperatorContext * /*ctx*/) override { }
  virtual void exitOperator(MASMParser::OperatorContext * /*ctx*/) override { }

  virtual void enterL(MASMParser::LContext * /*ctx*/) override { }
  virtual void exitL(MASMParser::LContext * /*ctx*/) override { }

  virtual void enterX(MASMParser::XContext * /*ctx*/) override { }
  virtual void exitX(MASMParser::XContext * /*ctx*/) override { }

  virtual void enterS(MASMParser::SContext * /*ctx*/) override { }
  virtual void exitS(MASMParser::SContext * /*ctx*/) override { }

  virtual void enterSh(MASMParser::ShContext * /*ctx*/) override { }
  virtual void exitSh(MASMParser::ShContext * /*ctx*/) override { }

  virtual void enterB(MASMParser::BContext * /*ctx*/) override { }
  virtual void exitB(MASMParser::BContext * /*ctx*/) override { }

  virtual void enterCall(MASMParser::CallContext * /*ctx*/) override { }
  virtual void exitCall(MASMParser::CallContext * /*ctx*/) override { }

  virtual void enterInterruption(MASMParser::InterruptionContext * /*ctx*/) override { }
  virtual void exitInterruption(MASMParser::InterruptionContext * /*ctx*/) override { }

  virtual void enterIn(MASMParser::InContext * /*ctx*/) override { }
  virtual void exitIn(MASMParser::InContext * /*ctx*/) override { }

  virtual void enterOut(MASMParser::OutContext * /*ctx*/) override { }
  virtual void exitOut(MASMParser::OutContext * /*ctx*/) override { }

  virtual void enterRe(MASMParser::ReContext * /*ctx*/) override { }
  virtual void exitRe(MASMParser::ReContext * /*ctx*/) override { }

  virtual void enterDirectives(MASMParser::DirectivesContext * /*ctx*/) override { }
  virtual void exitDirectives(MASMParser::DirectivesContext * /*ctx*/) override { }

  virtual void enterTy(MASMParser::TyContext * /*ctx*/) override { }
  virtual void exitTy(MASMParser::TyContext * /*ctx*/) override { }

  virtual void enterQuestion(MASMParser::QuestionContext * /*ctx*/) override { }
  virtual void exitQuestion(MASMParser::QuestionContext * /*ctx*/) override { }

  virtual void enterTime(MASMParser::TimeContext * /*ctx*/) override { }
  virtual void exitTime(MASMParser::TimeContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

