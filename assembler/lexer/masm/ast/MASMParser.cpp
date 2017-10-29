 
#include <cstdio>
#include <cstdlib>
#include <vector>


// Generated from MASM.g4 by ANTLR 4.7


#include "MASMVisitor.h"

#include "MASMParser.h"


using namespace antlrcpp;
using namespace antlr4;

MASMParser::MASMParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

MASMParser::~MASMParser() {
  delete _interpreter;
}

std::string MASMParser::getGrammarFileName() const {
  return "MASM.g4";
}

const std::vector<std::string>& MASMParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& MASMParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- CompilationUnitContext ------------------------------------------------------------------

MASMParser::CompilationUnitContext::CompilationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MASMParser::CompilationUnitContext::Identifier() {
  return getToken(MASMParser::Identifier, 0);
}

std::vector<MASMParser::SegmentsContext *> MASMParser::CompilationUnitContext::segments() {
  return getRuleContexts<MASMParser::SegmentsContext>();
}

MASMParser::SegmentsContext* MASMParser::CompilationUnitContext::segments(size_t i) {
  return getRuleContext<MASMParser::SegmentsContext>(i);
}

std::vector<MASMParser::Directive_exp1Context *> MASMParser::CompilationUnitContext::directive_exp1() {
  return getRuleContexts<MASMParser::Directive_exp1Context>();
}

MASMParser::Directive_exp1Context* MASMParser::CompilationUnitContext::directive_exp1(size_t i) {
  return getRuleContext<MASMParser::Directive_exp1Context>(i);
}


size_t MASMParser::CompilationUnitContext::getRuleIndex() const {
  return MASMParser::RuleCompilationUnit;
}

antlrcpp::Any MASMParser::CompilationUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitCompilationUnit(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::CompilationUnitContext* MASMParser::compilationUnit() {
  CompilationUnitContext *_localctx = _tracker.createInstance<CompilationUnitContext>(_ctx, getState());
  enterRule(_localctx, 0, MASMParser::RuleCompilationUnit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MASMParser::Identifier || ((((_la - 217) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 217)) & ((1ULL << (MASMParser::ALPHA - 217))
      | (1ULL << (MASMParser::CONST - 217))
      | (1ULL << (MASMParser::CREF - 217))
      | (1ULL << (MASMParser::XCREF - 217))
      | (1ULL << (MASMParser::DATA - 217))
      | (1ULL << (MASMParser::DATA2 - 217))
      | (1ULL << (MASMParser::DOSSEG - 217))
      | (1ULL << (MASMParser::ERR - 217))
      | (1ULL << (MASMParser::ERR1 - 217))
      | (1ULL << (MASMParser::ERR2 - 217))
      | (1ULL << (MASMParser::ERRE - 217))
      | (1ULL << (MASMParser::ERRNZ - 217))
      | (1ULL << (MASMParser::ERRDEF - 217))
      | (1ULL << (MASMParser::ERRNDEF - 217))
      | (1ULL << (MASMParser::ERRB - 217))
      | (1ULL << (MASMParser::ERRNB - 217))
      | (1ULL << (MASMParser::ERRIDN - 217))
      | (1ULL << (MASMParser::ERRDIF - 217))
      | (1ULL << (MASMParser::EVEN - 217))
      | (1ULL << (MASMParser::LIST - 217))
      | (1ULL << (MASMParser::WIDTH - 217))
      | (1ULL << (MASMParser::MASK - 217))
      | (1ULL << (MASMParser::SEQ - 217))
      | (1ULL << (MASMParser::XLIST - 217))
      | (1ULL << (MASMParser::EXIT - 217))
      | (1ULL << (MASMParser::MODEL - 217)))) != 0)) {
      setState(100);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MASMParser::Identifier: {
          setState(98);
          segments();
          break;
        }

        case MASMParser::ALPHA:
        case MASMParser::CONST:
        case MASMParser::CREF:
        case MASMParser::XCREF:
        case MASMParser::DATA:
        case MASMParser::DATA2:
        case MASMParser::DOSSEG:
        case MASMParser::ERR:
        case MASMParser::ERR1:
        case MASMParser::ERR2:
        case MASMParser::ERRE:
        case MASMParser::ERRNZ:
        case MASMParser::ERRDEF:
        case MASMParser::ERRNDEF:
        case MASMParser::ERRB:
        case MASMParser::ERRNB:
        case MASMParser::ERRIDN:
        case MASMParser::ERRDIF:
        case MASMParser::EVEN:
        case MASMParser::LIST:
        case MASMParser::WIDTH:
        case MASMParser::MASK:
        case MASMParser::SEQ:
        case MASMParser::XLIST:
        case MASMParser::EXIT:
        case MASMParser::MODEL: {
          setState(99);
          directive_exp1();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(104);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(105);
    match(MASMParser::T__0);
    setState(106);
    match(MASMParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SegmentsContext ------------------------------------------------------------------

MASMParser::SegmentsContext::SegmentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MASMParser::SegmentsContext::Identifier() {
  return getTokens(MASMParser::Identifier);
}

tree::TerminalNode* MASMParser::SegmentsContext::Identifier(size_t i) {
  return getToken(MASMParser::Identifier, i);
}

std::vector<MASMParser::CodeContext *> MASMParser::SegmentsContext::code() {
  return getRuleContexts<MASMParser::CodeContext>();
}

MASMParser::CodeContext* MASMParser::SegmentsContext::code(size_t i) {
  return getRuleContext<MASMParser::CodeContext>(i);
}

std::vector<MASMParser::ProcContext *> MASMParser::SegmentsContext::proc() {
  return getRuleContexts<MASMParser::ProcContext>();
}

MASMParser::ProcContext* MASMParser::SegmentsContext::proc(size_t i) {
  return getRuleContext<MASMParser::ProcContext>(i);
}


size_t MASMParser::SegmentsContext::getRuleIndex() const {
  return MASMParser::RuleSegments;
}

antlrcpp::Any MASMParser::SegmentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitSegments(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::SegmentsContext* MASMParser::segments() {
  SegmentsContext *_localctx = _tracker.createInstance<SegmentsContext>(_ctx, getState());
  enterRule(_localctx, 2, MASMParser::RuleSegments);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(108);
    match(MASMParser::Identifier);
    setState(109);
    match(MASMParser::T__1);
    setState(110);
    match(MASMParser::T__2);
    setState(111);
    match(MASMParser::T__3);
    setState(116);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(114);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
        case 1: {
          setState(112);
          code();
          break;
        }

        case 2: {
          setState(113);
          proc();
          break;
        }

        } 
      }
      setState(118);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
    setState(119);
    match(MASMParser::Identifier);
    setState(120);
    match(MASMParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProcContext ------------------------------------------------------------------

MASMParser::ProcContext::ProcContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MASMParser::ProcContext::Identifier() {
  return getTokens(MASMParser::Identifier);
}

tree::TerminalNode* MASMParser::ProcContext::Identifier(size_t i) {
  return getToken(MASMParser::Identifier, i);
}

std::vector<MASMParser::CodeContext *> MASMParser::ProcContext::code() {
  return getRuleContexts<MASMParser::CodeContext>();
}

MASMParser::CodeContext* MASMParser::ProcContext::code(size_t i) {
  return getRuleContext<MASMParser::CodeContext>(i);
}


size_t MASMParser::ProcContext::getRuleIndex() const {
  return MASMParser::RuleProc;
}

antlrcpp::Any MASMParser::ProcContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitProc(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::ProcContext* MASMParser::proc() {
  ProcContext *_localctx = _tracker.createInstance<ProcContext>(_ctx, getState());
  enterRule(_localctx, 4, MASMParser::RuleProc);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(122);
    match(MASMParser::Identifier);
    setState(123);
    match(MASMParser::PROC);
    setState(127);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(124);
        code(); 
      }
      setState(129);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
    setState(130);
    match(MASMParser::RET);
    setState(131);
    match(MASMParser::Identifier);
    setState(132);
    match(MASMParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CodeContext ------------------------------------------------------------------

MASMParser::CodeContext::CodeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MASMParser::Binary_exp1Context* MASMParser::CodeContext::binary_exp1() {
  return getRuleContext<MASMParser::Binary_exp1Context>(0);
}

MASMParser::Binary_exp10Context* MASMParser::CodeContext::binary_exp10() {
  return getRuleContext<MASMParser::Binary_exp10Context>(0);
}

MASMParser::Binary_exp11Context* MASMParser::CodeContext::binary_exp11() {
  return getRuleContext<MASMParser::Binary_exp11Context>(0);
}

MASMParser::Binary_exp12Context* MASMParser::CodeContext::binary_exp12() {
  return getRuleContext<MASMParser::Binary_exp12Context>(0);
}

MASMParser::Binary_exp2Context* MASMParser::CodeContext::binary_exp2() {
  return getRuleContext<MASMParser::Binary_exp2Context>(0);
}

MASMParser::Binary_exp3Context* MASMParser::CodeContext::binary_exp3() {
  return getRuleContext<MASMParser::Binary_exp3Context>(0);
}

MASMParser::Binary_exp4Context* MASMParser::CodeContext::binary_exp4() {
  return getRuleContext<MASMParser::Binary_exp4Context>(0);
}

MASMParser::Binary_exp5Context* MASMParser::CodeContext::binary_exp5() {
  return getRuleContext<MASMParser::Binary_exp5Context>(0);
}

MASMParser::Binary_exp6Context* MASMParser::CodeContext::binary_exp6() {
  return getRuleContext<MASMParser::Binary_exp6Context>(0);
}

MASMParser::Binary_exp7Context* MASMParser::CodeContext::binary_exp7() {
  return getRuleContext<MASMParser::Binary_exp7Context>(0);
}

MASMParser::Binary_exp8Context* MASMParser::CodeContext::binary_exp8() {
  return getRuleContext<MASMParser::Binary_exp8Context>(0);
}

MASMParser::Binary_exp9Context* MASMParser::CodeContext::binary_exp9() {
  return getRuleContext<MASMParser::Binary_exp9Context>(0);
}

MASMParser::Unuary_exp1Context* MASMParser::CodeContext::unuary_exp1() {
  return getRuleContext<MASMParser::Unuary_exp1Context>(0);
}

MASMParser::Unuary_exp2Context* MASMParser::CodeContext::unuary_exp2() {
  return getRuleContext<MASMParser::Unuary_exp2Context>(0);
}

MASMParser::Unuary_exp3Context* MASMParser::CodeContext::unuary_exp3() {
  return getRuleContext<MASMParser::Unuary_exp3Context>(0);
}

MASMParser::Unuary_exp4Context* MASMParser::CodeContext::unuary_exp4() {
  return getRuleContext<MASMParser::Unuary_exp4Context>(0);
}

MASMParser::Unuary_exp5Context* MASMParser::CodeContext::unuary_exp5() {
  return getRuleContext<MASMParser::Unuary_exp5Context>(0);
}

MASMParser::NotargumentsContext* MASMParser::CodeContext::notarguments() {
  return getRuleContext<MASMParser::NotargumentsContext>(0);
}

MASMParser::VariabledeclarationContext* MASMParser::CodeContext::variabledeclaration() {
  return getRuleContext<MASMParser::VariabledeclarationContext>(0);
}

MASMParser::Directive_exp1Context* MASMParser::CodeContext::directive_exp1() {
  return getRuleContext<MASMParser::Directive_exp1Context>(0);
}


size_t MASMParser::CodeContext::getRuleIndex() const {
  return MASMParser::RuleCode;
}

antlrcpp::Any MASMParser::CodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitCode(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::CodeContext* MASMParser::code() {
  CodeContext *_localctx = _tracker.createInstance<CodeContext>(_ctx, getState());
  enterRule(_localctx, 6, MASMParser::RuleCode);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(154);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MASMParser::MOV:
      case MASMParser::CMP:
      case MASMParser::TEST: {
        enterOuterAlt(_localctx, 1);
        setState(134);
        binary_exp1();
        break;
      }

      case MASMParser::IN: {
        enterOuterAlt(_localctx, 2);
        setState(135);
        binary_exp10();
        break;
      }

      case MASMParser::OUT: {
        enterOuterAlt(_localctx, 3);
        setState(136);
        binary_exp11();
        break;
      }

      case MASMParser::REP:
      case MASMParser::REPE:
      case MASMParser::REPZ:
      case MASMParser::REPNE:
      case MASMParser::REPNZ: {
        enterOuterAlt(_localctx, 4);
        setState(137);
        binary_exp12();
        break;
      }

      case MASMParser::XCHG: {
        enterOuterAlt(_localctx, 5);
        setState(138);
        binary_exp2();
        break;
      }

      case MASMParser::ADC:
      case MASMParser::ADD:
      case MASMParser::SUB:
      case MASMParser::CBB:
      case MASMParser::XOR:
      case MASMParser::OR: {
        enterOuterAlt(_localctx, 6);
        setState(139);
        binary_exp3();
        break;
      }

      case MASMParser::MOVZX:
      case MASMParser::BSF:
      case MASMParser::BSR: {
        enterOuterAlt(_localctx, 7);
        setState(140);
        binary_exp4();
        break;
      }

      case MASMParser::LES:
      case MASMParser::LEA:
      case MASMParser::LDS:
      case MASMParser::INS:
      case MASMParser::OUTS: {
        enterOuterAlt(_localctx, 8);
        setState(141);
        binary_exp5();
        break;
      }

      case MASMParser::XADD:
      case MASMParser::CMPXCHG: {
        enterOuterAlt(_localctx, 9);
        setState(142);
        binary_exp6();
        break;
      }

      case MASMParser::SHL:
      case MASMParser::SHR:
      case MASMParser::ROR:
      case MASMParser::ROL:
      case MASMParser::RCL:
      case MASMParser::SAL:
      case MASMParser::RCR:
      case MASMParser::SAR: {
        enterOuterAlt(_localctx, 10);
        setState(143);
        binary_exp7();
        break;
      }

      case MASMParser::SHRD:
      case MASMParser::SHLD: {
        enterOuterAlt(_localctx, 11);
        setState(144);
        binary_exp8();
        break;
      }

      case MASMParser::BTR:
      case MASMParser::BT:
      case MASMParser::BTC: {
        enterOuterAlt(_localctx, 12);
        setState(145);
        binary_exp9();
        break;
      }

      case MASMParser::PUSH: {
        enterOuterAlt(_localctx, 13);
        setState(146);
        unuary_exp1();
        break;
      }

      case MASMParser::POP:
      case MASMParser::IDIV:
      case MASMParser::INC:
      case MASMParser::DEC:
      case MASMParser::NEG:
      case MASMParser::MUL:
      case MASMParser::DIV:
      case MASMParser::IMUL:
      case MASMParser::NOT:
      case MASMParser::SETPO:
      case MASMParser::SETAE:
      case MASMParser::SETNLE:
      case MASMParser::SETC:
      case MASMParser::SETNO:
      case MASMParser::SETNB:
      case MASMParser::SETP:
      case MASMParser::SETNGE:
      case MASMParser::SETL:
      case MASMParser::SETGE:
      case MASMParser::SETPE:
      case MASMParser::SETNL:
      case MASMParser::SETNZ:
      case MASMParser::SETNE:
      case MASMParser::SETNC:
      case MASMParser::SETBE:
      case MASMParser::SETNP:
      case MASMParser::SETNS:
      case MASMParser::SETO:
      case MASMParser::SETNA:
      case MASMParser::SETNAE:
      case MASMParser::SETZ:
      case MASMParser::SETLE:
      case MASMParser::SETNBE:
      case MASMParser::SETS:
      case MASMParser::SETE:
      case MASMParser::SETB:
      case MASMParser::SETA:
      case MASMParser::SETG:
      case MASMParser::SETNG: {
        enterOuterAlt(_localctx, 14);
        setState(147);
        unuary_exp2();
        break;
      }

      case MASMParser::JNBE:
      case MASMParser::JNZ:
      case MASMParser::JPO:
      case MASMParser::JZ:
      case MASMParser::JS:
      case MASMParser::LOOPNZ:
      case MASMParser::JGE:
      case MASMParser::JB:
      case MASMParser::JNB:
      case MASMParser::JO:
      case MASMParser::JP:
      case MASMParser::JNO:
      case MASMParser::JNL:
      case MASMParser::JNAE:
      case MASMParser::LOOPZ:
      case MASMParser::JMP:
      case MASMParser::JNP:
      case MASMParser::LOOP:
      case MASMParser::JL:
      case MASMParser::JCXZ:
      case MASMParser::JAE:
      case MASMParser::JNGE:
      case MASMParser::JA:
      case MASMParser::LOOPNE:
      case MASMParser::LOOPE:
      case MASMParser::JG:
      case MASMParser::JNLE:
      case MASMParser::JE:
      case MASMParser::JNC:
      case MASMParser::JC:
      case MASMParser::JNA:
      case MASMParser::JBE:
      case MASMParser::JLE:
      case MASMParser::JPE:
      case MASMParser::JNS:
      case MASMParser::JECXZ:
      case MASMParser::JNG: {
        enterOuterAlt(_localctx, 15);
        setState(148);
        unuary_exp3();
        break;
      }

      case MASMParser::CALL: {
        enterOuterAlt(_localctx, 16);
        setState(149);
        unuary_exp4();
        break;
      }

      case MASMParser::INT:
      case MASMParser::RETN:
      case MASMParser::RET:
      case MASMParser::RETF: {
        enterOuterAlt(_localctx, 17);
        setState(150);
        unuary_exp5();
        break;
      }

      case MASMParser::POPAD:
      case MASMParser::AAA:
      case MASMParser::POPA:
      case MASMParser::POPFD:
      case MASMParser::CWD:
      case MASMParser::LAHF:
      case MASMParser::PUSHAD:
      case MASMParser::PUSHF:
      case MASMParser::AAS:
      case MASMParser::BSWAP:
      case MASMParser::PUSHFD:
      case MASMParser::CBW:
      case MASMParser::CWDE:
      case MASMParser::XLAT:
      case MASMParser::AAM:
      case MASMParser::AAD:
      case MASMParser::CDQ:
      case MASMParser::DAA:
      case MASMParser::SAHF:
      case MASMParser::DAS:
      case MASMParser::INTO:
      case MASMParser::IRET:
      case MASMParser::CLC:
      case MASMParser::STC:
      case MASMParser::CMC:
      case MASMParser::CLD:
      case MASMParser::STD:
      case MASMParser::CLI:
      case MASMParser::STI:
      case MASMParser::MOVSB:
      case MASMParser::MOVSW:
      case MASMParser::MOVSD:
      case MASMParser::LODS:
      case MASMParser::LODSB:
      case MASMParser::LODSW:
      case MASMParser::LODSD:
      case MASMParser::STOS:
      case MASMParser::STOSB:
      case MASMParser::STOSW:
      case MASMParser::SOTSD:
      case MASMParser::SCAS:
      case MASMParser::SCASB:
      case MASMParser::SCASW:
      case MASMParser::SCASD:
      case MASMParser::CMPS:
      case MASMParser::CMPSB:
      case MASMParser::CMPSW:
      case MASMParser::CMPSD:
      case MASMParser::INSB:
      case MASMParser::INSW:
      case MASMParser::INSD:
      case MASMParser::OUTSB:
      case MASMParser::OUTSW:
      case MASMParser::OUTSD: {
        enterOuterAlt(_localctx, 18);
        setState(151);
        notarguments();
        break;
      }

      case MASMParser::Identifier: {
        enterOuterAlt(_localctx, 19);
        setState(152);
        variabledeclaration();
        break;
      }

      case MASMParser::ALPHA:
      case MASMParser::CONST:
      case MASMParser::CREF:
      case MASMParser::XCREF:
      case MASMParser::DATA:
      case MASMParser::DATA2:
      case MASMParser::DOSSEG:
      case MASMParser::ERR:
      case MASMParser::ERR1:
      case MASMParser::ERR2:
      case MASMParser::ERRE:
      case MASMParser::ERRNZ:
      case MASMParser::ERRDEF:
      case MASMParser::ERRNDEF:
      case MASMParser::ERRB:
      case MASMParser::ERRNB:
      case MASMParser::ERRIDN:
      case MASMParser::ERRDIF:
      case MASMParser::EVEN:
      case MASMParser::LIST:
      case MASMParser::WIDTH:
      case MASMParser::MASK:
      case MASMParser::SEQ:
      case MASMParser::XLIST:
      case MASMParser::EXIT:
      case MASMParser::MODEL: {
        enterOuterAlt(_localctx, 20);
        setState(153);
        directive_exp1();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Binary_exp1Context ------------------------------------------------------------------

MASMParser::Binary_exp1Context::Binary_exp1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MASMParser::OContext* MASMParser::Binary_exp1Context::o() {
  return getRuleContext<MASMParser::OContext>(0);
}

std::vector<MASMParser::RegisterContext *> MASMParser::Binary_exp1Context::register() {
  return getRuleContexts<MASMParser::RegisterContext>();
}

MASMParser::RegisterContext* MASMParser::Binary_exp1Context::register(size_t i) {
  return getRuleContext<MASMParser::RegisterContext>(i);
}

tree::TerminalNode* MASMParser::Binary_exp1Context::Separator() {
  return getToken(MASMParser::Separator, 0);
}

tree::TerminalNode* MASMParser::Binary_exp1Context::Integer() {
  return getToken(MASMParser::Integer, 0);
}

MASMParser::MemoryContext* MASMParser::Binary_exp1Context::memory() {
  return getRuleContext<MASMParser::MemoryContext>(0);
}


size_t MASMParser::Binary_exp1Context::getRuleIndex() const {
  return MASMParser::RuleBinary_exp1;
}

antlrcpp::Any MASMParser::Binary_exp1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitBinary_exp1(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::Binary_exp1Context* MASMParser::binary_exp1() {
  Binary_exp1Context *_localctx = _tracker.createInstance<Binary_exp1Context>(_ctx, getState());
  enterRule(_localctx, 8, MASMParser::RuleBinary_exp1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(171);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(156);
      o();
      setState(157);
      register();
      setState(158);
      match(MASMParser::Separator);
      setState(162);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MASMParser::AH:
        case MASMParser::AL:
        case MASMParser::AX:
        case MASMParser::BH:
        case MASMParser::BL:
        case MASMParser::BX:
        case MASMParser::CH:
        case MASMParser::CL:
        case MASMParser::CX:
        case MASMParser::DH:
        case MASMParser::DL:
        case MASMParser::DX:
        case MASMParser::SI:
        case MASMParser::DI:
        case MASMParser::SP:
        case MASMParser::BP:
        case MASMParser::EAX:
        case MASMParser::EBX:
        case MASMParser::ECX:
        case MASMParser::EDX:
        case MASMParser::ESI:
        case MASMParser::EDI:
        case MASMParser::ESP:
        case MASMParser::EBP: {
          setState(159);
          register();
          break;
        }

        case MASMParser::Integer: {
          setState(160);
          match(MASMParser::Integer);
          break;
        }

        case MASMParser::T__6: {
          setState(161);
          memory();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(164);
      o();
      setState(165);
      memory();
      setState(166);
      match(MASMParser::Separator);
      setState(169);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MASMParser::AH:
        case MASMParser::AL:
        case MASMParser::AX:
        case MASMParser::BH:
        case MASMParser::BL:
        case MASMParser::BX:
        case MASMParser::CH:
        case MASMParser::CL:
        case MASMParser::CX:
        case MASMParser::DH:
        case MASMParser::DL:
        case MASMParser::DX:
        case MASMParser::SI:
        case MASMParser::DI:
        case MASMParser::SP:
        case MASMParser::BP:
        case MASMParser::EAX:
        case MASMParser::EBX:
        case MASMParser::ECX:
        case MASMParser::EDX:
        case MASMParser::ESI:
        case MASMParser::EDI:
        case MASMParser::ESP:
        case MASMParser::EBP: {
          setState(167);
          register();
          break;
        }

        case MASMParser::Integer: {
          setState(168);
          match(MASMParser::Integer);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unuary_exp1Context ------------------------------------------------------------------

MASMParser::Unuary_exp1Context::Unuary_exp1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MASMParser::OpContext* MASMParser::Unuary_exp1Context::op() {
  return getRuleContext<MASMParser::OpContext>(0);
}

tree::TerminalNode* MASMParser::Unuary_exp1Context::Integer() {
  return getToken(MASMParser::Integer, 0);
}

MASMParser::RegisterContext* MASMParser::Unuary_exp1Context::register() {
  return getRuleContext<MASMParser::RegisterContext>(0);
}

MASMParser::MemoryContext* MASMParser::Unuary_exp1Context::memory() {
  return getRuleContext<MASMParser::MemoryContext>(0);
}


size_t MASMParser::Unuary_exp1Context::getRuleIndex() const {
  return MASMParser::RuleUnuary_exp1;
}

antlrcpp::Any MASMParser::Unuary_exp1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitUnuary_exp1(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::Unuary_exp1Context* MASMParser::unuary_exp1() {
  Unuary_exp1Context *_localctx = _tracker.createInstance<Unuary_exp1Context>(_ctx, getState());
  enterRule(_localctx, 10, MASMParser::RuleUnuary_exp1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(173);
    op();
    setState(177);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MASMParser::Integer: {
        setState(174);
        match(MASMParser::Integer);
        break;
      }

      case MASMParser::AH:
      case MASMParser::AL:
      case MASMParser::AX:
      case MASMParser::BH:
      case MASMParser::BL:
      case MASMParser::BX:
      case MASMParser::CH:
      case MASMParser::CL:
      case MASMParser::CX:
      case MASMParser::DH:
      case MASMParser::DL:
      case MASMParser::DX:
      case MASMParser::SI:
      case MASMParser::DI:
      case MASMParser::SP:
      case MASMParser::BP:
      case MASMParser::EAX:
      case MASMParser::EBX:
      case MASMParser::ECX:
      case MASMParser::EDX:
      case MASMParser::ESI:
      case MASMParser::EDI:
      case MASMParser::ESP:
      case MASMParser::EBP: {
        setState(175);
        register();
        break;
      }

      case MASMParser::T__6: {
        setState(176);
        memory();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unuary_exp2Context ------------------------------------------------------------------

MASMParser::Unuary_exp2Context::Unuary_exp2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MASMParser::OpeContext* MASMParser::Unuary_exp2Context::ope() {
  return getRuleContext<MASMParser::OpeContext>(0);
}

MASMParser::RegisterContext* MASMParser::Unuary_exp2Context::register() {
  return getRuleContext<MASMParser::RegisterContext>(0);
}

MASMParser::MemoryContext* MASMParser::Unuary_exp2Context::memory() {
  return getRuleContext<MASMParser::MemoryContext>(0);
}


size_t MASMParser::Unuary_exp2Context::getRuleIndex() const {
  return MASMParser::RuleUnuary_exp2;
}

antlrcpp::Any MASMParser::Unuary_exp2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitUnuary_exp2(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::Unuary_exp2Context* MASMParser::unuary_exp2() {
  Unuary_exp2Context *_localctx = _tracker.createInstance<Unuary_exp2Context>(_ctx, getState());
  enterRule(_localctx, 12, MASMParser::RuleUnuary_exp2);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(179);
    ope();
    setState(182);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MASMParser::AH:
      case MASMParser::AL:
      case MASMParser::AX:
      case MASMParser::BH:
      case MASMParser::BL:
      case MASMParser::BX:
      case MASMParser::CH:
      case MASMParser::CL:
      case MASMParser::CX:
      case MASMParser::DH:
      case MASMParser::DL:
      case MASMParser::DX:
      case MASMParser::SI:
      case MASMParser::DI:
      case MASMParser::SP:
      case MASMParser::BP:
      case MASMParser::EAX:
      case MASMParser::EBX:
      case MASMParser::ECX:
      case MASMParser::EDX:
      case MASMParser::ESI:
      case MASMParser::EDI:
      case MASMParser::ESP:
      case MASMParser::EBP: {
        setState(180);
        register();
        break;
      }

      case MASMParser::T__6: {
        setState(181);
        memory();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Binary_exp2Context ------------------------------------------------------------------

MASMParser::Binary_exp2Context::Binary_exp2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MASMParser::OperContext* MASMParser::Binary_exp2Context::oper() {
  return getRuleContext<MASMParser::OperContext>(0);
}

std::vector<MASMParser::RegisterContext *> MASMParser::Binary_exp2Context::register() {
  return getRuleContexts<MASMParser::RegisterContext>();
}

MASMParser::RegisterContext* MASMParser::Binary_exp2Context::register(size_t i) {
  return getRuleContext<MASMParser::RegisterContext>(i);
}

tree::TerminalNode* MASMParser::Binary_exp2Context::Separator() {
  return getToken(MASMParser::Separator, 0);
}

MASMParser::MemoryContext* MASMParser::Binary_exp2Context::memory() {
  return getRuleContext<MASMParser::MemoryContext>(0);
}


size_t MASMParser::Binary_exp2Context::getRuleIndex() const {
  return MASMParser::RuleBinary_exp2;
}

antlrcpp::Any MASMParser::Binary_exp2Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitBinary_exp2(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::Binary_exp2Context* MASMParser::binary_exp2() {
  Binary_exp2Context *_localctx = _tracker.createInstance<Binary_exp2Context>(_ctx, getState());
  enterRule(_localctx, 14, MASMParser::RuleBinary_exp2);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(196);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(184);
      oper();
      setState(185);
      register();
      setState(186);
      match(MASMParser::Separator);
      setState(189);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MASMParser::AH:
        case MASMParser::AL:
        case MASMParser::AX:
        case MASMParser::BH:
        case MASMParser::BL:
        case MASMParser::BX:
        case MASMParser::CH:
        case MASMParser::CL:
        case MASMParser::CX:
        case MASMParser::DH:
        case MASMParser::DL:
        case MASMParser::DX:
        case MASMParser::SI:
        case MASMParser::DI:
        case MASMParser::SP:
        case MASMParser::BP:
        case MASMParser::EAX:
        case MASMParser::EBX:
        case MASMParser::ECX:
        case MASMParser::EDX:
        case MASMParser::ESI:
        case MASMParser::EDI:
        case MASMParser::ESP:
        case MASMParser::EBP: {
          setState(187);
          register();
          break;
        }

        case MASMParser::T__6: {
          setState(188);
          memory();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(191);
      oper();
      setState(192);
      memory();
      setState(193);
      match(MASMParser::Separator);
      setState(194);
      register();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NotargumentsContext ------------------------------------------------------------------

MASMParser::NotargumentsContext::NotargumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MASMParser::OperaContext* MASMParser::NotargumentsContext::opera() {
  return getRuleContext<MASMParser::OperaContext>(0);
}


size_t MASMParser::NotargumentsContext::getRuleIndex() const {
  return MASMParser::RuleNotarguments;
}

antlrcpp::Any MASMParser::NotargumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitNotarguments(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::NotargumentsContext* MASMParser::notarguments() {
  NotargumentsContext *_localctx = _tracker.createInstance<NotargumentsContext>(_ctx, getState());
  enterRule(_localctx, 16, MASMParser::RuleNotarguments);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(198);
    opera();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Binary_exp3Context ------------------------------------------------------------------

MASMParser::Binary_exp3Context::Binary_exp3Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MASMParser::OperatContext* MASMParser::Binary_exp3Context::operat() {
  return getRuleContext<MASMParser::OperatContext>(0);
}

tree::TerminalNode* MASMParser::Binary_exp3Context::Separator() {
  return getToken(MASMParser::Separator, 0);
}

std::vector<MASMParser::RegisterContext *> MASMParser::Binary_exp3Context::register() {
  return getRuleContexts<MASMParser::RegisterContext>();
}

MASMParser::RegisterContext* MASMParser::Binary_exp3Context::register(size_t i) {
  return getRuleContext<MASMParser::RegisterContext>(i);
}

std::vector<MASMParser::MemoryContext *> MASMParser::Binary_exp3Context::memory() {
  return getRuleContexts<MASMParser::MemoryContext>();
}

MASMParser::MemoryContext* MASMParser::Binary_exp3Context::memory(size_t i) {
  return getRuleContext<MASMParser::MemoryContext>(i);
}

tree::TerminalNode* MASMParser::Binary_exp3Context::Integer() {
  return getToken(MASMParser::Integer, 0);
}


size_t MASMParser::Binary_exp3Context::getRuleIndex() const {
  return MASMParser::RuleBinary_exp3;
}

antlrcpp::Any MASMParser::Binary_exp3Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitBinary_exp3(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::Binary_exp3Context* MASMParser::binary_exp3() {
  Binary_exp3Context *_localctx = _tracker.createInstance<Binary_exp3Context>(_ctx, getState());
  enterRule(_localctx, 18, MASMParser::RuleBinary_exp3);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(200);
    operat();
    setState(203);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MASMParser::AH:
      case MASMParser::AL:
      case MASMParser::AX:
      case MASMParser::BH:
      case MASMParser::BL:
      case MASMParser::BX:
      case MASMParser::CH:
      case MASMParser::CL:
      case MASMParser::CX:
      case MASMParser::DH:
      case MASMParser::DL:
      case MASMParser::DX:
      case MASMParser::SI:
      case MASMParser::DI:
      case MASMParser::SP:
      case MASMParser::BP:
      case MASMParser::EAX:
      case MASMParser::EBX:
      case MASMParser::ECX:
      case MASMParser::EDX:
      case MASMParser::ESI:
      case MASMParser::EDI:
      case MASMParser::ESP:
      case MASMParser::EBP: {
        setState(201);
        register();
        break;
      }

      case MASMParser::T__6: {
        setState(202);
        memory();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(205);
    match(MASMParser::Separator);
    setState(209);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MASMParser::AH:
      case MASMParser::AL:
      case MASMParser::AX:
      case MASMParser::BH:
      case MASMParser::BL:
      case MASMParser::BX:
      case MASMParser::CH:
      case MASMParser::CL:
      case MASMParser::CX:
      case MASMParser::DH:
      case MASMParser::DL:
      case MASMParser::DX:
      case MASMParser::SI:
      case MASMParser::DI:
      case MASMParser::SP:
      case MASMParser::BP:
      case MASMParser::EAX:
      case MASMParser::EBX:
      case MASMParser::ECX:
      case MASMParser::EDX:
      case MASMParser::ESI:
      case MASMParser::EDI:
      case MASMParser::ESP:
      case MASMParser::EBP: {
        setState(206);
        register();
        break;
      }

      case MASMParser::Integer: {
        setState(207);
        match(MASMParser::Integer);
        break;
      }

      case MASMParser::T__6: {
        setState(208);
        memory();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unuary_exp3Context ------------------------------------------------------------------

MASMParser::Unuary_exp3Context::Unuary_exp3Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MASMParser::OperatoContext* MASMParser::Unuary_exp3Context::operato() {
  return getRuleContext<MASMParser::OperatoContext>(0);
}

tree::TerminalNode* MASMParser::Unuary_exp3Context::Identifier() {
  return getToken(MASMParser::Identifier, 0);
}


size_t MASMParser::Unuary_exp3Context::getRuleIndex() const {
  return MASMParser::RuleUnuary_exp3;
}

antlrcpp::Any MASMParser::Unuary_exp3Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitUnuary_exp3(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::Unuary_exp3Context* MASMParser::unuary_exp3() {
  Unuary_exp3Context *_localctx = _tracker.createInstance<Unuary_exp3Context>(_ctx, getState());
  enterRule(_localctx, 20, MASMParser::RuleUnuary_exp3);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(211);
    operato();
    setState(212);
    match(MASMParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Binary_exp4Context ------------------------------------------------------------------

MASMParser::Binary_exp4Context::Binary_exp4Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MASMParser::OperatorContext* MASMParser::Binary_exp4Context::operator() {
  return getRuleContext<MASMParser::OperatorContext>(0);
}

std::vector<MASMParser::RegisterContext *> MASMParser::Binary_exp4Context::register() {
  return getRuleContexts<MASMParser::RegisterContext>();
}

MASMParser::RegisterContext* MASMParser::Binary_exp4Context::register(size_t i) {
  return getRuleContext<MASMParser::RegisterContext>(i);
}

tree::TerminalNode* MASMParser::Binary_exp4Context::Separator() {
  return getToken(MASMParser::Separator, 0);
}

MASMParser::MemoryContext* MASMParser::Binary_exp4Context::memory() {
  return getRuleContext<MASMParser::MemoryContext>(0);
}


size_t MASMParser::Binary_exp4Context::getRuleIndex() const {
  return MASMParser::RuleBinary_exp4;
}

antlrcpp::Any MASMParser::Binary_exp4Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitBinary_exp4(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::Binary_exp4Context* MASMParser::binary_exp4() {
  Binary_exp4Context *_localctx = _tracker.createInstance<Binary_exp4Context>(_ctx, getState());
  enterRule(_localctx, 22, MASMParser::RuleBinary_exp4);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(214);
    operator();
    setState(215);
    register();
    setState(216);
    match(MASMParser::Separator);
    setState(219);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MASMParser::AH:
      case MASMParser::AL:
      case MASMParser::AX:
      case MASMParser::BH:
      case MASMParser::BL:
      case MASMParser::BX:
      case MASMParser::CH:
      case MASMParser::CL:
      case MASMParser::CX:
      case MASMParser::DH:
      case MASMParser::DL:
      case MASMParser::DX:
      case MASMParser::SI:
      case MASMParser::DI:
      case MASMParser::SP:
      case MASMParser::BP:
      case MASMParser::EAX:
      case MASMParser::EBX:
      case MASMParser::ECX:
      case MASMParser::EDX:
      case MASMParser::ESI:
      case MASMParser::EDI:
      case MASMParser::ESP:
      case MASMParser::EBP: {
        setState(217);
        register();
        break;
      }

      case MASMParser::T__6: {
        setState(218);
        memory();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Binary_exp5Context ------------------------------------------------------------------

MASMParser::Binary_exp5Context::Binary_exp5Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MASMParser::LContext* MASMParser::Binary_exp5Context::l() {
  return getRuleContext<MASMParser::LContext>(0);
}

MASMParser::RegisterContext* MASMParser::Binary_exp5Context::register() {
  return getRuleContext<MASMParser::RegisterContext>(0);
}

tree::TerminalNode* MASMParser::Binary_exp5Context::Separator() {
  return getToken(MASMParser::Separator, 0);
}

MASMParser::MemoryContext* MASMParser::Binary_exp5Context::memory() {
  return getRuleContext<MASMParser::MemoryContext>(0);
}


size_t MASMParser::Binary_exp5Context::getRuleIndex() const {
  return MASMParser::RuleBinary_exp5;
}

antlrcpp::Any MASMParser::Binary_exp5Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitBinary_exp5(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::Binary_exp5Context* MASMParser::binary_exp5() {
  Binary_exp5Context *_localctx = _tracker.createInstance<Binary_exp5Context>(_ctx, getState());
  enterRule(_localctx, 24, MASMParser::RuleBinary_exp5);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(221);
    l();
    setState(222);
    register();
    setState(223);
    match(MASMParser::Separator);
    setState(224);
    memory();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Binary_exp6Context ------------------------------------------------------------------

MASMParser::Binary_exp6Context::Binary_exp6Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MASMParser::XContext* MASMParser::Binary_exp6Context::x() {
  return getRuleContext<MASMParser::XContext>(0);
}

tree::TerminalNode* MASMParser::Binary_exp6Context::Separator() {
  return getToken(MASMParser::Separator, 0);
}

std::vector<MASMParser::RegisterContext *> MASMParser::Binary_exp6Context::register() {
  return getRuleContexts<MASMParser::RegisterContext>();
}

MASMParser::RegisterContext* MASMParser::Binary_exp6Context::register(size_t i) {
  return getRuleContext<MASMParser::RegisterContext>(i);
}

MASMParser::MemoryContext* MASMParser::Binary_exp6Context::memory() {
  return getRuleContext<MASMParser::MemoryContext>(0);
}


size_t MASMParser::Binary_exp6Context::getRuleIndex() const {
  return MASMParser::RuleBinary_exp6;
}

antlrcpp::Any MASMParser::Binary_exp6Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitBinary_exp6(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::Binary_exp6Context* MASMParser::binary_exp6() {
  Binary_exp6Context *_localctx = _tracker.createInstance<Binary_exp6Context>(_ctx, getState());
  enterRule(_localctx, 26, MASMParser::RuleBinary_exp6);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(226);
    x();
    setState(229);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MASMParser::AH:
      case MASMParser::AL:
      case MASMParser::AX:
      case MASMParser::BH:
      case MASMParser::BL:
      case MASMParser::BX:
      case MASMParser::CH:
      case MASMParser::CL:
      case MASMParser::CX:
      case MASMParser::DH:
      case MASMParser::DL:
      case MASMParser::DX:
      case MASMParser::SI:
      case MASMParser::DI:
      case MASMParser::SP:
      case MASMParser::BP:
      case MASMParser::EAX:
      case MASMParser::EBX:
      case MASMParser::ECX:
      case MASMParser::EDX:
      case MASMParser::ESI:
      case MASMParser::EDI:
      case MASMParser::ESP:
      case MASMParser::EBP: {
        setState(227);
        register();
        break;
      }

      case MASMParser::T__6: {
        setState(228);
        memory();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(231);
    match(MASMParser::Separator);
    setState(232);
    register();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Binary_exp7Context ------------------------------------------------------------------

MASMParser::Binary_exp7Context::Binary_exp7Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MASMParser::SContext* MASMParser::Binary_exp7Context::s() {
  return getRuleContext<MASMParser::SContext>(0);
}

tree::TerminalNode* MASMParser::Binary_exp7Context::Separator() {
  return getToken(MASMParser::Separator, 0);
}

std::vector<MASMParser::RegisterContext *> MASMParser::Binary_exp7Context::register() {
  return getRuleContexts<MASMParser::RegisterContext>();
}

MASMParser::RegisterContext* MASMParser::Binary_exp7Context::register(size_t i) {
  return getRuleContext<MASMParser::RegisterContext>(i);
}

MASMParser::MemoryContext* MASMParser::Binary_exp7Context::memory() {
  return getRuleContext<MASMParser::MemoryContext>(0);
}

tree::TerminalNode* MASMParser::Binary_exp7Context::Integer() {
  return getToken(MASMParser::Integer, 0);
}


size_t MASMParser::Binary_exp7Context::getRuleIndex() const {
  return MASMParser::RuleBinary_exp7;
}

antlrcpp::Any MASMParser::Binary_exp7Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitBinary_exp7(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::Binary_exp7Context* MASMParser::binary_exp7() {
  Binary_exp7Context *_localctx = _tracker.createInstance<Binary_exp7Context>(_ctx, getState());
  enterRule(_localctx, 28, MASMParser::RuleBinary_exp7);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(234);
    s();
    setState(237);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MASMParser::AH:
      case MASMParser::AL:
      case MASMParser::AX:
      case MASMParser::BH:
      case MASMParser::BL:
      case MASMParser::BX:
      case MASMParser::CH:
      case MASMParser::CL:
      case MASMParser::CX:
      case MASMParser::DH:
      case MASMParser::DL:
      case MASMParser::DX:
      case MASMParser::SI:
      case MASMParser::DI:
      case MASMParser::SP:
      case MASMParser::BP:
      case MASMParser::EAX:
      case MASMParser::EBX:
      case MASMParser::ECX:
      case MASMParser::EDX:
      case MASMParser::ESI:
      case MASMParser::EDI:
      case MASMParser::ESP:
      case MASMParser::EBP: {
        setState(235);
        register();
        break;
      }

      case MASMParser::T__6: {
        setState(236);
        memory();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(239);
    match(MASMParser::Separator);
    setState(242);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MASMParser::Integer: {
        setState(240);
        match(MASMParser::Integer);
        break;
      }

      case MASMParser::AH:
      case MASMParser::AL:
      case MASMParser::AX:
      case MASMParser::BH:
      case MASMParser::BL:
      case MASMParser::BX:
      case MASMParser::CH:
      case MASMParser::CL:
      case MASMParser::CX:
      case MASMParser::DH:
      case MASMParser::DL:
      case MASMParser::DX:
      case MASMParser::SI:
      case MASMParser::DI:
      case MASMParser::SP:
      case MASMParser::BP:
      case MASMParser::EAX:
      case MASMParser::EBX:
      case MASMParser::ECX:
      case MASMParser::EDX:
      case MASMParser::ESI:
      case MASMParser::EDI:
      case MASMParser::ESP:
      case MASMParser::EBP: {
        setState(241);
        register();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Binary_exp8Context ------------------------------------------------------------------

MASMParser::Binary_exp8Context::Binary_exp8Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MASMParser::ShContext* MASMParser::Binary_exp8Context::sh() {
  return getRuleContext<MASMParser::ShContext>(0);
}

std::vector<tree::TerminalNode *> MASMParser::Binary_exp8Context::Separator() {
  return getTokens(MASMParser::Separator);
}

tree::TerminalNode* MASMParser::Binary_exp8Context::Separator(size_t i) {
  return getToken(MASMParser::Separator, i);
}

std::vector<MASMParser::RegisterContext *> MASMParser::Binary_exp8Context::register() {
  return getRuleContexts<MASMParser::RegisterContext>();
}

MASMParser::RegisterContext* MASMParser::Binary_exp8Context::register(size_t i) {
  return getRuleContext<MASMParser::RegisterContext>(i);
}

MASMParser::MemoryContext* MASMParser::Binary_exp8Context::memory() {
  return getRuleContext<MASMParser::MemoryContext>(0);
}

tree::TerminalNode* MASMParser::Binary_exp8Context::Integer() {
  return getToken(MASMParser::Integer, 0);
}


size_t MASMParser::Binary_exp8Context::getRuleIndex() const {
  return MASMParser::RuleBinary_exp8;
}

antlrcpp::Any MASMParser::Binary_exp8Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitBinary_exp8(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::Binary_exp8Context* MASMParser::binary_exp8() {
  Binary_exp8Context *_localctx = _tracker.createInstance<Binary_exp8Context>(_ctx, getState());
  enterRule(_localctx, 30, MASMParser::RuleBinary_exp8);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(244);
    sh();
    setState(247);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MASMParser::AH:
      case MASMParser::AL:
      case MASMParser::AX:
      case MASMParser::BH:
      case MASMParser::BL:
      case MASMParser::BX:
      case MASMParser::CH:
      case MASMParser::CL:
      case MASMParser::CX:
      case MASMParser::DH:
      case MASMParser::DL:
      case MASMParser::DX:
      case MASMParser::SI:
      case MASMParser::DI:
      case MASMParser::SP:
      case MASMParser::BP:
      case MASMParser::EAX:
      case MASMParser::EBX:
      case MASMParser::ECX:
      case MASMParser::EDX:
      case MASMParser::ESI:
      case MASMParser::EDI:
      case MASMParser::ESP:
      case MASMParser::EBP: {
        setState(245);
        register();
        break;
      }

      case MASMParser::T__6: {
        setState(246);
        memory();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(249);
    match(MASMParser::Separator);
    setState(250);
    register();
    setState(251);
    match(MASMParser::Separator);
    setState(254);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MASMParser::AH:
      case MASMParser::AL:
      case MASMParser::AX:
      case MASMParser::BH:
      case MASMParser::BL:
      case MASMParser::BX:
      case MASMParser::CH:
      case MASMParser::CL:
      case MASMParser::CX:
      case MASMParser::DH:
      case MASMParser::DL:
      case MASMParser::DX:
      case MASMParser::SI:
      case MASMParser::DI:
      case MASMParser::SP:
      case MASMParser::BP:
      case MASMParser::EAX:
      case MASMParser::EBX:
      case MASMParser::ECX:
      case MASMParser::EDX:
      case MASMParser::ESI:
      case MASMParser::EDI:
      case MASMParser::ESP:
      case MASMParser::EBP: {
        setState(252);
        register();
        break;
      }

      case MASMParser::Integer: {
        setState(253);
        match(MASMParser::Integer);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Binary_exp9Context ------------------------------------------------------------------

MASMParser::Binary_exp9Context::Binary_exp9Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MASMParser::BContext* MASMParser::Binary_exp9Context::b() {
  return getRuleContext<MASMParser::BContext>(0);
}

tree::TerminalNode* MASMParser::Binary_exp9Context::Separator() {
  return getToken(MASMParser::Separator, 0);
}

std::vector<MASMParser::RegisterContext *> MASMParser::Binary_exp9Context::register() {
  return getRuleContexts<MASMParser::RegisterContext>();
}

MASMParser::RegisterContext* MASMParser::Binary_exp9Context::register(size_t i) {
  return getRuleContext<MASMParser::RegisterContext>(i);
}

std::vector<MASMParser::MemoryContext *> MASMParser::Binary_exp9Context::memory() {
  return getRuleContexts<MASMParser::MemoryContext>();
}

MASMParser::MemoryContext* MASMParser::Binary_exp9Context::memory(size_t i) {
  return getRuleContext<MASMParser::MemoryContext>(i);
}


size_t MASMParser::Binary_exp9Context::getRuleIndex() const {
  return MASMParser::RuleBinary_exp9;
}

antlrcpp::Any MASMParser::Binary_exp9Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitBinary_exp9(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::Binary_exp9Context* MASMParser::binary_exp9() {
  Binary_exp9Context *_localctx = _tracker.createInstance<Binary_exp9Context>(_ctx, getState());
  enterRule(_localctx, 32, MASMParser::RuleBinary_exp9);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(256);
    b();
    setState(259);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MASMParser::AH:
      case MASMParser::AL:
      case MASMParser::AX:
      case MASMParser::BH:
      case MASMParser::BL:
      case MASMParser::BX:
      case MASMParser::CH:
      case MASMParser::CL:
      case MASMParser::CX:
      case MASMParser::DH:
      case MASMParser::DL:
      case MASMParser::DX:
      case MASMParser::SI:
      case MASMParser::DI:
      case MASMParser::SP:
      case MASMParser::BP:
      case MASMParser::EAX:
      case MASMParser::EBX:
      case MASMParser::ECX:
      case MASMParser::EDX:
      case MASMParser::ESI:
      case MASMParser::EDI:
      case MASMParser::ESP:
      case MASMParser::EBP: {
        setState(257);
        register();
        break;
      }

      case MASMParser::T__6: {
        setState(258);
        memory();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(261);
    match(MASMParser::Separator);
    setState(264);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MASMParser::AH:
      case MASMParser::AL:
      case MASMParser::AX:
      case MASMParser::BH:
      case MASMParser::BL:
      case MASMParser::BX:
      case MASMParser::CH:
      case MASMParser::CL:
      case MASMParser::CX:
      case MASMParser::DH:
      case MASMParser::DL:
      case MASMParser::DX:
      case MASMParser::SI:
      case MASMParser::DI:
      case MASMParser::SP:
      case MASMParser::BP:
      case MASMParser::EAX:
      case MASMParser::EBX:
      case MASMParser::ECX:
      case MASMParser::EDX:
      case MASMParser::ESI:
      case MASMParser::EDI:
      case MASMParser::ESP:
      case MASMParser::EBP: {
        setState(262);
        register();
        break;
      }

      case MASMParser::T__6: {
        setState(263);
        memory();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unuary_exp4Context ------------------------------------------------------------------

MASMParser::Unuary_exp4Context::Unuary_exp4Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MASMParser::CallContext* MASMParser::Unuary_exp4Context::call() {
  return getRuleContext<MASMParser::CallContext>(0);
}

MASMParser::RegisterContext* MASMParser::Unuary_exp4Context::register() {
  return getRuleContext<MASMParser::RegisterContext>(0);
}

MASMParser::MemoryContext* MASMParser::Unuary_exp4Context::memory() {
  return getRuleContext<MASMParser::MemoryContext>(0);
}

tree::TerminalNode* MASMParser::Unuary_exp4Context::Integer() {
  return getToken(MASMParser::Integer, 0);
}


size_t MASMParser::Unuary_exp4Context::getRuleIndex() const {
  return MASMParser::RuleUnuary_exp4;
}

antlrcpp::Any MASMParser::Unuary_exp4Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitUnuary_exp4(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::Unuary_exp4Context* MASMParser::unuary_exp4() {
  Unuary_exp4Context *_localctx = _tracker.createInstance<Unuary_exp4Context>(_ctx, getState());
  enterRule(_localctx, 34, MASMParser::RuleUnuary_exp4);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(266);
    call();
    setState(270);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MASMParser::AH:
      case MASMParser::AL:
      case MASMParser::AX:
      case MASMParser::BH:
      case MASMParser::BL:
      case MASMParser::BX:
      case MASMParser::CH:
      case MASMParser::CL:
      case MASMParser::CX:
      case MASMParser::DH:
      case MASMParser::DL:
      case MASMParser::DX:
      case MASMParser::SI:
      case MASMParser::DI:
      case MASMParser::SP:
      case MASMParser::BP:
      case MASMParser::EAX:
      case MASMParser::EBX:
      case MASMParser::ECX:
      case MASMParser::EDX:
      case MASMParser::ESI:
      case MASMParser::EDI:
      case MASMParser::ESP:
      case MASMParser::EBP: {
        setState(267);
        register();
        break;
      }

      case MASMParser::T__6: {
        setState(268);
        memory();
        break;
      }

      case MASMParser::Integer: {
        setState(269);
        match(MASMParser::Integer);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Unuary_exp5Context ------------------------------------------------------------------

MASMParser::Unuary_exp5Context::Unuary_exp5Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MASMParser::InterruptionContext* MASMParser::Unuary_exp5Context::interruption() {
  return getRuleContext<MASMParser::InterruptionContext>(0);
}

tree::TerminalNode* MASMParser::Unuary_exp5Context::Integer() {
  return getToken(MASMParser::Integer, 0);
}


size_t MASMParser::Unuary_exp5Context::getRuleIndex() const {
  return MASMParser::RuleUnuary_exp5;
}

antlrcpp::Any MASMParser::Unuary_exp5Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitUnuary_exp5(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::Unuary_exp5Context* MASMParser::unuary_exp5() {
  Unuary_exp5Context *_localctx = _tracker.createInstance<Unuary_exp5Context>(_ctx, getState());
  enterRule(_localctx, 36, MASMParser::RuleUnuary_exp5);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(272);
    interruption();
    setState(273);
    match(MASMParser::Integer);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Binary_exp10Context ------------------------------------------------------------------

MASMParser::Binary_exp10Context::Binary_exp10Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MASMParser::InContext* MASMParser::Binary_exp10Context::in() {
  return getRuleContext<MASMParser::InContext>(0);
}

std::vector<MASMParser::RegisterContext *> MASMParser::Binary_exp10Context::register() {
  return getRuleContexts<MASMParser::RegisterContext>();
}

MASMParser::RegisterContext* MASMParser::Binary_exp10Context::register(size_t i) {
  return getRuleContext<MASMParser::RegisterContext>(i);
}

tree::TerminalNode* MASMParser::Binary_exp10Context::Separator() {
  return getToken(MASMParser::Separator, 0);
}

tree::TerminalNode* MASMParser::Binary_exp10Context::Integer() {
  return getToken(MASMParser::Integer, 0);
}


size_t MASMParser::Binary_exp10Context::getRuleIndex() const {
  return MASMParser::RuleBinary_exp10;
}

antlrcpp::Any MASMParser::Binary_exp10Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitBinary_exp10(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::Binary_exp10Context* MASMParser::binary_exp10() {
  Binary_exp10Context *_localctx = _tracker.createInstance<Binary_exp10Context>(_ctx, getState());
  enterRule(_localctx, 38, MASMParser::RuleBinary_exp10);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(275);
    in();
    setState(276);
    register();
    setState(277);
    match(MASMParser::Separator);
    setState(280);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MASMParser::AH:
      case MASMParser::AL:
      case MASMParser::AX:
      case MASMParser::BH:
      case MASMParser::BL:
      case MASMParser::BX:
      case MASMParser::CH:
      case MASMParser::CL:
      case MASMParser::CX:
      case MASMParser::DH:
      case MASMParser::DL:
      case MASMParser::DX:
      case MASMParser::SI:
      case MASMParser::DI:
      case MASMParser::SP:
      case MASMParser::BP:
      case MASMParser::EAX:
      case MASMParser::EBX:
      case MASMParser::ECX:
      case MASMParser::EDX:
      case MASMParser::ESI:
      case MASMParser::EDI:
      case MASMParser::ESP:
      case MASMParser::EBP: {
        setState(278);
        register();
        break;
      }

      case MASMParser::Integer: {
        setState(279);
        match(MASMParser::Integer);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Binary_exp11Context ------------------------------------------------------------------

MASMParser::Binary_exp11Context::Binary_exp11Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MASMParser::OutContext* MASMParser::Binary_exp11Context::out() {
  return getRuleContext<MASMParser::OutContext>(0);
}

tree::TerminalNode* MASMParser::Binary_exp11Context::Separator() {
  return getToken(MASMParser::Separator, 0);
}

std::vector<MASMParser::RegisterContext *> MASMParser::Binary_exp11Context::register() {
  return getRuleContexts<MASMParser::RegisterContext>();
}

MASMParser::RegisterContext* MASMParser::Binary_exp11Context::register(size_t i) {
  return getRuleContext<MASMParser::RegisterContext>(i);
}

tree::TerminalNode* MASMParser::Binary_exp11Context::Integer() {
  return getToken(MASMParser::Integer, 0);
}


size_t MASMParser::Binary_exp11Context::getRuleIndex() const {
  return MASMParser::RuleBinary_exp11;
}

antlrcpp::Any MASMParser::Binary_exp11Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitBinary_exp11(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::Binary_exp11Context* MASMParser::binary_exp11() {
  Binary_exp11Context *_localctx = _tracker.createInstance<Binary_exp11Context>(_ctx, getState());
  enterRule(_localctx, 40, MASMParser::RuleBinary_exp11);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(282);
    out();
    setState(285);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MASMParser::AH:
      case MASMParser::AL:
      case MASMParser::AX:
      case MASMParser::BH:
      case MASMParser::BL:
      case MASMParser::BX:
      case MASMParser::CH:
      case MASMParser::CL:
      case MASMParser::CX:
      case MASMParser::DH:
      case MASMParser::DL:
      case MASMParser::DX:
      case MASMParser::SI:
      case MASMParser::DI:
      case MASMParser::SP:
      case MASMParser::BP:
      case MASMParser::EAX:
      case MASMParser::EBX:
      case MASMParser::ECX:
      case MASMParser::EDX:
      case MASMParser::ESI:
      case MASMParser::EDI:
      case MASMParser::ESP:
      case MASMParser::EBP: {
        setState(283);
        register();
        break;
      }

      case MASMParser::Integer: {
        setState(284);
        match(MASMParser::Integer);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(287);
    match(MASMParser::Separator);
    setState(288);
    register();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Binary_exp12Context ------------------------------------------------------------------

MASMParser::Binary_exp12Context::Binary_exp12Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MASMParser::ReContext* MASMParser::Binary_exp12Context::re() {
  return getRuleContext<MASMParser::ReContext>(0);
}

MASMParser::OperaContext* MASMParser::Binary_exp12Context::opera() {
  return getRuleContext<MASMParser::OperaContext>(0);
}


size_t MASMParser::Binary_exp12Context::getRuleIndex() const {
  return MASMParser::RuleBinary_exp12;
}

antlrcpp::Any MASMParser::Binary_exp12Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitBinary_exp12(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::Binary_exp12Context* MASMParser::binary_exp12() {
  Binary_exp12Context *_localctx = _tracker.createInstance<Binary_exp12Context>(_ctx, getState());
  enterRule(_localctx, 42, MASMParser::RuleBinary_exp12);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(290);
    re();
    setState(291);
    opera();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Directive_exp1Context ------------------------------------------------------------------

MASMParser::Directive_exp1Context::Directive_exp1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MASMParser::DirectivesContext* MASMParser::Directive_exp1Context::directives() {
  return getRuleContext<MASMParser::DirectivesContext>(0);
}

tree::TerminalNode* MASMParser::Directive_exp1Context::Identifier() {
  return getToken(MASMParser::Identifier, 0);
}


size_t MASMParser::Directive_exp1Context::getRuleIndex() const {
  return MASMParser::RuleDirective_exp1;
}

antlrcpp::Any MASMParser::Directive_exp1Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitDirective_exp1(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::Directive_exp1Context* MASMParser::directive_exp1() {
  Directive_exp1Context *_localctx = _tracker.createInstance<Directive_exp1Context>(_ctx, getState());
  enterRule(_localctx, 44, MASMParser::RuleDirective_exp1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(297);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      setState(293);
      directives();
      setState(294);
      match(MASMParser::Identifier);
      break;
    }

    case 2: {
      setState(296);
      directives();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariabledeclarationContext ------------------------------------------------------------------

MASMParser::VariabledeclarationContext::VariabledeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MASMParser::VariabledeclarationContext::Identifier() {
  return getToken(MASMParser::Identifier, 0);
}

MASMParser::TyContext* MASMParser::VariabledeclarationContext::ty() {
  return getRuleContext<MASMParser::TyContext>(0);
}

MASMParser::QuestionContext* MASMParser::VariabledeclarationContext::question() {
  return getRuleContext<MASMParser::QuestionContext>(0);
}

tree::TerminalNode* MASMParser::VariabledeclarationContext::String() {
  return getToken(MASMParser::String, 0);
}

tree::TerminalNode* MASMParser::VariabledeclarationContext::Integer() {
  return getToken(MASMParser::Integer, 0);
}


size_t MASMParser::VariabledeclarationContext::getRuleIndex() const {
  return MASMParser::RuleVariabledeclaration;
}

antlrcpp::Any MASMParser::VariabledeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitVariabledeclaration(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::VariabledeclarationContext* MASMParser::variabledeclaration() {
  VariabledeclarationContext *_localctx = _tracker.createInstance<VariabledeclarationContext>(_ctx, getState());
  enterRule(_localctx, 46, MASMParser::RuleVariabledeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(299);
    match(MASMParser::Identifier);
    setState(300);
    ty();
    setState(304);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MASMParser::QUESTION: {
        setState(301);
        question();
        break;
      }

      case MASMParser::String: {
        setState(302);
        match(MASMParser::String);
        break;
      }

      case MASMParser::Integer: {
        setState(303);
        match(MASMParser::Integer);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemoryContext ------------------------------------------------------------------

MASMParser::MemoryContext::MemoryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MASMParser::RegisterContext *> MASMParser::MemoryContext::register() {
  return getRuleContexts<MASMParser::RegisterContext>();
}

MASMParser::RegisterContext* MASMParser::MemoryContext::register(size_t i) {
  return getRuleContext<MASMParser::RegisterContext>(i);
}

tree::TerminalNode* MASMParser::MemoryContext::Identifier() {
  return getToken(MASMParser::Identifier, 0);
}

tree::TerminalNode* MASMParser::MemoryContext::Integer() {
  return getToken(MASMParser::Integer, 0);
}

tree::TerminalNode* MASMParser::MemoryContext::Hexnum() {
  return getToken(MASMParser::Hexnum, 0);
}

tree::TerminalNode* MASMParser::MemoryContext::Octalnum() {
  return getToken(MASMParser::Octalnum, 0);
}


size_t MASMParser::MemoryContext::getRuleIndex() const {
  return MASMParser::RuleMemory;
}

antlrcpp::Any MASMParser::MemoryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitMemory(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::MemoryContext* MASMParser::memory() {
  MemoryContext *_localctx = _tracker.createInstance<MemoryContext>(_ctx, getState());
  enterRule(_localctx, 48, MASMParser::RuleMemory);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(306);
    match(MASMParser::T__6);
    setState(309);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MASMParser::AH:
      case MASMParser::AL:
      case MASMParser::AX:
      case MASMParser::BH:
      case MASMParser::BL:
      case MASMParser::BX:
      case MASMParser::CH:
      case MASMParser::CL:
      case MASMParser::CX:
      case MASMParser::DH:
      case MASMParser::DL:
      case MASMParser::DX:
      case MASMParser::SI:
      case MASMParser::DI:
      case MASMParser::SP:
      case MASMParser::BP:
      case MASMParser::EAX:
      case MASMParser::EBX:
      case MASMParser::ECX:
      case MASMParser::EDX:
      case MASMParser::ESI:
      case MASMParser::EDI:
      case MASMParser::ESP:
      case MASMParser::EBP: {
        setState(307);
        register();
        break;
      }

      case MASMParser::Identifier: {
        setState(308);
        match(MASMParser::Identifier);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(322);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MASMParser::T__7) {
      setState(311);
      match(MASMParser::T__7);
      setState(320);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case MASMParser::AH:
        case MASMParser::AL:
        case MASMParser::AX:
        case MASMParser::BH:
        case MASMParser::BL:
        case MASMParser::BX:
        case MASMParser::CH:
        case MASMParser::CL:
        case MASMParser::CX:
        case MASMParser::DH:
        case MASMParser::DL:
        case MASMParser::DX:
        case MASMParser::SI:
        case MASMParser::DI:
        case MASMParser::SP:
        case MASMParser::BP:
        case MASMParser::EAX:
        case MASMParser::EBX:
        case MASMParser::ECX:
        case MASMParser::EDX:
        case MASMParser::ESI:
        case MASMParser::EDI:
        case MASMParser::ESP:
        case MASMParser::EBP: {
          setState(312);
          register();
          setState(315);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (_la == MASMParser::T__7) {
            setState(313);
            match(MASMParser::T__7);
            setState(314);
            _la = _input->LA(1);
            if (!(((((_la - 266) & ~ 0x3fULL) == 0) &&
              ((1ULL << (_la - 266)) & ((1ULL << (MASMParser::Hexnum - 266))
              | (1ULL << (MASMParser::Integer - 266))
              | (1ULL << (MASMParser::Octalnum - 266)))) != 0))) {
            _errHandler->recoverInline(this);
            }
            else {
              _errHandler->reportMatch(this);
              consume();
            }
          }
          break;
        }

        case MASMParser::Integer: {
          setState(317);
          match(MASMParser::Integer);
          break;
        }

        case MASMParser::Hexnum: {
          setState(318);
          match(MASMParser::Hexnum);
          break;
        }

        case MASMParser::Octalnum: {
          setState(319);
          match(MASMParser::Octalnum);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
    }
    setState(324);
    match(MASMParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SegmentosContext ------------------------------------------------------------------

MASMParser::SegmentosContext::SegmentosContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MASMParser::SegmentosContext::DS() {
  return getToken(MASMParser::DS, 0);
}

tree::TerminalNode* MASMParser::SegmentosContext::ES() {
  return getToken(MASMParser::ES, 0);
}

tree::TerminalNode* MASMParser::SegmentosContext::CS() {
  return getToken(MASMParser::CS, 0);
}

tree::TerminalNode* MASMParser::SegmentosContext::SS() {
  return getToken(MASMParser::SS, 0);
}

tree::TerminalNode* MASMParser::SegmentosContext::GS() {
  return getToken(MASMParser::GS, 0);
}

tree::TerminalNode* MASMParser::SegmentosContext::FS() {
  return getToken(MASMParser::FS, 0);
}


size_t MASMParser::SegmentosContext::getRuleIndex() const {
  return MASMParser::RuleSegmentos;
}

antlrcpp::Any MASMParser::SegmentosContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitSegmentos(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::SegmentosContext* MASMParser::segmentos() {
  SegmentosContext *_localctx = _tracker.createInstance<SegmentosContext>(_ctx, getState());
  enterRule(_localctx, 50, MASMParser::RuleSegmentos);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(326);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MASMParser::DS)
      | (1ULL << MASMParser::ES)
      | (1ULL << MASMParser::CS)
      | (1ULL << MASMParser::SS)
      | (1ULL << MASMParser::GS)
      | (1ULL << MASMParser::FS))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RegisterContext ------------------------------------------------------------------

MASMParser::RegisterContext::RegisterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MASMParser::RegisterContext::AH() {
  return getToken(MASMParser::AH, 0);
}

tree::TerminalNode* MASMParser::RegisterContext::AL() {
  return getToken(MASMParser::AL, 0);
}

tree::TerminalNode* MASMParser::RegisterContext::AX() {
  return getToken(MASMParser::AX, 0);
}

tree::TerminalNode* MASMParser::RegisterContext::BH() {
  return getToken(MASMParser::BH, 0);
}

tree::TerminalNode* MASMParser::RegisterContext::BL() {
  return getToken(MASMParser::BL, 0);
}

tree::TerminalNode* MASMParser::RegisterContext::BX() {
  return getToken(MASMParser::BX, 0);
}

tree::TerminalNode* MASMParser::RegisterContext::CH() {
  return getToken(MASMParser::CH, 0);
}

tree::TerminalNode* MASMParser::RegisterContext::CL() {
  return getToken(MASMParser::CL, 0);
}

tree::TerminalNode* MASMParser::RegisterContext::CX() {
  return getToken(MASMParser::CX, 0);
}

tree::TerminalNode* MASMParser::RegisterContext::DH() {
  return getToken(MASMParser::DH, 0);
}

tree::TerminalNode* MASMParser::RegisterContext::DL() {
  return getToken(MASMParser::DL, 0);
}

tree::TerminalNode* MASMParser::RegisterContext::DX() {
  return getToken(MASMParser::DX, 0);
}

tree::TerminalNode* MASMParser::RegisterContext::SI() {
  return getToken(MASMParser::SI, 0);
}

tree::TerminalNode* MASMParser::RegisterContext::DI() {
  return getToken(MASMParser::DI, 0);
}

tree::TerminalNode* MASMParser::RegisterContext::SP() {
  return getToken(MASMParser::SP, 0);
}

tree::TerminalNode* MASMParser::RegisterContext::BP() {
  return getToken(MASMParser::BP, 0);
}

tree::TerminalNode* MASMParser::RegisterContext::EAX() {
  return getToken(MASMParser::EAX, 0);
}

tree::TerminalNode* MASMParser::RegisterContext::EBX() {
  return getToken(MASMParser::EBX, 0);
}

tree::TerminalNode* MASMParser::RegisterContext::ECX() {
  return getToken(MASMParser::ECX, 0);
}

tree::TerminalNode* MASMParser::RegisterContext::EDX() {
  return getToken(MASMParser::EDX, 0);
}

tree::TerminalNode* MASMParser::RegisterContext::ESI() {
  return getToken(MASMParser::ESI, 0);
}

tree::TerminalNode* MASMParser::RegisterContext::EDI() {
  return getToken(MASMParser::EDI, 0);
}

tree::TerminalNode* MASMParser::RegisterContext::ESP() {
  return getToken(MASMParser::ESP, 0);
}

tree::TerminalNode* MASMParser::RegisterContext::EBP() {
  return getToken(MASMParser::EBP, 0);
}


size_t MASMParser::RegisterContext::getRuleIndex() const {
  return MASMParser::RuleRegister;
}

antlrcpp::Any MASMParser::RegisterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitRegister(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::RegisterContext* MASMParser::register() {
  RegisterContext *_localctx = _tracker.createInstance<RegisterContext>(_ctx, getState());
  enterRule(_localctx, 52, MASMParser::RuleRegister);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(328);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MASMParser::AH)
      | (1ULL << MASMParser::AL)
      | (1ULL << MASMParser::AX)
      | (1ULL << MASMParser::BH)
      | (1ULL << MASMParser::BL)
      | (1ULL << MASMParser::BX)
      | (1ULL << MASMParser::CH)
      | (1ULL << MASMParser::CL)
      | (1ULL << MASMParser::CX)
      | (1ULL << MASMParser::DH)
      | (1ULL << MASMParser::DL)
      | (1ULL << MASMParser::DX)
      | (1ULL << MASMParser::SI)
      | (1ULL << MASMParser::DI)
      | (1ULL << MASMParser::SP)
      | (1ULL << MASMParser::BP)
      | (1ULL << MASMParser::EAX)
      | (1ULL << MASMParser::EBX)
      | (1ULL << MASMParser::ECX)
      | (1ULL << MASMParser::EDX)
      | (1ULL << MASMParser::ESI)
      | (1ULL << MASMParser::EDI)
      | (1ULL << MASMParser::ESP)
      | (1ULL << MASMParser::EBP))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OContext ------------------------------------------------------------------

MASMParser::OContext::OContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MASMParser::OContext::MOV() {
  return getToken(MASMParser::MOV, 0);
}

tree::TerminalNode* MASMParser::OContext::CMP() {
  return getToken(MASMParser::CMP, 0);
}

tree::TerminalNode* MASMParser::OContext::TEST() {
  return getToken(MASMParser::TEST, 0);
}


size_t MASMParser::OContext::getRuleIndex() const {
  return MASMParser::RuleO;
}

antlrcpp::Any MASMParser::OContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitO(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::OContext* MASMParser::o() {
  OContext *_localctx = _tracker.createInstance<OContext>(_ctx, getState());
  enterRule(_localctx, 54, MASMParser::RuleO);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(330);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MASMParser::MOV)
      | (1ULL << MASMParser::CMP)
      | (1ULL << MASMParser::TEST))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpContext ------------------------------------------------------------------

MASMParser::OpContext::OpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MASMParser::OpContext::PUSH() {
  return getToken(MASMParser::PUSH, 0);
}


size_t MASMParser::OpContext::getRuleIndex() const {
  return MASMParser::RuleOp;
}

antlrcpp::Any MASMParser::OpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitOp(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::OpContext* MASMParser::op() {
  OpContext *_localctx = _tracker.createInstance<OpContext>(_ctx, getState());
  enterRule(_localctx, 56, MASMParser::RuleOp);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(332);
    match(MASMParser::PUSH);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpeContext ------------------------------------------------------------------

MASMParser::OpeContext::OpeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MASMParser::OpeContext::POP() {
  return getToken(MASMParser::POP, 0);
}

tree::TerminalNode* MASMParser::OpeContext::IDIV() {
  return getToken(MASMParser::IDIV, 0);
}

tree::TerminalNode* MASMParser::OpeContext::INC() {
  return getToken(MASMParser::INC, 0);
}

tree::TerminalNode* MASMParser::OpeContext::DEC() {
  return getToken(MASMParser::DEC, 0);
}

tree::TerminalNode* MASMParser::OpeContext::NEG() {
  return getToken(MASMParser::NEG, 0);
}

tree::TerminalNode* MASMParser::OpeContext::MUL() {
  return getToken(MASMParser::MUL, 0);
}

tree::TerminalNode* MASMParser::OpeContext::DIV() {
  return getToken(MASMParser::DIV, 0);
}

tree::TerminalNode* MASMParser::OpeContext::IMUL() {
  return getToken(MASMParser::IMUL, 0);
}

tree::TerminalNode* MASMParser::OpeContext::NOT() {
  return getToken(MASMParser::NOT, 0);
}

tree::TerminalNode* MASMParser::OpeContext::SETPO() {
  return getToken(MASMParser::SETPO, 0);
}

tree::TerminalNode* MASMParser::OpeContext::SETAE() {
  return getToken(MASMParser::SETAE, 0);
}

tree::TerminalNode* MASMParser::OpeContext::SETNLE() {
  return getToken(MASMParser::SETNLE, 0);
}

tree::TerminalNode* MASMParser::OpeContext::SETC() {
  return getToken(MASMParser::SETC, 0);
}

tree::TerminalNode* MASMParser::OpeContext::SETNO() {
  return getToken(MASMParser::SETNO, 0);
}

tree::TerminalNode* MASMParser::OpeContext::SETNB() {
  return getToken(MASMParser::SETNB, 0);
}

tree::TerminalNode* MASMParser::OpeContext::SETP() {
  return getToken(MASMParser::SETP, 0);
}

tree::TerminalNode* MASMParser::OpeContext::SETNGE() {
  return getToken(MASMParser::SETNGE, 0);
}

tree::TerminalNode* MASMParser::OpeContext::SETL() {
  return getToken(MASMParser::SETL, 0);
}

tree::TerminalNode* MASMParser::OpeContext::SETGE() {
  return getToken(MASMParser::SETGE, 0);
}

tree::TerminalNode* MASMParser::OpeContext::SETPE() {
  return getToken(MASMParser::SETPE, 0);
}

tree::TerminalNode* MASMParser::OpeContext::SETNL() {
  return getToken(MASMParser::SETNL, 0);
}

tree::TerminalNode* MASMParser::OpeContext::SETNZ() {
  return getToken(MASMParser::SETNZ, 0);
}

tree::TerminalNode* MASMParser::OpeContext::SETNE() {
  return getToken(MASMParser::SETNE, 0);
}

tree::TerminalNode* MASMParser::OpeContext::SETNC() {
  return getToken(MASMParser::SETNC, 0);
}

tree::TerminalNode* MASMParser::OpeContext::SETBE() {
  return getToken(MASMParser::SETBE, 0);
}

tree::TerminalNode* MASMParser::OpeContext::SETNP() {
  return getToken(MASMParser::SETNP, 0);
}

tree::TerminalNode* MASMParser::OpeContext::SETNS() {
  return getToken(MASMParser::SETNS, 0);
}

tree::TerminalNode* MASMParser::OpeContext::SETO() {
  return getToken(MASMParser::SETO, 0);
}

tree::TerminalNode* MASMParser::OpeContext::SETNA() {
  return getToken(MASMParser::SETNA, 0);
}

tree::TerminalNode* MASMParser::OpeContext::SETNAE() {
  return getToken(MASMParser::SETNAE, 0);
}

tree::TerminalNode* MASMParser::OpeContext::SETZ() {
  return getToken(MASMParser::SETZ, 0);
}

tree::TerminalNode* MASMParser::OpeContext::SETLE() {
  return getToken(MASMParser::SETLE, 0);
}

tree::TerminalNode* MASMParser::OpeContext::SETNBE() {
  return getToken(MASMParser::SETNBE, 0);
}

tree::TerminalNode* MASMParser::OpeContext::SETS() {
  return getToken(MASMParser::SETS, 0);
}

tree::TerminalNode* MASMParser::OpeContext::SETE() {
  return getToken(MASMParser::SETE, 0);
}

tree::TerminalNode* MASMParser::OpeContext::SETB() {
  return getToken(MASMParser::SETB, 0);
}

tree::TerminalNode* MASMParser::OpeContext::SETA() {
  return getToken(MASMParser::SETA, 0);
}

tree::TerminalNode* MASMParser::OpeContext::SETG() {
  return getToken(MASMParser::SETG, 0);
}

tree::TerminalNode* MASMParser::OpeContext::SETNG() {
  return getToken(MASMParser::SETNG, 0);
}


size_t MASMParser::OpeContext::getRuleIndex() const {
  return MASMParser::RuleOpe;
}

antlrcpp::Any MASMParser::OpeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitOpe(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::OpeContext* MASMParser::ope() {
  OpeContext *_localctx = _tracker.createInstance<OpeContext>(_ctx, getState());
  enterRule(_localctx, 58, MASMParser::RuleOpe);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(334);
    _la = _input->LA(1);
    if (!(((((_la - 45) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 45)) & ((1ULL << (MASMParser::POP - 45))
      | (1ULL << (MASMParser::IDIV - 45))
      | (1ULL << (MASMParser::INC - 45))
      | (1ULL << (MASMParser::DEC - 45))
      | (1ULL << (MASMParser::NEG - 45))
      | (1ULL << (MASMParser::MUL - 45))
      | (1ULL << (MASMParser::DIV - 45))
      | (1ULL << (MASMParser::IMUL - 45))
      | (1ULL << (MASMParser::NOT - 45))
      | (1ULL << (MASMParser::SETPO - 45))
      | (1ULL << (MASMParser::SETAE - 45))
      | (1ULL << (MASMParser::SETNLE - 45))
      | (1ULL << (MASMParser::SETC - 45))
      | (1ULL << (MASMParser::SETNO - 45))
      | (1ULL << (MASMParser::SETNB - 45))
      | (1ULL << (MASMParser::SETP - 45))
      | (1ULL << (MASMParser::SETNGE - 45))
      | (1ULL << (MASMParser::SETL - 45))
      | (1ULL << (MASMParser::SETGE - 45))
      | (1ULL << (MASMParser::SETPE - 45))
      | (1ULL << (MASMParser::SETNL - 45))
      | (1ULL << (MASMParser::SETNZ - 45))
      | (1ULL << (MASMParser::SETNE - 45))
      | (1ULL << (MASMParser::SETNC - 45))
      | (1ULL << (MASMParser::SETBE - 45))
      | (1ULL << (MASMParser::SETNP - 45))
      | (1ULL << (MASMParser::SETNS - 45))
      | (1ULL << (MASMParser::SETO - 45))
      | (1ULL << (MASMParser::SETNA - 45))
      | (1ULL << (MASMParser::SETNAE - 45))
      | (1ULL << (MASMParser::SETZ - 45))
      | (1ULL << (MASMParser::SETLE - 45))
      | (1ULL << (MASMParser::SETNBE - 45))
      | (1ULL << (MASMParser::SETS - 45))
      | (1ULL << (MASMParser::SETE - 45))
      | (1ULL << (MASMParser::SETB - 45))
      | (1ULL << (MASMParser::SETA - 45))
      | (1ULL << (MASMParser::SETG - 45))
      | (1ULL << (MASMParser::SETNG - 45)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperContext ------------------------------------------------------------------

MASMParser::OperContext::OperContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MASMParser::OperContext::XCHG() {
  return getToken(MASMParser::XCHG, 0);
}


size_t MASMParser::OperContext::getRuleIndex() const {
  return MASMParser::RuleOper;
}

antlrcpp::Any MASMParser::OperContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitOper(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::OperContext* MASMParser::oper() {
  OperContext *_localctx = _tracker.createInstance<OperContext>(_ctx, getState());
  enterRule(_localctx, 60, MASMParser::RuleOper);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(336);
    match(MASMParser::XCHG);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperaContext ------------------------------------------------------------------

MASMParser::OperaContext::OperaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MASMParser::OperaContext::POPAD() {
  return getToken(MASMParser::POPAD, 0);
}

tree::TerminalNode* MASMParser::OperaContext::AAA() {
  return getToken(MASMParser::AAA, 0);
}

tree::TerminalNode* MASMParser::OperaContext::POPA() {
  return getToken(MASMParser::POPA, 0);
}

tree::TerminalNode* MASMParser::OperaContext::POPFD() {
  return getToken(MASMParser::POPFD, 0);
}

tree::TerminalNode* MASMParser::OperaContext::CWD() {
  return getToken(MASMParser::CWD, 0);
}

tree::TerminalNode* MASMParser::OperaContext::LAHF() {
  return getToken(MASMParser::LAHF, 0);
}

tree::TerminalNode* MASMParser::OperaContext::PUSHAD() {
  return getToken(MASMParser::PUSHAD, 0);
}

tree::TerminalNode* MASMParser::OperaContext::PUSHF() {
  return getToken(MASMParser::PUSHF, 0);
}

tree::TerminalNode* MASMParser::OperaContext::AAS() {
  return getToken(MASMParser::AAS, 0);
}

tree::TerminalNode* MASMParser::OperaContext::BSWAP() {
  return getToken(MASMParser::BSWAP, 0);
}

tree::TerminalNode* MASMParser::OperaContext::PUSHFD() {
  return getToken(MASMParser::PUSHFD, 0);
}

tree::TerminalNode* MASMParser::OperaContext::CBW() {
  return getToken(MASMParser::CBW, 0);
}

tree::TerminalNode* MASMParser::OperaContext::CWDE() {
  return getToken(MASMParser::CWDE, 0);
}

tree::TerminalNode* MASMParser::OperaContext::XLAT() {
  return getToken(MASMParser::XLAT, 0);
}

tree::TerminalNode* MASMParser::OperaContext::AAM() {
  return getToken(MASMParser::AAM, 0);
}

tree::TerminalNode* MASMParser::OperaContext::AAD() {
  return getToken(MASMParser::AAD, 0);
}

tree::TerminalNode* MASMParser::OperaContext::CDQ() {
  return getToken(MASMParser::CDQ, 0);
}

tree::TerminalNode* MASMParser::OperaContext::DAA() {
  return getToken(MASMParser::DAA, 0);
}

tree::TerminalNode* MASMParser::OperaContext::SAHF() {
  return getToken(MASMParser::SAHF, 0);
}

tree::TerminalNode* MASMParser::OperaContext::DAS() {
  return getToken(MASMParser::DAS, 0);
}

tree::TerminalNode* MASMParser::OperaContext::INTO() {
  return getToken(MASMParser::INTO, 0);
}

tree::TerminalNode* MASMParser::OperaContext::IRET() {
  return getToken(MASMParser::IRET, 0);
}

tree::TerminalNode* MASMParser::OperaContext::CLC() {
  return getToken(MASMParser::CLC, 0);
}

tree::TerminalNode* MASMParser::OperaContext::STC() {
  return getToken(MASMParser::STC, 0);
}

tree::TerminalNode* MASMParser::OperaContext::CMC() {
  return getToken(MASMParser::CMC, 0);
}

tree::TerminalNode* MASMParser::OperaContext::CLD() {
  return getToken(MASMParser::CLD, 0);
}

tree::TerminalNode* MASMParser::OperaContext::STD() {
  return getToken(MASMParser::STD, 0);
}

tree::TerminalNode* MASMParser::OperaContext::CLI() {
  return getToken(MASMParser::CLI, 0);
}

tree::TerminalNode* MASMParser::OperaContext::STI() {
  return getToken(MASMParser::STI, 0);
}

tree::TerminalNode* MASMParser::OperaContext::MOVSB() {
  return getToken(MASMParser::MOVSB, 0);
}

tree::TerminalNode* MASMParser::OperaContext::MOVSW() {
  return getToken(MASMParser::MOVSW, 0);
}

tree::TerminalNode* MASMParser::OperaContext::MOVSD() {
  return getToken(MASMParser::MOVSD, 0);
}

tree::TerminalNode* MASMParser::OperaContext::LODS() {
  return getToken(MASMParser::LODS, 0);
}

tree::TerminalNode* MASMParser::OperaContext::LODSB() {
  return getToken(MASMParser::LODSB, 0);
}

tree::TerminalNode* MASMParser::OperaContext::LODSW() {
  return getToken(MASMParser::LODSW, 0);
}

tree::TerminalNode* MASMParser::OperaContext::LODSD() {
  return getToken(MASMParser::LODSD, 0);
}

tree::TerminalNode* MASMParser::OperaContext::STOS() {
  return getToken(MASMParser::STOS, 0);
}

tree::TerminalNode* MASMParser::OperaContext::STOSB() {
  return getToken(MASMParser::STOSB, 0);
}

tree::TerminalNode* MASMParser::OperaContext::STOSW() {
  return getToken(MASMParser::STOSW, 0);
}

tree::TerminalNode* MASMParser::OperaContext::SOTSD() {
  return getToken(MASMParser::SOTSD, 0);
}

tree::TerminalNode* MASMParser::OperaContext::SCAS() {
  return getToken(MASMParser::SCAS, 0);
}

tree::TerminalNode* MASMParser::OperaContext::SCASB() {
  return getToken(MASMParser::SCASB, 0);
}

tree::TerminalNode* MASMParser::OperaContext::SCASW() {
  return getToken(MASMParser::SCASW, 0);
}

tree::TerminalNode* MASMParser::OperaContext::SCASD() {
  return getToken(MASMParser::SCASD, 0);
}

tree::TerminalNode* MASMParser::OperaContext::CMPS() {
  return getToken(MASMParser::CMPS, 0);
}

tree::TerminalNode* MASMParser::OperaContext::CMPSB() {
  return getToken(MASMParser::CMPSB, 0);
}

tree::TerminalNode* MASMParser::OperaContext::CMPSW() {
  return getToken(MASMParser::CMPSW, 0);
}

tree::TerminalNode* MASMParser::OperaContext::CMPSD() {
  return getToken(MASMParser::CMPSD, 0);
}

tree::TerminalNode* MASMParser::OperaContext::INSB() {
  return getToken(MASMParser::INSB, 0);
}

tree::TerminalNode* MASMParser::OperaContext::INSW() {
  return getToken(MASMParser::INSW, 0);
}

tree::TerminalNode* MASMParser::OperaContext::INSD() {
  return getToken(MASMParser::INSD, 0);
}

tree::TerminalNode* MASMParser::OperaContext::OUTSB() {
  return getToken(MASMParser::OUTSB, 0);
}

tree::TerminalNode* MASMParser::OperaContext::OUTSW() {
  return getToken(MASMParser::OUTSW, 0);
}

tree::TerminalNode* MASMParser::OperaContext::OUTSD() {
  return getToken(MASMParser::OUTSD, 0);
}


size_t MASMParser::OperaContext::getRuleIndex() const {
  return MASMParser::RuleOpera;
}

antlrcpp::Any MASMParser::OperaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitOpera(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::OperaContext* MASMParser::opera() {
  OperaContext *_localctx = _tracker.createInstance<OperaContext>(_ctx, getState());
  enterRule(_localctx, 62, MASMParser::RuleOpera);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(338);
    _la = _input->LA(1);
    if (!(((((_la - 85) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 85)) & ((1ULL << (MASMParser::POPAD - 85))
      | (1ULL << (MASMParser::AAA - 85))
      | (1ULL << (MASMParser::POPA - 85))
      | (1ULL << (MASMParser::POPFD - 85))
      | (1ULL << (MASMParser::CWD - 85))
      | (1ULL << (MASMParser::LAHF - 85))
      | (1ULL << (MASMParser::PUSHAD - 85))
      | (1ULL << (MASMParser::PUSHF - 85))
      | (1ULL << (MASMParser::AAS - 85))
      | (1ULL << (MASMParser::BSWAP - 85))
      | (1ULL << (MASMParser::PUSHFD - 85))
      | (1ULL << (MASMParser::CBW - 85))
      | (1ULL << (MASMParser::CWDE - 85))
      | (1ULL << (MASMParser::XLAT - 85))
      | (1ULL << (MASMParser::AAM - 85))
      | (1ULL << (MASMParser::AAD - 85))
      | (1ULL << (MASMParser::CDQ - 85))
      | (1ULL << (MASMParser::DAA - 85))
      | (1ULL << (MASMParser::SAHF - 85))
      | (1ULL << (MASMParser::DAS - 85))
      | (1ULL << (MASMParser::INTO - 85))
      | (1ULL << (MASMParser::IRET - 85))
      | (1ULL << (MASMParser::CLC - 85))
      | (1ULL << (MASMParser::STC - 85))
      | (1ULL << (MASMParser::CMC - 85))
      | (1ULL << (MASMParser::CLD - 85))
      | (1ULL << (MASMParser::STD - 85))
      | (1ULL << (MASMParser::CLI - 85))
      | (1ULL << (MASMParser::STI - 85))
      | (1ULL << (MASMParser::MOVSB - 85))
      | (1ULL << (MASMParser::MOVSW - 85))
      | (1ULL << (MASMParser::MOVSD - 85))
      | (1ULL << (MASMParser::LODS - 85))
      | (1ULL << (MASMParser::LODSB - 85))
      | (1ULL << (MASMParser::LODSW - 85))
      | (1ULL << (MASMParser::LODSD - 85))
      | (1ULL << (MASMParser::STOS - 85))
      | (1ULL << (MASMParser::STOSB - 85))
      | (1ULL << (MASMParser::STOSW - 85))
      | (1ULL << (MASMParser::SOTSD - 85))
      | (1ULL << (MASMParser::SCAS - 85))
      | (1ULL << (MASMParser::SCASB - 85))
      | (1ULL << (MASMParser::SCASW - 85))
      | (1ULL << (MASMParser::SCASD - 85))
      | (1ULL << (MASMParser::CMPS - 85))
      | (1ULL << (MASMParser::CMPSB - 85))
      | (1ULL << (MASMParser::CMPSW - 85))
      | (1ULL << (MASMParser::CMPSD - 85))
      | (1ULL << (MASMParser::INSB - 85))
      | (1ULL << (MASMParser::INSW - 85))
      | (1ULL << (MASMParser::INSD - 85))
      | (1ULL << (MASMParser::OUTSB - 85))
      | (1ULL << (MASMParser::OUTSW - 85))
      | (1ULL << (MASMParser::OUTSD - 85)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatContext ------------------------------------------------------------------

MASMParser::OperatContext::OperatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MASMParser::OperatContext::ADC() {
  return getToken(MASMParser::ADC, 0);
}

tree::TerminalNode* MASMParser::OperatContext::ADD() {
  return getToken(MASMParser::ADD, 0);
}

tree::TerminalNode* MASMParser::OperatContext::SUB() {
  return getToken(MASMParser::SUB, 0);
}

tree::TerminalNode* MASMParser::OperatContext::CBB() {
  return getToken(MASMParser::CBB, 0);
}

tree::TerminalNode* MASMParser::OperatContext::XOR() {
  return getToken(MASMParser::XOR, 0);
}

tree::TerminalNode* MASMParser::OperatContext::OR() {
  return getToken(MASMParser::OR, 0);
}


size_t MASMParser::OperatContext::getRuleIndex() const {
  return MASMParser::RuleOperat;
}

antlrcpp::Any MASMParser::OperatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitOperat(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::OperatContext* MASMParser::operat() {
  OperatContext *_localctx = _tracker.createInstance<OperatContext>(_ctx, getState());
  enterRule(_localctx, 64, MASMParser::RuleOperat);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(340);
    _la = _input->LA(1);
    if (!(((((_la - 139) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 139)) & ((1ULL << (MASMParser::ADC - 139))
      | (1ULL << (MASMParser::ADD - 139))
      | (1ULL << (MASMParser::SUB - 139))
      | (1ULL << (MASMParser::CBB - 139))
      | (1ULL << (MASMParser::XOR - 139))
      | (1ULL << (MASMParser::OR - 139)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatoContext ------------------------------------------------------------------

MASMParser::OperatoContext::OperatoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MASMParser::OperatoContext::JNBE() {
  return getToken(MASMParser::JNBE, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::JNZ() {
  return getToken(MASMParser::JNZ, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::JPO() {
  return getToken(MASMParser::JPO, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::JZ() {
  return getToken(MASMParser::JZ, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::JS() {
  return getToken(MASMParser::JS, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::LOOPNZ() {
  return getToken(MASMParser::LOOPNZ, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::JGE() {
  return getToken(MASMParser::JGE, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::JB() {
  return getToken(MASMParser::JB, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::JNB() {
  return getToken(MASMParser::JNB, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::JO() {
  return getToken(MASMParser::JO, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::JP() {
  return getToken(MASMParser::JP, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::JNO() {
  return getToken(MASMParser::JNO, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::JNL() {
  return getToken(MASMParser::JNL, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::JNAE() {
  return getToken(MASMParser::JNAE, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::LOOPZ() {
  return getToken(MASMParser::LOOPZ, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::JMP() {
  return getToken(MASMParser::JMP, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::JNP() {
  return getToken(MASMParser::JNP, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::LOOP() {
  return getToken(MASMParser::LOOP, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::JL() {
  return getToken(MASMParser::JL, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::JCXZ() {
  return getToken(MASMParser::JCXZ, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::JAE() {
  return getToken(MASMParser::JAE, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::JNGE() {
  return getToken(MASMParser::JNGE, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::JA() {
  return getToken(MASMParser::JA, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::LOOPNE() {
  return getToken(MASMParser::LOOPNE, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::LOOPE() {
  return getToken(MASMParser::LOOPE, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::JG() {
  return getToken(MASMParser::JG, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::JNLE() {
  return getToken(MASMParser::JNLE, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::JE() {
  return getToken(MASMParser::JE, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::JNC() {
  return getToken(MASMParser::JNC, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::JC() {
  return getToken(MASMParser::JC, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::JNA() {
  return getToken(MASMParser::JNA, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::JBE() {
  return getToken(MASMParser::JBE, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::JLE() {
  return getToken(MASMParser::JLE, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::JPE() {
  return getToken(MASMParser::JPE, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::JNS() {
  return getToken(MASMParser::JNS, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::JECXZ() {
  return getToken(MASMParser::JECXZ, 0);
}

tree::TerminalNode* MASMParser::OperatoContext::JNG() {
  return getToken(MASMParser::JNG, 0);
}


size_t MASMParser::OperatoContext::getRuleIndex() const {
  return MASMParser::RuleOperato;
}

antlrcpp::Any MASMParser::OperatoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitOperato(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::OperatoContext* MASMParser::operato() {
  OperatoContext *_localctx = _tracker.createInstance<OperatoContext>(_ctx, getState());
  enterRule(_localctx, 66, MASMParser::RuleOperato);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(342);
    _la = _input->LA(1);
    if (!(((((_la - 145) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 145)) & ((1ULL << (MASMParser::JNBE - 145))
      | (1ULL << (MASMParser::JNZ - 145))
      | (1ULL << (MASMParser::JPO - 145))
      | (1ULL << (MASMParser::JZ - 145))
      | (1ULL << (MASMParser::JS - 145))
      | (1ULL << (MASMParser::LOOPNZ - 145))
      | (1ULL << (MASMParser::JGE - 145))
      | (1ULL << (MASMParser::JB - 145))
      | (1ULL << (MASMParser::JNB - 145))
      | (1ULL << (MASMParser::JO - 145))
      | (1ULL << (MASMParser::JP - 145))
      | (1ULL << (MASMParser::JNO - 145))
      | (1ULL << (MASMParser::JNL - 145))
      | (1ULL << (MASMParser::JNAE - 145))
      | (1ULL << (MASMParser::LOOPZ - 145))
      | (1ULL << (MASMParser::JMP - 145))
      | (1ULL << (MASMParser::JNP - 145))
      | (1ULL << (MASMParser::LOOP - 145))
      | (1ULL << (MASMParser::JL - 145))
      | (1ULL << (MASMParser::JCXZ - 145))
      | (1ULL << (MASMParser::JAE - 145))
      | (1ULL << (MASMParser::JNGE - 145))
      | (1ULL << (MASMParser::JA - 145))
      | (1ULL << (MASMParser::LOOPNE - 145))
      | (1ULL << (MASMParser::LOOPE - 145))
      | (1ULL << (MASMParser::JG - 145))
      | (1ULL << (MASMParser::JNLE - 145))
      | (1ULL << (MASMParser::JE - 145))
      | (1ULL << (MASMParser::JNC - 145))
      | (1ULL << (MASMParser::JC - 145))
      | (1ULL << (MASMParser::JNA - 145))
      | (1ULL << (MASMParser::JBE - 145))
      | (1ULL << (MASMParser::JLE - 145))
      | (1ULL << (MASMParser::JPE - 145))
      | (1ULL << (MASMParser::JNS - 145))
      | (1ULL << (MASMParser::JECXZ - 145))
      | (1ULL << (MASMParser::JNG - 145)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperatorContext ------------------------------------------------------------------

MASMParser::OperatorContext::OperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MASMParser::OperatorContext::MOVZX() {
  return getToken(MASMParser::MOVZX, 0);
}

tree::TerminalNode* MASMParser::OperatorContext::BSF() {
  return getToken(MASMParser::BSF, 0);
}

tree::TerminalNode* MASMParser::OperatorContext::BSR() {
  return getToken(MASMParser::BSR, 0);
}


size_t MASMParser::OperatorContext::getRuleIndex() const {
  return MASMParser::RuleOperator;
}

antlrcpp::Any MASMParser::OperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitOperator(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::OperatorContext* MASMParser::operator() {
  OperatorContext *_localctx = _tracker.createInstance<OperatorContext>(_ctx, getState());
  enterRule(_localctx, 68, MASMParser::RuleOperator);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(344);
    _la = _input->LA(1);
    if (!(((((_la - 182) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 182)) & ((1ULL << (MASMParser::MOVZX - 182))
      | (1ULL << (MASMParser::BSF - 182))
      | (1ULL << (MASMParser::BSR - 182)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LContext ------------------------------------------------------------------

MASMParser::LContext::LContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MASMParser::LContext::LES() {
  return getToken(MASMParser::LES, 0);
}

tree::TerminalNode* MASMParser::LContext::LEA() {
  return getToken(MASMParser::LEA, 0);
}

tree::TerminalNode* MASMParser::LContext::LDS() {
  return getToken(MASMParser::LDS, 0);
}

tree::TerminalNode* MASMParser::LContext::INS() {
  return getToken(MASMParser::INS, 0);
}

tree::TerminalNode* MASMParser::LContext::OUTS() {
  return getToken(MASMParser::OUTS, 0);
}


size_t MASMParser::LContext::getRuleIndex() const {
  return MASMParser::RuleL;
}

antlrcpp::Any MASMParser::LContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitL(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::LContext* MASMParser::l() {
  LContext *_localctx = _tracker.createInstance<LContext>(_ctx, getState());
  enterRule(_localctx, 70, MASMParser::RuleL);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(346);
    _la = _input->LA(1);
    if (!(((((_la - 185) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 185)) & ((1ULL << (MASMParser::LES - 185))
      | (1ULL << (MASMParser::LEA - 185))
      | (1ULL << (MASMParser::LDS - 185))
      | (1ULL << (MASMParser::INS - 185))
      | (1ULL << (MASMParser::OUTS - 185)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- XContext ------------------------------------------------------------------

MASMParser::XContext::XContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MASMParser::XContext::XADD() {
  return getToken(MASMParser::XADD, 0);
}

tree::TerminalNode* MASMParser::XContext::CMPXCHG() {
  return getToken(MASMParser::CMPXCHG, 0);
}


size_t MASMParser::XContext::getRuleIndex() const {
  return MASMParser::RuleX;
}

antlrcpp::Any MASMParser::XContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitX(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::XContext* MASMParser::x() {
  XContext *_localctx = _tracker.createInstance<XContext>(_ctx, getState());
  enterRule(_localctx, 72, MASMParser::RuleX);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(348);
    _la = _input->LA(1);
    if (!(_la == MASMParser::XADD

    || _la == MASMParser::CMPXCHG)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SContext ------------------------------------------------------------------

MASMParser::SContext::SContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MASMParser::SContext::SHL() {
  return getToken(MASMParser::SHL, 0);
}

tree::TerminalNode* MASMParser::SContext::SHR() {
  return getToken(MASMParser::SHR, 0);
}

tree::TerminalNode* MASMParser::SContext::ROR() {
  return getToken(MASMParser::ROR, 0);
}

tree::TerminalNode* MASMParser::SContext::ROL() {
  return getToken(MASMParser::ROL, 0);
}

tree::TerminalNode* MASMParser::SContext::RCL() {
  return getToken(MASMParser::RCL, 0);
}

tree::TerminalNode* MASMParser::SContext::SAL() {
  return getToken(MASMParser::SAL, 0);
}

tree::TerminalNode* MASMParser::SContext::RCR() {
  return getToken(MASMParser::RCR, 0);
}

tree::TerminalNode* MASMParser::SContext::SAR() {
  return getToken(MASMParser::SAR, 0);
}


size_t MASMParser::SContext::getRuleIndex() const {
  return MASMParser::RuleS;
}

antlrcpp::Any MASMParser::SContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitS(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::SContext* MASMParser::s() {
  SContext *_localctx = _tracker.createInstance<SContext>(_ctx, getState());
  enterRule(_localctx, 74, MASMParser::RuleS);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(350);
    _la = _input->LA(1);
    if (!(((((_la - 192) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 192)) & ((1ULL << (MASMParser::SHL - 192))
      | (1ULL << (MASMParser::SHR - 192))
      | (1ULL << (MASMParser::ROR - 192))
      | (1ULL << (MASMParser::ROL - 192))
      | (1ULL << (MASMParser::RCL - 192))
      | (1ULL << (MASMParser::SAL - 192))
      | (1ULL << (MASMParser::RCR - 192))
      | (1ULL << (MASMParser::SAR - 192)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ShContext ------------------------------------------------------------------

MASMParser::ShContext::ShContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MASMParser::ShContext::SHRD() {
  return getToken(MASMParser::SHRD, 0);
}

tree::TerminalNode* MASMParser::ShContext::SHLD() {
  return getToken(MASMParser::SHLD, 0);
}


size_t MASMParser::ShContext::getRuleIndex() const {
  return MASMParser::RuleSh;
}

antlrcpp::Any MASMParser::ShContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitSh(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::ShContext* MASMParser::sh() {
  ShContext *_localctx = _tracker.createInstance<ShContext>(_ctx, getState());
  enterRule(_localctx, 76, MASMParser::RuleSh);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(352);
    _la = _input->LA(1);
    if (!(_la == MASMParser::SHRD

    || _la == MASMParser::SHLD)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BContext ------------------------------------------------------------------

MASMParser::BContext::BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MASMParser::BContext::BTR() {
  return getToken(MASMParser::BTR, 0);
}

tree::TerminalNode* MASMParser::BContext::BT() {
  return getToken(MASMParser::BT, 0);
}

tree::TerminalNode* MASMParser::BContext::BTC() {
  return getToken(MASMParser::BTC, 0);
}


size_t MASMParser::BContext::getRuleIndex() const {
  return MASMParser::RuleB;
}

antlrcpp::Any MASMParser::BContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitB(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::BContext* MASMParser::b() {
  BContext *_localctx = _tracker.createInstance<BContext>(_ctx, getState());
  enterRule(_localctx, 78, MASMParser::RuleB);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(354);
    _la = _input->LA(1);
    if (!(((((_la - 202) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 202)) & ((1ULL << (MASMParser::BTR - 202))
      | (1ULL << (MASMParser::BT - 202))
      | (1ULL << (MASMParser::BTC - 202)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallContext ------------------------------------------------------------------

MASMParser::CallContext::CallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MASMParser::CallContext::CALL() {
  return getToken(MASMParser::CALL, 0);
}


size_t MASMParser::CallContext::getRuleIndex() const {
  return MASMParser::RuleCall;
}

antlrcpp::Any MASMParser::CallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitCall(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::CallContext* MASMParser::call() {
  CallContext *_localctx = _tracker.createInstance<CallContext>(_ctx, getState());
  enterRule(_localctx, 80, MASMParser::RuleCall);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(356);
    match(MASMParser::CALL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InterruptionContext ------------------------------------------------------------------

MASMParser::InterruptionContext::InterruptionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MASMParser::InterruptionContext::INT() {
  return getToken(MASMParser::INT, 0);
}

tree::TerminalNode* MASMParser::InterruptionContext::RETN() {
  return getToken(MASMParser::RETN, 0);
}

tree::TerminalNode* MASMParser::InterruptionContext::RET() {
  return getToken(MASMParser::RET, 0);
}

tree::TerminalNode* MASMParser::InterruptionContext::RETF() {
  return getToken(MASMParser::RETF, 0);
}


size_t MASMParser::InterruptionContext::getRuleIndex() const {
  return MASMParser::RuleInterruption;
}

antlrcpp::Any MASMParser::InterruptionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitInterruption(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::InterruptionContext* MASMParser::interruption() {
  InterruptionContext *_localctx = _tracker.createInstance<InterruptionContext>(_ctx, getState());
  enterRule(_localctx, 82, MASMParser::RuleInterruption);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(358);
    _la = _input->LA(1);
    if (!(((((_la - 206) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 206)) & ((1ULL << (MASMParser::INT - 206))
      | (1ULL << (MASMParser::RETN - 206))
      | (1ULL << (MASMParser::RET - 206))
      | (1ULL << (MASMParser::RETF - 206)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InContext ------------------------------------------------------------------

MASMParser::InContext::InContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MASMParser::InContext::IN() {
  return getToken(MASMParser::IN, 0);
}


size_t MASMParser::InContext::getRuleIndex() const {
  return MASMParser::RuleIn;
}

antlrcpp::Any MASMParser::InContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitIn(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::InContext* MASMParser::in() {
  InContext *_localctx = _tracker.createInstance<InContext>(_ctx, getState());
  enterRule(_localctx, 84, MASMParser::RuleIn);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(360);
    match(MASMParser::IN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OutContext ------------------------------------------------------------------

MASMParser::OutContext::OutContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MASMParser::OutContext::OUT() {
  return getToken(MASMParser::OUT, 0);
}


size_t MASMParser::OutContext::getRuleIndex() const {
  return MASMParser::RuleOut;
}

antlrcpp::Any MASMParser::OutContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitOut(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::OutContext* MASMParser::out() {
  OutContext *_localctx = _tracker.createInstance<OutContext>(_ctx, getState());
  enterRule(_localctx, 86, MASMParser::RuleOut);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(362);
    match(MASMParser::OUT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReContext ------------------------------------------------------------------

MASMParser::ReContext::ReContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MASMParser::ReContext::REP() {
  return getToken(MASMParser::REP, 0);
}

tree::TerminalNode* MASMParser::ReContext::REPE() {
  return getToken(MASMParser::REPE, 0);
}

tree::TerminalNode* MASMParser::ReContext::REPZ() {
  return getToken(MASMParser::REPZ, 0);
}

tree::TerminalNode* MASMParser::ReContext::REPNE() {
  return getToken(MASMParser::REPNE, 0);
}

tree::TerminalNode* MASMParser::ReContext::REPNZ() {
  return getToken(MASMParser::REPNZ, 0);
}


size_t MASMParser::ReContext::getRuleIndex() const {
  return MASMParser::RuleRe;
}

antlrcpp::Any MASMParser::ReContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitRe(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::ReContext* MASMParser::re() {
  ReContext *_localctx = _tracker.createInstance<ReContext>(_ctx, getState());
  enterRule(_localctx, 88, MASMParser::RuleRe);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(364);
    _la = _input->LA(1);
    if (!(((((_la - 212) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 212)) & ((1ULL << (MASMParser::REP - 212))
      | (1ULL << (MASMParser::REPE - 212))
      | (1ULL << (MASMParser::REPZ - 212))
      | (1ULL << (MASMParser::REPNE - 212))
      | (1ULL << (MASMParser::REPNZ - 212)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DirectivesContext ------------------------------------------------------------------

MASMParser::DirectivesContext::DirectivesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MASMParser::DirectivesContext::ALPHA() {
  return getToken(MASMParser::ALPHA, 0);
}

tree::TerminalNode* MASMParser::DirectivesContext::CONST() {
  return getToken(MASMParser::CONST, 0);
}

tree::TerminalNode* MASMParser::DirectivesContext::CREF() {
  return getToken(MASMParser::CREF, 0);
}

tree::TerminalNode* MASMParser::DirectivesContext::XCREF() {
  return getToken(MASMParser::XCREF, 0);
}

tree::TerminalNode* MASMParser::DirectivesContext::DATA() {
  return getToken(MASMParser::DATA, 0);
}

tree::TerminalNode* MASMParser::DirectivesContext::DATA2() {
  return getToken(MASMParser::DATA2, 0);
}

tree::TerminalNode* MASMParser::DirectivesContext::DOSSEG() {
  return getToken(MASMParser::DOSSEG, 0);
}

tree::TerminalNode* MASMParser::DirectivesContext::ERR() {
  return getToken(MASMParser::ERR, 0);
}

tree::TerminalNode* MASMParser::DirectivesContext::ERR1() {
  return getToken(MASMParser::ERR1, 0);
}

tree::TerminalNode* MASMParser::DirectivesContext::ERR2() {
  return getToken(MASMParser::ERR2, 0);
}

tree::TerminalNode* MASMParser::DirectivesContext::ERRE() {
  return getToken(MASMParser::ERRE, 0);
}

tree::TerminalNode* MASMParser::DirectivesContext::ERRNZ() {
  return getToken(MASMParser::ERRNZ, 0);
}

tree::TerminalNode* MASMParser::DirectivesContext::ERRDEF() {
  return getToken(MASMParser::ERRDEF, 0);
}

tree::TerminalNode* MASMParser::DirectivesContext::ERRNDEF() {
  return getToken(MASMParser::ERRNDEF, 0);
}

tree::TerminalNode* MASMParser::DirectivesContext::ERRB() {
  return getToken(MASMParser::ERRB, 0);
}

tree::TerminalNode* MASMParser::DirectivesContext::ERRNB() {
  return getToken(MASMParser::ERRNB, 0);
}

tree::TerminalNode* MASMParser::DirectivesContext::ERRIDN() {
  return getToken(MASMParser::ERRIDN, 0);
}

tree::TerminalNode* MASMParser::DirectivesContext::ERRDIF() {
  return getToken(MASMParser::ERRDIF, 0);
}

tree::TerminalNode* MASMParser::DirectivesContext::EVEN() {
  return getToken(MASMParser::EVEN, 0);
}

tree::TerminalNode* MASMParser::DirectivesContext::LIST() {
  return getToken(MASMParser::LIST, 0);
}

tree::TerminalNode* MASMParser::DirectivesContext::WIDTH() {
  return getToken(MASMParser::WIDTH, 0);
}

tree::TerminalNode* MASMParser::DirectivesContext::MASK() {
  return getToken(MASMParser::MASK, 0);
}

tree::TerminalNode* MASMParser::DirectivesContext::SEQ() {
  return getToken(MASMParser::SEQ, 0);
}

tree::TerminalNode* MASMParser::DirectivesContext::XLIST() {
  return getToken(MASMParser::XLIST, 0);
}

tree::TerminalNode* MASMParser::DirectivesContext::EXIT() {
  return getToken(MASMParser::EXIT, 0);
}

tree::TerminalNode* MASMParser::DirectivesContext::MODEL() {
  return getToken(MASMParser::MODEL, 0);
}


size_t MASMParser::DirectivesContext::getRuleIndex() const {
  return MASMParser::RuleDirectives;
}

antlrcpp::Any MASMParser::DirectivesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitDirectives(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::DirectivesContext* MASMParser::directives() {
  DirectivesContext *_localctx = _tracker.createInstance<DirectivesContext>(_ctx, getState());
  enterRule(_localctx, 90, MASMParser::RuleDirectives);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(366);
    _la = _input->LA(1);
    if (!(((((_la - 217) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 217)) & ((1ULL << (MASMParser::ALPHA - 217))
      | (1ULL << (MASMParser::CONST - 217))
      | (1ULL << (MASMParser::CREF - 217))
      | (1ULL << (MASMParser::XCREF - 217))
      | (1ULL << (MASMParser::DATA - 217))
      | (1ULL << (MASMParser::DATA2 - 217))
      | (1ULL << (MASMParser::DOSSEG - 217))
      | (1ULL << (MASMParser::ERR - 217))
      | (1ULL << (MASMParser::ERR1 - 217))
      | (1ULL << (MASMParser::ERR2 - 217))
      | (1ULL << (MASMParser::ERRE - 217))
      | (1ULL << (MASMParser::ERRNZ - 217))
      | (1ULL << (MASMParser::ERRDEF - 217))
      | (1ULL << (MASMParser::ERRNDEF - 217))
      | (1ULL << (MASMParser::ERRB - 217))
      | (1ULL << (MASMParser::ERRNB - 217))
      | (1ULL << (MASMParser::ERRIDN - 217))
      | (1ULL << (MASMParser::ERRDIF - 217))
      | (1ULL << (MASMParser::EVEN - 217))
      | (1ULL << (MASMParser::LIST - 217))
      | (1ULL << (MASMParser::WIDTH - 217))
      | (1ULL << (MASMParser::MASK - 217))
      | (1ULL << (MASMParser::SEQ - 217))
      | (1ULL << (MASMParser::XLIST - 217))
      | (1ULL << (MASMParser::EXIT - 217))
      | (1ULL << (MASMParser::MODEL - 217)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TyContext ------------------------------------------------------------------

MASMParser::TyContext::TyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MASMParser::TyContext::BYTE() {
  return getToken(MASMParser::BYTE, 0);
}

tree::TerminalNode* MASMParser::TyContext::SBYTE() {
  return getToken(MASMParser::SBYTE, 0);
}

tree::TerminalNode* MASMParser::TyContext::DB() {
  return getToken(MASMParser::DB, 0);
}

tree::TerminalNode* MASMParser::TyContext::WORD() {
  return getToken(MASMParser::WORD, 0);
}

tree::TerminalNode* MASMParser::TyContext::SWORD() {
  return getToken(MASMParser::SWORD, 0);
}

tree::TerminalNode* MASMParser::TyContext::DW() {
  return getToken(MASMParser::DW, 0);
}

tree::TerminalNode* MASMParser::TyContext::DWORD() {
  return getToken(MASMParser::DWORD, 0);
}

tree::TerminalNode* MASMParser::TyContext::SDWORD() {
  return getToken(MASMParser::SDWORD, 0);
}

tree::TerminalNode* MASMParser::TyContext::DD() {
  return getToken(MASMParser::DD, 0);
}

tree::TerminalNode* MASMParser::TyContext::FWORD() {
  return getToken(MASMParser::FWORD, 0);
}

tree::TerminalNode* MASMParser::TyContext::DF() {
  return getToken(MASMParser::DF, 0);
}

tree::TerminalNode* MASMParser::TyContext::QWORD() {
  return getToken(MASMParser::QWORD, 0);
}

tree::TerminalNode* MASMParser::TyContext::DQ() {
  return getToken(MASMParser::DQ, 0);
}

tree::TerminalNode* MASMParser::TyContext::TBYTE() {
  return getToken(MASMParser::TBYTE, 0);
}

tree::TerminalNode* MASMParser::TyContext::DT() {
  return getToken(MASMParser::DT, 0);
}

tree::TerminalNode* MASMParser::TyContext::REAL4() {
  return getToken(MASMParser::REAL4, 0);
}

tree::TerminalNode* MASMParser::TyContext::REAL8() {
  return getToken(MASMParser::REAL8, 0);
}

tree::TerminalNode* MASMParser::TyContext::REAL() {
  return getToken(MASMParser::REAL, 0);
}

tree::TerminalNode* MASMParser::TyContext::FAR() {
  return getToken(MASMParser::FAR, 0);
}

tree::TerminalNode* MASMParser::TyContext::NEAR() {
  return getToken(MASMParser::NEAR, 0);
}

tree::TerminalNode* MASMParser::TyContext::PROC() {
  return getToken(MASMParser::PROC, 0);
}


size_t MASMParser::TyContext::getRuleIndex() const {
  return MASMParser::RuleTy;
}

antlrcpp::Any MASMParser::TyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitTy(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::TyContext* MASMParser::ty() {
  TyContext *_localctx = _tracker.createInstance<TyContext>(_ctx, getState());
  enterRule(_localctx, 92, MASMParser::RuleTy);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(368);
    _la = _input->LA(1);
    if (!(((((_la - 243) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 243)) & ((1ULL << (MASMParser::BYTE - 243))
      | (1ULL << (MASMParser::SBYTE - 243))
      | (1ULL << (MASMParser::DB - 243))
      | (1ULL << (MASMParser::WORD - 243))
      | (1ULL << (MASMParser::SWORD - 243))
      | (1ULL << (MASMParser::DW - 243))
      | (1ULL << (MASMParser::DWORD - 243))
      | (1ULL << (MASMParser::SDWORD - 243))
      | (1ULL << (MASMParser::DD - 243))
      | (1ULL << (MASMParser::FWORD - 243))
      | (1ULL << (MASMParser::DF - 243))
      | (1ULL << (MASMParser::QWORD - 243))
      | (1ULL << (MASMParser::DQ - 243))
      | (1ULL << (MASMParser::TBYTE - 243))
      | (1ULL << (MASMParser::DT - 243))
      | (1ULL << (MASMParser::REAL4 - 243))
      | (1ULL << (MASMParser::REAL8 - 243))
      | (1ULL << (MASMParser::REAL - 243))
      | (1ULL << (MASMParser::FAR - 243))
      | (1ULL << (MASMParser::NEAR - 243))
      | (1ULL << (MASMParser::PROC - 243)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuestionContext ------------------------------------------------------------------

MASMParser::QuestionContext::QuestionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MASMParser::QuestionContext::QUESTION() {
  return getToken(MASMParser::QUESTION, 0);
}


size_t MASMParser::QuestionContext::getRuleIndex() const {
  return MASMParser::RuleQuestion;
}

antlrcpp::Any MASMParser::QuestionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitQuestion(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::QuestionContext* MASMParser::question() {
  QuestionContext *_localctx = _tracker.createInstance<QuestionContext>(_ctx, getState());
  enterRule(_localctx, 94, MASMParser::RuleQuestion);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(370);
    match(MASMParser::QUESTION);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TimeContext ------------------------------------------------------------------

MASMParser::TimeContext::TimeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MASMParser::TimeContext::TIMES() {
  return getToken(MASMParser::TIMES, 0);
}


size_t MASMParser::TimeContext::getRuleIndex() const {
  return MASMParser::RuleTime;
}

antlrcpp::Any MASMParser::TimeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MASMVisitor*>(visitor))
    return parserVisitor->visitTime(this);
  else
    return visitor->visitChildren(this);
}

MASMParser::TimeContext* MASMParser::time() {
  TimeContext *_localctx = _tracker.createInstance<TimeContext>(_ctx, getState());
  enterRule(_localctx, 96, MASMParser::RuleTime);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(372);
    match(MASMParser::TIMES);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> MASMParser::_decisionToDFA;
atn::PredictionContextCache MASMParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN MASMParser::_atn;
std::vector<uint16_t> MASMParser::_serializedATN;

std::vector<std::string> MASMParser::_ruleNames = {
  "compilationUnit", "segments", "proc", "code", "binary_exp1", "unuary_exp1", 
  "unuary_exp2", "binary_exp2", "notarguments", "binary_exp3", "unuary_exp3", 
  "binary_exp4", "binary_exp5", "binary_exp6", "binary_exp7", "binary_exp8", 
  "binary_exp9", "unuary_exp4", "unuary_exp5", "binary_exp10", "binary_exp11", 
  "binary_exp12", "directive_exp1", "variabledeclaration", "memory", "segmentos", 
  "register", "o", "op", "ope", "oper", "opera", "operat", "operato", "operator", 
  "l", "x", "s", "sh", "b", "call", "interruption", "in", "out", "re", "directives", 
  "ty", "question", "time"
};

std::vector<std::string> MASMParser::_literalNames = {
  "", "'end'", "'segments'", "'para'", "'public'", "'ends'", "'endp'", "'['", 
  "'+'", "']'", "", "'ds'", "'es'", "'cs'", "'ss'", "'gs'", "'fs'", "'ah'", 
  "'al'", "'ax'", "'bh'", "'bl'", "'bx'", "'ch'", "'cl'", "'cx'", "'dh'", 
  "'dl'", "'dx'", "'si'", "'di'", "'sp'", "'bp'", "'eax'", "'ebx'", "'ecx'", 
  "'edx'", "'esi'", "'edi'", "'esp'", "'ebp'", "'mov'", "'cmp'", "'test'", 
  "'push'", "'pop'", "'idiv'", "'inc'", "'dec'", "'neg'", "'mul'", "'div'", 
  "'imul'", "'not'", "'setpo'", "'setae'", "'setnle'", "'setc'", "'setno'", 
  "'setnb'", "'setp'", "'setnge'", "'setl'", "'setge'", "'setpe'", "'setnl'", 
  "'setnz'", "'setne'", "'setnc'", "'setbe'", "'setnp'", "'setns'", "'seto'", 
  "'setna'", "'setnae'", "'setz'", "'setle'", "'setnbe'", "'sets'", "'sete'", 
  "'setb'", "'seta'", "'setg'", "'setng'", "'xchg'", "'popad'", "'aaa'", 
  "'popa'", "'popfd'", "'cwd'", "'lahf'", "'pushad'", "'pushf'", "'aas'", 
  "'bswap'", "'pushfd'", "'cbw'", "'cwde'", "'xlat'", "'aam'", "'aad'", 
  "'cdq'", "'daa'", "'sahf'", "'das'", "'into'", "'iret'", "'clc'", "'stc'", 
  "'cmc'", "'cld'", "'std'", "'cli'", "'sti'", "'movsb'", "'movsw'", "'movsd'", 
  "'lods'", "'lodsb'", "'lodsw'", "'lodsd'", "'stos'", "'stosb'", "'stosw'", 
  "'sotsd'", "'scas'", "'scasb'", "'scasw'", "'scasd'", "'cmps'", "'cmpsb'", 
  "'cmpsw'", "'cmpsd'", "'insb'", "'insw'", "'insd'", "'outsb'", "'outsw'", 
  "'outsd'", "'adc'", "'add'", "'sub'", "'cbb'", "'xor'", "'or'", "'jnbe'", 
  "'jnz'", "'jpo'", "'jz'", "'js'", "'loopnz'", "'jge'", "'jb'", "'jnb'", 
  "'jo'", "'jp'", "'jno'", "'jnl'", "'jnae'", "'loopz'", "'jmp'", "'jnp'", 
  "'loop'", "'jl'", "'jcxz'", "'jae'", "'jnge'", "'ja'", "'loopne'", "'loope'", 
  "'jg'", "'jnle'", "'je'", "'jnc'", "'jc'", "'jna'", "'jbe'", "'jle'", 
  "'jpe'", "'jns'", "'jecxz'", "'jng'", "'movzx'", "'bsf'", "'bsr'", "'les'", 
  "'lea'", "'lds'", "'ins'", "'outs'", "'xadd'", "'cmpxchg'", "'shl'", "'shr'", 
  "'ror'", "'rol'", "'rcl'", "'sal'", "'rcr'", "'sar'", "'shrd'", "'shld'", 
  "'btr'", "'bt'", "'btc'", "'call'", "'int'", "'retn'", "'ret'", "'retf'", 
  "'in'", "'out'", "'rep'", "'repe'", "'repz'", "'repne'", "'repnz'", "'.alpha'", 
  "'.const'", "'.cref'", "'.xcref'", "'data'", "'data?'", "'dosseg'", "'.err'", 
  "'.err1'", "'.err2'", "'.erre'", "'.errnz'", "'.errdef'", "'.errndef'", 
  "'.errb'", "'.errnb'", "'.erridn[i]'", "'.errdif[i]'", "'even'", "'.list'", 
  "'width'", "'mask'", "'.seq'", "'.xlist'", "'.exit'", "'.model'", "'byte'", 
  "'sbyte'", "'db'", "'word'", "'sword'", "'dw'", "'dword'", "'sdword'", 
  "'dd'", "'fword'", "'df'", "'qword'", "'dq'", "'tbyte'", "'dt'", "'real4'", 
  "'real8'", "'real'", "'far'", "'near'", "'proc'", "'?'", "'times'", "", 
  "", "", "", "", "", "','"
};

std::vector<std::string> MASMParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "Identifier", "DS", "ES", "CS", 
  "SS", "GS", "FS", "AH", "AL", "AX", "BH", "BL", "BX", "CH", "CL", "CX", 
  "DH", "DL", "DX", "SI", "DI", "SP", "BP", "EAX", "EBX", "ECX", "EDX", 
  "ESI", "EDI", "ESP", "EBP", "MOV", "CMP", "TEST", "PUSH", "POP", "IDIV", 
  "INC", "DEC", "NEG", "MUL", "DIV", "IMUL", "NOT", "SETPO", "SETAE", "SETNLE", 
  "SETC", "SETNO", "SETNB", "SETP", "SETNGE", "SETL", "SETGE", "SETPE", 
  "SETNL", "SETNZ", "SETNE", "SETNC", "SETBE", "SETNP", "SETNS", "SETO", 
  "SETNA", "SETNAE", "SETZ", "SETLE", "SETNBE", "SETS", "SETE", "SETB", 
  "SETA", "SETG", "SETNG", "XCHG", "POPAD", "AAA", "POPA", "POPFD", "CWD", 
  "LAHF", "PUSHAD", "PUSHF", "AAS", "BSWAP", "PUSHFD", "CBW", "CWDE", "XLAT", 
  "AAM", "AAD", "CDQ", "DAA", "SAHF", "DAS", "INTO", "IRET", "CLC", "STC", 
  "CMC", "CLD", "STD", "CLI", "STI", "MOVSB", "MOVSW", "MOVSD", "LODS", 
  "LODSB", "LODSW", "LODSD", "STOS", "STOSB", "STOSW", "SOTSD", "SCAS", 
  "SCASB", "SCASW", "SCASD", "CMPS", "CMPSB", "CMPSW", "CMPSD", "INSB", 
  "INSW", "INSD", "OUTSB", "OUTSW", "OUTSD", "ADC", "ADD", "SUB", "CBB", 
  "XOR", "OR", "JNBE", "JNZ", "JPO", "JZ", "JS", "LOOPNZ", "JGE", "JB", 
  "JNB", "JO", "JP", "JNO", "JNL", "JNAE", "LOOPZ", "JMP", "JNP", "LOOP", 
  "JL", "JCXZ", "JAE", "JNGE", "JA", "LOOPNE", "LOOPE", "JG", "JNLE", "JE", 
  "JNC", "JC", "JNA", "JBE", "JLE", "JPE", "JNS", "JECXZ", "JNG", "MOVZX", 
  "BSF", "BSR", "LES", "LEA", "LDS", "INS", "OUTS", "XADD", "CMPXCHG", "SHL", 
  "SHR", "ROR", "ROL", "RCL", "SAL", "RCR", "SAR", "SHRD", "SHLD", "BTR", 
  "BT", "BTC", "CALL", "INT", "RETN", "RET", "RETF", "IN", "OUT", "REP", 
  "REPE", "REPZ", "REPNE", "REPNZ", "ALPHA", "CONST", "CREF", "XCREF", "DATA", 
  "DATA2", "DOSSEG", "ERR", "ERR1", "ERR2", "ERRE", "ERRNZ", "ERRDEF", "ERRNDEF", 
  "ERRB", "ERRNB", "ERRIDN", "ERRDIF", "EVEN", "LIST", "WIDTH", "MASK", 
  "SEQ", "XLIST", "EXIT", "MODEL", "BYTE", "SBYTE", "DB", "WORD", "SWORD", 
  "DW", "DWORD", "SDWORD", "DD", "FWORD", "DF", "QWORD", "DQ", "TBYTE", 
  "DT", "REAL4", "REAL8", "REAL", "FAR", "NEAR", "PROC", "QUESTION", "TIMES", 
  "Hexnum", "Integer", "Octalnum", "FloatingPointLiteral", "String", "Etiqueta", 
  "Separator", "WS", "LINE_COMMENT"
};

dfa::Vocabulary MASMParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> MASMParser::_tokenNames;

MASMParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x114, 0x179, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x67, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 
    0x6a, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x75, 0xa, 0x3, 0xc, 0x3, 
    0xe, 0x3, 0x78, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x7, 0x4, 0x80, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x83, 0xb, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x9d, 0xa, 0x5, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0xa5, 0xa, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0xac, 
    0xa, 0x6, 0x5, 0x6, 0xae, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x5, 0x7, 0xb4, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 
    0xb9, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 
    0x9, 0xc0, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x5, 0x9, 0xc7, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x5, 0xb, 0xce, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x5, 0xb, 0xd4, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xde, 0xa, 0xd, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x5, 0xf, 0xe8, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x5, 0x10, 0xf0, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x5, 0x10, 0xf5, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 
    0x11, 0xfa, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x5, 0x11, 0x101, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x5, 0x12, 0x106, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 
    0x10b, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 
    0x111, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x11b, 0xa, 0x15, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x120, 0xa, 0x16, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x5, 0x18, 0x12c, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x133, 0xa, 0x19, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x138, 0xa, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x13e, 0xa, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x5, 0x1a, 0x143, 0xa, 0x1a, 0x5, 0x1a, 0x145, 0xa, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
    0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 
    0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 
    0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 
    0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x2a, 0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2d, 
    0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x30, 0x3, 
    0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x2, 0x2, 
    0x33, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 
    0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 
    0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 
    0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 
    0x62, 0x2, 0x14, 0x3, 0x2, 0x10c, 0x10e, 0x3, 0x2, 0xd, 0x12, 0x3, 0x2, 
    0x13, 0x2a, 0x3, 0x2, 0x2b, 0x2d, 0x3, 0x2, 0x2f, 0x55, 0x3, 0x2, 0x57, 
    0x8c, 0x3, 0x2, 0x8d, 0x92, 0x3, 0x2, 0x93, 0xb7, 0x3, 0x2, 0xb8, 0xba, 
    0x3, 0x2, 0xbb, 0xbf, 0x3, 0x2, 0xc0, 0xc1, 0x3, 0x2, 0xc2, 0xc9, 0x3, 
    0x2, 0xca, 0xcb, 0x3, 0x2, 0xcc, 0xce, 0x3, 0x2, 0xd0, 0xd3, 0x3, 0x2, 
    0xd6, 0xda, 0x3, 0x2, 0xdb, 0xf4, 0x3, 0x2, 0xf5, 0x109, 0x2, 0x180, 
    0x2, 0x68, 0x3, 0x2, 0x2, 0x2, 0x4, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6, 0x7c, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x9c, 0x3, 0x2, 0x2, 0x2, 0xa, 0xad, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xe, 0xb5, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0xc6, 0x3, 0x2, 0x2, 0x2, 0x12, 0xc8, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0xca, 0x3, 0x2, 0x2, 0x2, 0x16, 0xd5, 0x3, 0x2, 0x2, 0x2, 0x18, 0xd8, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xe4, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0xec, 0x3, 0x2, 0x2, 0x2, 0x20, 0xf6, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0x102, 0x3, 0x2, 0x2, 0x2, 0x24, 0x10c, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0x112, 0x3, 0x2, 0x2, 0x2, 0x28, 0x115, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x124, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0x12b, 0x3, 0x2, 0x2, 0x2, 0x30, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x32, 0x134, 
    0x3, 0x2, 0x2, 0x2, 0x34, 0x148, 0x3, 0x2, 0x2, 0x2, 0x36, 0x14a, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x14e, 0x3, 0x2, 
    0x2, 0x2, 0x3c, 0x150, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x152, 0x3, 0x2, 0x2, 
    0x2, 0x40, 0x154, 0x3, 0x2, 0x2, 0x2, 0x42, 0x156, 0x3, 0x2, 0x2, 0x2, 
    0x44, 0x158, 0x3, 0x2, 0x2, 0x2, 0x46, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x48, 
    0x15c, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x160, 
    0x3, 0x2, 0x2, 0x2, 0x4e, 0x162, 0x3, 0x2, 0x2, 0x2, 0x50, 0x164, 0x3, 
    0x2, 0x2, 0x2, 0x52, 0x166, 0x3, 0x2, 0x2, 0x2, 0x54, 0x168, 0x3, 0x2, 
    0x2, 0x2, 0x56, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x58, 0x16c, 0x3, 0x2, 0x2, 
    0x2, 0x5a, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x170, 0x3, 0x2, 0x2, 0x2, 
    0x5e, 0x172, 0x3, 0x2, 0x2, 0x2, 0x60, 0x174, 0x3, 0x2, 0x2, 0x2, 0x62, 
    0x176, 0x3, 0x2, 0x2, 0x2, 0x64, 0x67, 0x5, 0x4, 0x3, 0x2, 0x65, 0x67, 
    0x5, 0x2e, 0x18, 0x2, 0x66, 0x64, 0x3, 0x2, 0x2, 0x2, 0x66, 0x65, 0x3, 
    0x2, 0x2, 0x2, 0x67, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x68, 0x66, 0x3, 0x2, 
    0x2, 0x2, 0x68, 0x69, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6b, 0x3, 0x2, 0x2, 
    0x2, 0x6a, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 0x7, 0x3, 0x2, 0x2, 
    0x6c, 0x6d, 0x7, 0xc, 0x2, 0x2, 0x6d, 0x3, 0x3, 0x2, 0x2, 0x2, 0x6e, 
    0x6f, 0x7, 0xc, 0x2, 0x2, 0x6f, 0x70, 0x7, 0x4, 0x2, 0x2, 0x70, 0x71, 
    0x7, 0x5, 0x2, 0x2, 0x71, 0x76, 0x7, 0x6, 0x2, 0x2, 0x72, 0x75, 0x5, 
    0x8, 0x5, 0x2, 0x73, 0x75, 0x5, 0x6, 0x4, 0x2, 0x74, 0x72, 0x3, 0x2, 
    0x2, 0x2, 0x74, 0x73, 0x3, 0x2, 0x2, 0x2, 0x75, 0x78, 0x3, 0x2, 0x2, 
    0x2, 0x76, 0x74, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x3, 0x2, 0x2, 0x2, 
    0x77, 0x79, 0x3, 0x2, 0x2, 0x2, 0x78, 0x76, 0x3, 0x2, 0x2, 0x2, 0x79, 
    0x7a, 0x7, 0xc, 0x2, 0x2, 0x7a, 0x7b, 0x7, 0x7, 0x2, 0x2, 0x7b, 0x5, 
    0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x7, 0xc, 0x2, 0x2, 0x7d, 0x81, 0x7, 
    0x109, 0x2, 0x2, 0x7e, 0x80, 0x5, 0x8, 0x5, 0x2, 0x7f, 0x7e, 0x3, 0x2, 
    0x2, 0x2, 0x80, 0x83, 0x3, 0x2, 0x2, 0x2, 0x81, 0x7f, 0x3, 0x2, 0x2, 
    0x2, 0x81, 0x82, 0x3, 0x2, 0x2, 0x2, 0x82, 0x84, 0x3, 0x2, 0x2, 0x2, 
    0x83, 0x81, 0x3, 0x2, 0x2, 0x2, 0x84, 0x85, 0x7, 0xd2, 0x2, 0x2, 0x85, 
    0x86, 0x7, 0xc, 0x2, 0x2, 0x86, 0x87, 0x7, 0x8, 0x2, 0x2, 0x87, 0x7, 
    0x3, 0x2, 0x2, 0x2, 0x88, 0x9d, 0x5, 0xa, 0x6, 0x2, 0x89, 0x9d, 0x5, 
    0x28, 0x15, 0x2, 0x8a, 0x9d, 0x5, 0x2a, 0x16, 0x2, 0x8b, 0x9d, 0x5, 
    0x2c, 0x17, 0x2, 0x8c, 0x9d, 0x5, 0x10, 0x9, 0x2, 0x8d, 0x9d, 0x5, 0x14, 
    0xb, 0x2, 0x8e, 0x9d, 0x5, 0x18, 0xd, 0x2, 0x8f, 0x9d, 0x5, 0x1a, 0xe, 
    0x2, 0x90, 0x9d, 0x5, 0x1c, 0xf, 0x2, 0x91, 0x9d, 0x5, 0x1e, 0x10, 0x2, 
    0x92, 0x9d, 0x5, 0x20, 0x11, 0x2, 0x93, 0x9d, 0x5, 0x22, 0x12, 0x2, 
    0x94, 0x9d, 0x5, 0xc, 0x7, 0x2, 0x95, 0x9d, 0x5, 0xe, 0x8, 0x2, 0x96, 
    0x9d, 0x5, 0x16, 0xc, 0x2, 0x97, 0x9d, 0x5, 0x24, 0x13, 0x2, 0x98, 0x9d, 
    0x5, 0x26, 0x14, 0x2, 0x99, 0x9d, 0x5, 0x12, 0xa, 0x2, 0x9a, 0x9d, 0x5, 
    0x30, 0x19, 0x2, 0x9b, 0x9d, 0x5, 0x2e, 0x18, 0x2, 0x9c, 0x88, 0x3, 
    0x2, 0x2, 0x2, 0x9c, 0x89, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x8a, 0x3, 0x2, 
    0x2, 0x2, 0x9c, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x8c, 0x3, 0x2, 0x2, 
    0x2, 0x9c, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x8e, 0x3, 0x2, 0x2, 0x2, 
    0x9c, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x90, 0x3, 0x2, 0x2, 0x2, 0x9c, 
    0x91, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x92, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x93, 
    0x3, 0x2, 0x2, 0x2, 0x9c, 0x94, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x95, 0x3, 
    0x2, 0x2, 0x2, 0x9c, 0x96, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x97, 0x3, 0x2, 
    0x2, 0x2, 0x9c, 0x98, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x99, 0x3, 0x2, 0x2, 
    0x2, 0x9c, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9b, 0x3, 0x2, 0x2, 0x2, 
    0x9d, 0x9, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9f, 0x5, 0x38, 0x1d, 0x2, 0x9f, 
    0xa0, 0x5, 0x36, 0x1c, 0x2, 0xa0, 0xa4, 0x7, 0x112, 0x2, 0x2, 0xa1, 
    0xa5, 0x5, 0x36, 0x1c, 0x2, 0xa2, 0xa5, 0x7, 0x10d, 0x2, 0x2, 0xa3, 
    0xa5, 0x5, 0x32, 0x1a, 0x2, 0xa4, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa2, 
    0x3, 0x2, 0x2, 0x2, 0xa4, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xae, 0x3, 
    0x2, 0x2, 0x2, 0xa6, 0xa7, 0x5, 0x38, 0x1d, 0x2, 0xa7, 0xa8, 0x5, 0x32, 
    0x1a, 0x2, 0xa8, 0xab, 0x7, 0x112, 0x2, 0x2, 0xa9, 0xac, 0x5, 0x36, 
    0x1c, 0x2, 0xaa, 0xac, 0x7, 0x10d, 0x2, 0x2, 0xab, 0xa9, 0x3, 0x2, 0x2, 
    0x2, 0xab, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xac, 0xae, 0x3, 0x2, 0x2, 0x2, 
    0xad, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xad, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xae, 
    0xb, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb3, 0x5, 0x3a, 0x1e, 0x2, 0xb0, 0xb4, 
    0x7, 0x10d, 0x2, 0x2, 0xb1, 0xb4, 0x5, 0x36, 0x1c, 0x2, 0xb2, 0xb4, 
    0x5, 0x32, 0x1a, 0x2, 0xb3, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb1, 0x3, 
    0x2, 0x2, 0x2, 0xb3, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xd, 0x3, 0x2, 
    0x2, 0x2, 0xb5, 0xb8, 0x5, 0x3c, 0x1f, 0x2, 0xb6, 0xb9, 0x5, 0x36, 0x1c, 
    0x2, 0xb7, 0xb9, 0x5, 0x32, 0x1a, 0x2, 0xb8, 0xb6, 0x3, 0x2, 0x2, 0x2, 
    0xb8, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xf, 0x3, 0x2, 0x2, 0x2, 0xba, 
    0xbb, 0x5, 0x3e, 0x20, 0x2, 0xbb, 0xbc, 0x5, 0x36, 0x1c, 0x2, 0xbc, 
    0xbf, 0x7, 0x112, 0x2, 0x2, 0xbd, 0xc0, 0x5, 0x36, 0x1c, 0x2, 0xbe, 
    0xc0, 0x5, 0x32, 0x1a, 0x2, 0xbf, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xbe, 
    0x3, 0x2, 0x2, 0x2, 0xc0, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc2, 0x5, 
    0x3e, 0x20, 0x2, 0xc2, 0xc3, 0x5, 0x32, 0x1a, 0x2, 0xc3, 0xc4, 0x7, 
    0x112, 0x2, 0x2, 0xc4, 0xc5, 0x5, 0x36, 0x1c, 0x2, 0xc5, 0xc7, 0x3, 
    0x2, 0x2, 0x2, 0xc6, 0xba, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc1, 0x3, 0x2, 
    0x2, 0x2, 0xc7, 0x11, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc9, 0x5, 0x40, 0x21, 
    0x2, 0xc9, 0x13, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcd, 0x5, 0x42, 0x22, 0x2, 
    0xcb, 0xce, 0x5, 0x36, 0x1c, 0x2, 0xcc, 0xce, 0x5, 0x32, 0x1a, 0x2, 
    0xcd, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xce, 
    0xcf, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd3, 0x7, 0x112, 0x2, 0x2, 0xd0, 0xd4, 
    0x5, 0x36, 0x1c, 0x2, 0xd1, 0xd4, 0x7, 0x10d, 0x2, 0x2, 0xd2, 0xd4, 
    0x5, 0x32, 0x1a, 0x2, 0xd3, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd1, 0x3, 
    0x2, 0x2, 0x2, 0xd3, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd4, 0x15, 0x3, 0x2, 
    0x2, 0x2, 0xd5, 0xd6, 0x5, 0x44, 0x23, 0x2, 0xd6, 0xd7, 0x7, 0xc, 0x2, 
    0x2, 0xd7, 0x17, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x5, 0x46, 0x24, 0x2, 
    0xd9, 0xda, 0x5, 0x36, 0x1c, 0x2, 0xda, 0xdd, 0x7, 0x112, 0x2, 0x2, 
    0xdb, 0xde, 0x5, 0x36, 0x1c, 0x2, 0xdc, 0xde, 0x5, 0x32, 0x1a, 0x2, 
    0xdd, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xde, 
    0x19, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 0x5, 0x48, 0x25, 0x2, 0xe0, 0xe1, 
    0x5, 0x36, 0x1c, 0x2, 0xe1, 0xe2, 0x7, 0x112, 0x2, 0x2, 0xe2, 0xe3, 
    0x5, 0x32, 0x1a, 0x2, 0xe3, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe7, 0x5, 
    0x4a, 0x26, 0x2, 0xe5, 0xe8, 0x5, 0x36, 0x1c, 0x2, 0xe6, 0xe8, 0x5, 
    0x32, 0x1a, 0x2, 0xe7, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe6, 0x3, 0x2, 
    0x2, 0x2, 0xe8, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 0x7, 0x112, 0x2, 
    0x2, 0xea, 0xeb, 0x5, 0x36, 0x1c, 0x2, 0xeb, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0xec, 0xef, 0x5, 0x4c, 0x27, 0x2, 0xed, 0xf0, 0x5, 0x36, 0x1c, 0x2, 
    0xee, 0xf0, 0x5, 0x32, 0x1a, 0x2, 0xef, 0xed, 0x3, 0x2, 0x2, 0x2, 0xef, 
    0xee, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf4, 
    0x7, 0x112, 0x2, 0x2, 0xf2, 0xf5, 0x7, 0x10d, 0x2, 0x2, 0xf3, 0xf5, 
    0x5, 0x36, 0x1c, 0x2, 0xf4, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf3, 0x3, 
    0x2, 0x2, 0x2, 0xf5, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf9, 0x5, 0x4e, 
    0x28, 0x2, 0xf7, 0xfa, 0x5, 0x36, 0x1c, 0x2, 0xf8, 0xfa, 0x5, 0x32, 
    0x1a, 0x2, 0xf9, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xf8, 0x3, 0x2, 0x2, 
    0x2, 0xfa, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfc, 0x7, 0x112, 0x2, 0x2, 
    0xfc, 0xfd, 0x5, 0x36, 0x1c, 0x2, 0xfd, 0x100, 0x7, 0x112, 0x2, 0x2, 
    0xfe, 0x101, 0x5, 0x36, 0x1c, 0x2, 0xff, 0x101, 0x7, 0x10d, 0x2, 0x2, 
    0x100, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x100, 0xff, 0x3, 0x2, 0x2, 0x2, 0x101, 
    0x21, 0x3, 0x2, 0x2, 0x2, 0x102, 0x105, 0x5, 0x50, 0x29, 0x2, 0x103, 
    0x106, 0x5, 0x36, 0x1c, 0x2, 0x104, 0x106, 0x5, 0x32, 0x1a, 0x2, 0x105, 
    0x103, 0x3, 0x2, 0x2, 0x2, 0x105, 0x104, 0x3, 0x2, 0x2, 0x2, 0x106, 
    0x107, 0x3, 0x2, 0x2, 0x2, 0x107, 0x10a, 0x7, 0x112, 0x2, 0x2, 0x108, 
    0x10b, 0x5, 0x36, 0x1c, 0x2, 0x109, 0x10b, 0x5, 0x32, 0x1a, 0x2, 0x10a, 
    0x108, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x109, 0x3, 0x2, 0x2, 0x2, 0x10b, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x110, 0x5, 0x52, 0x2a, 0x2, 0x10d, 
    0x111, 0x5, 0x36, 0x1c, 0x2, 0x10e, 0x111, 0x5, 0x32, 0x1a, 0x2, 0x10f, 
    0x111, 0x7, 0x10d, 0x2, 0x2, 0x110, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x110, 
    0x10e, 0x3, 0x2, 0x2, 0x2, 0x110, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x111, 
    0x25, 0x3, 0x2, 0x2, 0x2, 0x112, 0x113, 0x5, 0x54, 0x2b, 0x2, 0x113, 
    0x114, 0x7, 0x10d, 0x2, 0x2, 0x114, 0x27, 0x3, 0x2, 0x2, 0x2, 0x115, 
    0x116, 0x5, 0x56, 0x2c, 0x2, 0x116, 0x117, 0x5, 0x36, 0x1c, 0x2, 0x117, 
    0x11a, 0x7, 0x112, 0x2, 0x2, 0x118, 0x11b, 0x5, 0x36, 0x1c, 0x2, 0x119, 
    0x11b, 0x7, 0x10d, 0x2, 0x2, 0x11a, 0x118, 0x3, 0x2, 0x2, 0x2, 0x11a, 
    0x119, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x29, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11f, 
    0x5, 0x58, 0x2d, 0x2, 0x11d, 0x120, 0x5, 0x36, 0x1c, 0x2, 0x11e, 0x120, 
    0x7, 0x10d, 0x2, 0x2, 0x11f, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x11e, 
    0x3, 0x2, 0x2, 0x2, 0x120, 0x121, 0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 
    0x7, 0x112, 0x2, 0x2, 0x122, 0x123, 0x5, 0x36, 0x1c, 0x2, 0x123, 0x2b, 
    0x3, 0x2, 0x2, 0x2, 0x124, 0x125, 0x5, 0x5a, 0x2e, 0x2, 0x125, 0x126, 
    0x5, 0x40, 0x21, 0x2, 0x126, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x127, 0x128, 
    0x5, 0x5c, 0x2f, 0x2, 0x128, 0x129, 0x7, 0xc, 0x2, 0x2, 0x129, 0x12c, 
    0x3, 0x2, 0x2, 0x2, 0x12a, 0x12c, 0x5, 0x5c, 0x2f, 0x2, 0x12b, 0x127, 
    0x3, 0x2, 0x2, 0x2, 0x12b, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x2f, 0x3, 
    0x2, 0x2, 0x2, 0x12d, 0x12e, 0x7, 0xc, 0x2, 0x2, 0x12e, 0x132, 0x5, 
    0x5e, 0x30, 0x2, 0x12f, 0x133, 0x5, 0x60, 0x31, 0x2, 0x130, 0x133, 0x7, 
    0x110, 0x2, 0x2, 0x131, 0x133, 0x7, 0x10d, 0x2, 0x2, 0x132, 0x12f, 0x3, 
    0x2, 0x2, 0x2, 0x132, 0x130, 0x3, 0x2, 0x2, 0x2, 0x132, 0x131, 0x3, 
    0x2, 0x2, 0x2, 0x133, 0x31, 0x3, 0x2, 0x2, 0x2, 0x134, 0x137, 0x7, 0x9, 
    0x2, 0x2, 0x135, 0x138, 0x5, 0x36, 0x1c, 0x2, 0x136, 0x138, 0x7, 0xc, 
    0x2, 0x2, 0x137, 0x135, 0x3, 0x2, 0x2, 0x2, 0x137, 0x136, 0x3, 0x2, 
    0x2, 0x2, 0x138, 0x144, 0x3, 0x2, 0x2, 0x2, 0x139, 0x142, 0x7, 0xa, 
    0x2, 0x2, 0x13a, 0x13d, 0x5, 0x36, 0x1c, 0x2, 0x13b, 0x13c, 0x7, 0xa, 
    0x2, 0x2, 0x13c, 0x13e, 0x9, 0x2, 0x2, 0x2, 0x13d, 0x13b, 0x3, 0x2, 
    0x2, 0x2, 0x13d, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x143, 0x3, 0x2, 
    0x2, 0x2, 0x13f, 0x143, 0x7, 0x10d, 0x2, 0x2, 0x140, 0x143, 0x7, 0x10c, 
    0x2, 0x2, 0x141, 0x143, 0x7, 0x10e, 0x2, 0x2, 0x142, 0x13a, 0x3, 0x2, 
    0x2, 0x2, 0x142, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x142, 0x140, 0x3, 0x2, 
    0x2, 0x2, 0x142, 0x141, 0x3, 0x2, 0x2, 0x2, 0x143, 0x145, 0x3, 0x2, 
    0x2, 0x2, 0x144, 0x139, 0x3, 0x2, 0x2, 0x2, 0x144, 0x145, 0x3, 0x2, 
    0x2, 0x2, 0x145, 0x146, 0x3, 0x2, 0x2, 0x2, 0x146, 0x147, 0x7, 0xb, 
    0x2, 0x2, 0x147, 0x33, 0x3, 0x2, 0x2, 0x2, 0x148, 0x149, 0x9, 0x3, 0x2, 
    0x2, 0x149, 0x35, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x14b, 0x9, 0x4, 0x2, 0x2, 
    0x14b, 0x37, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x14d, 0x9, 0x5, 0x2, 0x2, 0x14d, 
    0x39, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x14f, 0x7, 0x2e, 0x2, 0x2, 0x14f, 
    0x3b, 0x3, 0x2, 0x2, 0x2, 0x150, 0x151, 0x9, 0x6, 0x2, 0x2, 0x151, 0x3d, 
    0x3, 0x2, 0x2, 0x2, 0x152, 0x153, 0x7, 0x56, 0x2, 0x2, 0x153, 0x3f, 
    0x3, 0x2, 0x2, 0x2, 0x154, 0x155, 0x9, 0x7, 0x2, 0x2, 0x155, 0x41, 0x3, 
    0x2, 0x2, 0x2, 0x156, 0x157, 0x9, 0x8, 0x2, 0x2, 0x157, 0x43, 0x3, 0x2, 
    0x2, 0x2, 0x158, 0x159, 0x9, 0x9, 0x2, 0x2, 0x159, 0x45, 0x3, 0x2, 0x2, 
    0x2, 0x15a, 0x15b, 0x9, 0xa, 0x2, 0x2, 0x15b, 0x47, 0x3, 0x2, 0x2, 0x2, 
    0x15c, 0x15d, 0x9, 0xb, 0x2, 0x2, 0x15d, 0x49, 0x3, 0x2, 0x2, 0x2, 0x15e, 
    0x15f, 0x9, 0xc, 0x2, 0x2, 0x15f, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x160, 0x161, 
    0x9, 0xd, 0x2, 0x2, 0x161, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x162, 0x163, 0x9, 
    0xe, 0x2, 0x2, 0x163, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x164, 0x165, 0x9, 0xf, 
    0x2, 0x2, 0x165, 0x51, 0x3, 0x2, 0x2, 0x2, 0x166, 0x167, 0x7, 0xcf, 
    0x2, 0x2, 0x167, 0x53, 0x3, 0x2, 0x2, 0x2, 0x168, 0x169, 0x9, 0x10, 
    0x2, 0x2, 0x169, 0x55, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x16b, 0x7, 0xd4, 
    0x2, 0x2, 0x16b, 0x57, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16d, 0x7, 0xd5, 
    0x2, 0x2, 0x16d, 0x59, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x16f, 0x9, 0x11, 
    0x2, 0x2, 0x16f, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x170, 0x171, 0x9, 0x12, 
    0x2, 0x2, 0x171, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x172, 0x173, 0x9, 0x13, 
    0x2, 0x2, 0x173, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x174, 0x175, 0x7, 0x10a, 
    0x2, 0x2, 0x175, 0x61, 0x3, 0x2, 0x2, 0x2, 0x176, 0x177, 0x7, 0x10b, 
    0x2, 0x2, 0x177, 0x63, 0x3, 0x2, 0x2, 0x2, 0x22, 0x66, 0x68, 0x74, 0x76, 
    0x81, 0x9c, 0xa4, 0xab, 0xad, 0xb3, 0xb8, 0xbf, 0xc6, 0xcd, 0xd3, 0xdd, 
    0xe7, 0xef, 0xf4, 0xf9, 0x100, 0x105, 0x10a, 0x110, 0x11a, 0x11f, 0x12b, 
    0x132, 0x137, 0x13d, 0x142, 0x144, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

MASMParser::Initializer MASMParser::_init;
