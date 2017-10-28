 
#include <cstdio>
#include <cstdlib>
#include <vector>


// Generated from MASM.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "MASMParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by MASMParser.
 */
class  MASMListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterCompilationUnit(MASMParser::CompilationUnitContext *ctx) = 0;
  virtual void exitCompilationUnit(MASMParser::CompilationUnitContext *ctx) = 0;

  virtual void enterSegments(MASMParser::SegmentsContext *ctx) = 0;
  virtual void exitSegments(MASMParser::SegmentsContext *ctx) = 0;

  virtual void enterProc(MASMParser::ProcContext *ctx) = 0;
  virtual void exitProc(MASMParser::ProcContext *ctx) = 0;

  virtual void enterCode(MASMParser::CodeContext *ctx) = 0;
  virtual void exitCode(MASMParser::CodeContext *ctx) = 0;

  virtual void enterBinary_exp1(MASMParser::Binary_exp1Context *ctx) = 0;
  virtual void exitBinary_exp1(MASMParser::Binary_exp1Context *ctx) = 0;

  virtual void enterUnuary_exp1(MASMParser::Unuary_exp1Context *ctx) = 0;
  virtual void exitUnuary_exp1(MASMParser::Unuary_exp1Context *ctx) = 0;

  virtual void enterUnuary_exp2(MASMParser::Unuary_exp2Context *ctx) = 0;
  virtual void exitUnuary_exp2(MASMParser::Unuary_exp2Context *ctx) = 0;

  virtual void enterBinary_exp2(MASMParser::Binary_exp2Context *ctx) = 0;
  virtual void exitBinary_exp2(MASMParser::Binary_exp2Context *ctx) = 0;

  virtual void enterNotarguments(MASMParser::NotargumentsContext *ctx) = 0;
  virtual void exitNotarguments(MASMParser::NotargumentsContext *ctx) = 0;

  virtual void enterBinary_exp3(MASMParser::Binary_exp3Context *ctx) = 0;
  virtual void exitBinary_exp3(MASMParser::Binary_exp3Context *ctx) = 0;

  virtual void enterUnuary_exp3(MASMParser::Unuary_exp3Context *ctx) = 0;
  virtual void exitUnuary_exp3(MASMParser::Unuary_exp3Context *ctx) = 0;

  virtual void enterBinary_exp4(MASMParser::Binary_exp4Context *ctx) = 0;
  virtual void exitBinary_exp4(MASMParser::Binary_exp4Context *ctx) = 0;

  virtual void enterBinary_exp5(MASMParser::Binary_exp5Context *ctx) = 0;
  virtual void exitBinary_exp5(MASMParser::Binary_exp5Context *ctx) = 0;

  virtual void enterBinary_exp6(MASMParser::Binary_exp6Context *ctx) = 0;
  virtual void exitBinary_exp6(MASMParser::Binary_exp6Context *ctx) = 0;

  virtual void enterBinary_exp7(MASMParser::Binary_exp7Context *ctx) = 0;
  virtual void exitBinary_exp7(MASMParser::Binary_exp7Context *ctx) = 0;

  virtual void enterBinary_exp8(MASMParser::Binary_exp8Context *ctx) = 0;
  virtual void exitBinary_exp8(MASMParser::Binary_exp8Context *ctx) = 0;

  virtual void enterBinary_exp9(MASMParser::Binary_exp9Context *ctx) = 0;
  virtual void exitBinary_exp9(MASMParser::Binary_exp9Context *ctx) = 0;

  virtual void enterUnuary_exp4(MASMParser::Unuary_exp4Context *ctx) = 0;
  virtual void exitUnuary_exp4(MASMParser::Unuary_exp4Context *ctx) = 0;

  virtual void enterUnuary_exp5(MASMParser::Unuary_exp5Context *ctx) = 0;
  virtual void exitUnuary_exp5(MASMParser::Unuary_exp5Context *ctx) = 0;

  virtual void enterBinary_exp10(MASMParser::Binary_exp10Context *ctx) = 0;
  virtual void exitBinary_exp10(MASMParser::Binary_exp10Context *ctx) = 0;

  virtual void enterBinary_exp11(MASMParser::Binary_exp11Context *ctx) = 0;
  virtual void exitBinary_exp11(MASMParser::Binary_exp11Context *ctx) = 0;

  virtual void enterBinary_exp12(MASMParser::Binary_exp12Context *ctx) = 0;
  virtual void exitBinary_exp12(MASMParser::Binary_exp12Context *ctx) = 0;

  virtual void enterDirective_exp1(MASMParser::Directive_exp1Context *ctx) = 0;
  virtual void exitDirective_exp1(MASMParser::Directive_exp1Context *ctx) = 0;

  virtual void enterVariabledeclaration(MASMParser::VariabledeclarationContext *ctx) = 0;
  virtual void exitVariabledeclaration(MASMParser::VariabledeclarationContext *ctx) = 0;

  virtual void enterMemory(MASMParser::MemoryContext *ctx) = 0;
  virtual void exitMemory(MASMParser::MemoryContext *ctx) = 0;

  virtual void enterSegmentos(MASMParser::SegmentosContext *ctx) = 0;
  virtual void exitSegmentos(MASMParser::SegmentosContext *ctx) = 0;

  virtual void enterRegister(MASMParser::RegisterContext *ctx) = 0;
  virtual void exitRegister(MASMParser::RegisterContext *ctx) = 0;

  virtual void enterO(MASMParser::OContext *ctx) = 0;
  virtual void exitO(MASMParser::OContext *ctx) = 0;

  virtual void enterOp(MASMParser::OpContext *ctx) = 0;
  virtual void exitOp(MASMParser::OpContext *ctx) = 0;

  virtual void enterOpe(MASMParser::OpeContext *ctx) = 0;
  virtual void exitOpe(MASMParser::OpeContext *ctx) = 0;

  virtual void enterOper(MASMParser::OperContext *ctx) = 0;
  virtual void exitOper(MASMParser::OperContext *ctx) = 0;

  virtual void enterOpera(MASMParser::OperaContext *ctx) = 0;
  virtual void exitOpera(MASMParser::OperaContext *ctx) = 0;

  virtual void enterOperat(MASMParser::OperatContext *ctx) = 0;
  virtual void exitOperat(MASMParser::OperatContext *ctx) = 0;

  virtual void enterOperato(MASMParser::OperatoContext *ctx) = 0;
  virtual void exitOperato(MASMParser::OperatoContext *ctx) = 0;

  virtual void enterOperator(MASMParser::OperatorContext *ctx) = 0;
  virtual void exitOperator(MASMParser::OperatorContext *ctx) = 0;

  virtual void enterL(MASMParser::LContext *ctx) = 0;
  virtual void exitL(MASMParser::LContext *ctx) = 0;

  virtual void enterX(MASMParser::XContext *ctx) = 0;
  virtual void exitX(MASMParser::XContext *ctx) = 0;

  virtual void enterS(MASMParser::SContext *ctx) = 0;
  virtual void exitS(MASMParser::SContext *ctx) = 0;

  virtual void enterSh(MASMParser::ShContext *ctx) = 0;
  virtual void exitSh(MASMParser::ShContext *ctx) = 0;

  virtual void enterB(MASMParser::BContext *ctx) = 0;
  virtual void exitB(MASMParser::BContext *ctx) = 0;

  virtual void enterCall(MASMParser::CallContext *ctx) = 0;
  virtual void exitCall(MASMParser::CallContext *ctx) = 0;

  virtual void enterInterruption(MASMParser::InterruptionContext *ctx) = 0;
  virtual void exitInterruption(MASMParser::InterruptionContext *ctx) = 0;

  virtual void enterIn(MASMParser::InContext *ctx) = 0;
  virtual void exitIn(MASMParser::InContext *ctx) = 0;

  virtual void enterOut(MASMParser::OutContext *ctx) = 0;
  virtual void exitOut(MASMParser::OutContext *ctx) = 0;

  virtual void enterRe(MASMParser::ReContext *ctx) = 0;
  virtual void exitRe(MASMParser::ReContext *ctx) = 0;

  virtual void enterDirectives(MASMParser::DirectivesContext *ctx) = 0;
  virtual void exitDirectives(MASMParser::DirectivesContext *ctx) = 0;

  virtual void enterTy(MASMParser::TyContext *ctx) = 0;
  virtual void exitTy(MASMParser::TyContext *ctx) = 0;

  virtual void enterQuestion(MASMParser::QuestionContext *ctx) = 0;
  virtual void exitQuestion(MASMParser::QuestionContext *ctx) = 0;

  virtual void enterTime(MASMParser::TimeContext *ctx) = 0;
  virtual void exitTime(MASMParser::TimeContext *ctx) = 0;


};

