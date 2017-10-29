 
#include <cstdio>
#include <cstdlib>
#include <vector>


// Generated from MASM.g4 by ANTLR 4.7

#pragma once


#include "antlr4-runtime.h"
#include "MASMParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by MASMParser.
 */
class  MASMVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by MASMParser.
   */
    virtual antlrcpp::Any visitCompilationUnit(MASMParser::CompilationUnitContext *context) = 0;

    virtual antlrcpp::Any visitSegments(MASMParser::SegmentsContext *context) = 0;

    virtual antlrcpp::Any visitProc(MASMParser::ProcContext *context) = 0;

    virtual antlrcpp::Any visitCode(MASMParser::CodeContext *context) = 0;

    virtual antlrcpp::Any visitBinary_exp1(MASMParser::Binary_exp1Context *context) = 0;

    virtual antlrcpp::Any visitUnuary_exp1(MASMParser::Unuary_exp1Context *context) = 0;

    virtual antlrcpp::Any visitUnuary_exp2(MASMParser::Unuary_exp2Context *context) = 0;

    virtual antlrcpp::Any visitBinary_exp2(MASMParser::Binary_exp2Context *context) = 0;

    virtual antlrcpp::Any visitNotarguments(MASMParser::NotargumentsContext *context) = 0;

    virtual antlrcpp::Any visitBinary_exp3(MASMParser::Binary_exp3Context *context) = 0;

    virtual antlrcpp::Any visitUnuary_exp3(MASMParser::Unuary_exp3Context *context) = 0;

    virtual antlrcpp::Any visitBinary_exp4(MASMParser::Binary_exp4Context *context) = 0;

    virtual antlrcpp::Any visitBinary_exp5(MASMParser::Binary_exp5Context *context) = 0;

    virtual antlrcpp::Any visitBinary_exp6(MASMParser::Binary_exp6Context *context) = 0;

    virtual antlrcpp::Any visitBinary_exp7(MASMParser::Binary_exp7Context *context) = 0;

    virtual antlrcpp::Any visitBinary_exp8(MASMParser::Binary_exp8Context *context) = 0;

    virtual antlrcpp::Any visitBinary_exp9(MASMParser::Binary_exp9Context *context) = 0;

    virtual antlrcpp::Any visitUnuary_exp4(MASMParser::Unuary_exp4Context *context) = 0;

    virtual antlrcpp::Any visitUnuary_exp5(MASMParser::Unuary_exp5Context *context) = 0;

    virtual antlrcpp::Any visitBinary_exp10(MASMParser::Binary_exp10Context *context) = 0;

    virtual antlrcpp::Any visitBinary_exp11(MASMParser::Binary_exp11Context *context) = 0;

    virtual antlrcpp::Any visitBinary_exp12(MASMParser::Binary_exp12Context *context) = 0;

    virtual antlrcpp::Any visitDirective_exp1(MASMParser::Directive_exp1Context *context) = 0;

    virtual antlrcpp::Any visitVariabledeclaration(MASMParser::VariabledeclarationContext *context) = 0;

    virtual antlrcpp::Any visitMemory(MASMParser::MemoryContext *context) = 0;

    virtual antlrcpp::Any visitSegmentos(MASMParser::SegmentosContext *context) = 0;

    virtual antlrcpp::Any visitRegister(MASMParser::RegisterContext *context) = 0;

    virtual antlrcpp::Any visitO(MASMParser::OContext *context) = 0;

    virtual antlrcpp::Any visitOp(MASMParser::OpContext *context) = 0;

    virtual antlrcpp::Any visitOpe(MASMParser::OpeContext *context) = 0;

    virtual antlrcpp::Any visitOper(MASMParser::OperContext *context) = 0;

    virtual antlrcpp::Any visitOpera(MASMParser::OperaContext *context) = 0;

    virtual antlrcpp::Any visitOperat(MASMParser::OperatContext *context) = 0;

    virtual antlrcpp::Any visitOperato(MASMParser::OperatoContext *context) = 0;

    virtual antlrcpp::Any visitOperator(MASMParser::OperatorContext *context) = 0;

    virtual antlrcpp::Any visitL(MASMParser::LContext *context) = 0;

    virtual antlrcpp::Any visitX(MASMParser::XContext *context) = 0;

    virtual antlrcpp::Any visitS(MASMParser::SContext *context) = 0;

    virtual antlrcpp::Any visitSh(MASMParser::ShContext *context) = 0;

    virtual antlrcpp::Any visitB(MASMParser::BContext *context) = 0;

    virtual antlrcpp::Any visitCall(MASMParser::CallContext *context) = 0;

    virtual antlrcpp::Any visitInterruption(MASMParser::InterruptionContext *context) = 0;

    virtual antlrcpp::Any visitIn(MASMParser::InContext *context) = 0;

    virtual antlrcpp::Any visitOut(MASMParser::OutContext *context) = 0;

    virtual antlrcpp::Any visitRe(MASMParser::ReContext *context) = 0;

    virtual antlrcpp::Any visitDirectives(MASMParser::DirectivesContext *context) = 0;

    virtual antlrcpp::Any visitTy(MASMParser::TyContext *context) = 0;

    virtual antlrcpp::Any visitQuestion(MASMParser::QuestionContext *context) = 0;

    virtual antlrcpp::Any visitTime(MASMParser::TimeContext *context) = 0;


};

