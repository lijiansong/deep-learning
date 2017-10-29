 
#include <cstdio>
#include <cstdlib>
#include <vector>


// Generated from MASM.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "MASMVisitor.h"


/**
 * This class provides an empty implementation of MASMVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  MASMBaseVisitor : public MASMVisitor {
public:

  virtual antlrcpp::Any visitCompilationUnit(MASMParser::CompilationUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSegments(MASMParser::SegmentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProc(MASMParser::ProcContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCode(MASMParser::CodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinary_exp1(MASMParser::Binary_exp1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnuary_exp1(MASMParser::Unuary_exp1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnuary_exp2(MASMParser::Unuary_exp2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinary_exp2(MASMParser::Binary_exp2Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNotarguments(MASMParser::NotargumentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinary_exp3(MASMParser::Binary_exp3Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnuary_exp3(MASMParser::Unuary_exp3Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinary_exp4(MASMParser::Binary_exp4Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinary_exp5(MASMParser::Binary_exp5Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinary_exp6(MASMParser::Binary_exp6Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinary_exp7(MASMParser::Binary_exp7Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinary_exp8(MASMParser::Binary_exp8Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinary_exp9(MASMParser::Binary_exp9Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnuary_exp4(MASMParser::Unuary_exp4Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnuary_exp5(MASMParser::Unuary_exp5Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinary_exp10(MASMParser::Binary_exp10Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinary_exp11(MASMParser::Binary_exp11Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBinary_exp12(MASMParser::Binary_exp12Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDirective_exp1(MASMParser::Directive_exp1Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariabledeclaration(MASMParser::VariabledeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMemory(MASMParser::MemoryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSegmentos(MASMParser::SegmentosContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRegister(MASMParser::RegisterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitO(MASMParser::OContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp(MASMParser::OpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpe(MASMParser::OpeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOper(MASMParser::OperContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpera(MASMParser::OperaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperat(MASMParser::OperatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperato(MASMParser::OperatoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOperator(MASMParser::OperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitL(MASMParser::LContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitX(MASMParser::XContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitS(MASMParser::SContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSh(MASMParser::ShContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitB(MASMParser::BContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCall(MASMParser::CallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInterruption(MASMParser::InterruptionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIn(MASMParser::InContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOut(MASMParser::OutContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRe(MASMParser::ReContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDirectives(MASMParser::DirectivesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTy(MASMParser::TyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitQuestion(MASMParser::QuestionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTime(MASMParser::TimeContext *ctx) override {
    return visitChildren(ctx);
  }


};

