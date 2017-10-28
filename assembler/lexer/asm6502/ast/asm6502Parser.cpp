
#include <stdio.h>
#include <stdlib.h>


// Generated from asm6502.g4 by ANTLR 4.7


#include "asm6502Listener.h"

#include "asm6502Parser.h"


using namespace antlrcpp;
using namespace antlr4;

asm6502Parser::asm6502Parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

asm6502Parser::~asm6502Parser() {
  delete _interpreter;
}

std::string asm6502Parser::getGrammarFileName() const {
  return "asm6502.g4";
}

const std::vector<std::string>& asm6502Parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& asm6502Parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

asm6502Parser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> asm6502Parser::ProgContext::EOL() {
  return getTokens(asm6502Parser::EOL);
}

tree::TerminalNode* asm6502Parser::ProgContext::EOL(size_t i) {
  return getToken(asm6502Parser::EOL, i);
}

std::vector<asm6502Parser::LineContext *> asm6502Parser::ProgContext::line() {
  return getRuleContexts<asm6502Parser::LineContext>();
}

asm6502Parser::LineContext* asm6502Parser::ProgContext::line(size_t i) {
  return getRuleContext<asm6502Parser::LineContext>(i);
}


size_t asm6502Parser::ProgContext::getRuleIndex() const {
  return asm6502Parser::RuleProg;
}

void asm6502Parser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<asm6502Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void asm6502Parser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<asm6502Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}

asm6502Parser::ProgContext* asm6502Parser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, asm6502Parser::RuleProg);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(34); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(31);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << asm6502Parser::T__2)
        | (1ULL << asm6502Parser::T__5)
        | (1ULL << asm6502Parser::T__7)
        | (1ULL << asm6502Parser::ASSEMBLER_INSTRUCTION)
        | (1ULL << asm6502Parser::ADC)
        | (1ULL << asm6502Parser::AND)
        | (1ULL << asm6502Parser::ASL)
        | (1ULL << asm6502Parser::BCC)
        | (1ULL << asm6502Parser::BCS)
        | (1ULL << asm6502Parser::BEQ)
        | (1ULL << asm6502Parser::BIT)
        | (1ULL << asm6502Parser::BMI)
        | (1ULL << asm6502Parser::BNE)
        | (1ULL << asm6502Parser::BPL)
        | (1ULL << asm6502Parser::BRA)
        | (1ULL << asm6502Parser::BRK)
        | (1ULL << asm6502Parser::BVC)
        | (1ULL << asm6502Parser::BVS)
        | (1ULL << asm6502Parser::CLC)
        | (1ULL << asm6502Parser::CLD)
        | (1ULL << asm6502Parser::CLI)
        | (1ULL << asm6502Parser::CLV)
        | (1ULL << asm6502Parser::CMP)
        | (1ULL << asm6502Parser::CPX)
        | (1ULL << asm6502Parser::CPY)
        | (1ULL << asm6502Parser::DEC)
        | (1ULL << asm6502Parser::DEX)
        | (1ULL << asm6502Parser::DEY)
        | (1ULL << asm6502Parser::EOR)
        | (1ULL << asm6502Parser::INC)
        | (1ULL << asm6502Parser::INX)
        | (1ULL << asm6502Parser::INY)
        | (1ULL << asm6502Parser::JMP)
        | (1ULL << asm6502Parser::JSR)
        | (1ULL << asm6502Parser::LDA)
        | (1ULL << asm6502Parser::LDY)
        | (1ULL << asm6502Parser::LDX)
        | (1ULL << asm6502Parser::LSR)
        | (1ULL << asm6502Parser::NOP)
        | (1ULL << asm6502Parser::ORA)
        | (1ULL << asm6502Parser::PHA)
        | (1ULL << asm6502Parser::PHX)
        | (1ULL << asm6502Parser::PHY)
        | (1ULL << asm6502Parser::PHP)
        | (1ULL << asm6502Parser::PLA)
        | (1ULL << asm6502Parser::PLP)
        | (1ULL << asm6502Parser::PLY)
        | (1ULL << asm6502Parser::ROL)
        | (1ULL << asm6502Parser::ROR)
        | (1ULL << asm6502Parser::RTI)
        | (1ULL << asm6502Parser::RTS)
        | (1ULL << asm6502Parser::SBC)
        | (1ULL << asm6502Parser::SEC)
        | (1ULL << asm6502Parser::SED)
        | (1ULL << asm6502Parser::SEI)
        | (1ULL << asm6502Parser::STA)
        | (1ULL << asm6502Parser::STX)
        | (1ULL << asm6502Parser::STY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 64)) & ((1ULL << (asm6502Parser::STZ - 64))
        | (1ULL << (asm6502Parser::TAX - 64))
        | (1ULL << (asm6502Parser::TAY - 64))
        | (1ULL << (asm6502Parser::TSX - 64))
        | (1ULL << (asm6502Parser::TXA - 64))
        | (1ULL << (asm6502Parser::TXS - 64))
        | (1ULL << (asm6502Parser::TYA - 64))
        | (1ULL << (asm6502Parser::NAME - 64))
        | (1ULL << (asm6502Parser::NUMBER - 64))
        | (1ULL << (asm6502Parser::COMMENT - 64))
        | (1ULL << (asm6502Parser::STRING - 64)))) != 0)) {
        setState(30);
        line();
      }
      setState(33);
      match(asm6502Parser::EOL);
      setState(36); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << asm6502Parser::T__2)
      | (1ULL << asm6502Parser::T__5)
      | (1ULL << asm6502Parser::T__7)
      | (1ULL << asm6502Parser::ASSEMBLER_INSTRUCTION)
      | (1ULL << asm6502Parser::ADC)
      | (1ULL << asm6502Parser::AND)
      | (1ULL << asm6502Parser::ASL)
      | (1ULL << asm6502Parser::BCC)
      | (1ULL << asm6502Parser::BCS)
      | (1ULL << asm6502Parser::BEQ)
      | (1ULL << asm6502Parser::BIT)
      | (1ULL << asm6502Parser::BMI)
      | (1ULL << asm6502Parser::BNE)
      | (1ULL << asm6502Parser::BPL)
      | (1ULL << asm6502Parser::BRA)
      | (1ULL << asm6502Parser::BRK)
      | (1ULL << asm6502Parser::BVC)
      | (1ULL << asm6502Parser::BVS)
      | (1ULL << asm6502Parser::CLC)
      | (1ULL << asm6502Parser::CLD)
      | (1ULL << asm6502Parser::CLI)
      | (1ULL << asm6502Parser::CLV)
      | (1ULL << asm6502Parser::CMP)
      | (1ULL << asm6502Parser::CPX)
      | (1ULL << asm6502Parser::CPY)
      | (1ULL << asm6502Parser::DEC)
      | (1ULL << asm6502Parser::DEX)
      | (1ULL << asm6502Parser::DEY)
      | (1ULL << asm6502Parser::EOR)
      | (1ULL << asm6502Parser::INC)
      | (1ULL << asm6502Parser::INX)
      | (1ULL << asm6502Parser::INY)
      | (1ULL << asm6502Parser::JMP)
      | (1ULL << asm6502Parser::JSR)
      | (1ULL << asm6502Parser::LDA)
      | (1ULL << asm6502Parser::LDY)
      | (1ULL << asm6502Parser::LDX)
      | (1ULL << asm6502Parser::LSR)
      | (1ULL << asm6502Parser::NOP)
      | (1ULL << asm6502Parser::ORA)
      | (1ULL << asm6502Parser::PHA)
      | (1ULL << asm6502Parser::PHX)
      | (1ULL << asm6502Parser::PHY)
      | (1ULL << asm6502Parser::PHP)
      | (1ULL << asm6502Parser::PLA)
      | (1ULL << asm6502Parser::PLP)
      | (1ULL << asm6502Parser::PLY)
      | (1ULL << asm6502Parser::ROL)
      | (1ULL << asm6502Parser::ROR)
      | (1ULL << asm6502Parser::RTI)
      | (1ULL << asm6502Parser::RTS)
      | (1ULL << asm6502Parser::SBC)
      | (1ULL << asm6502Parser::SEC)
      | (1ULL << asm6502Parser::SED)
      | (1ULL << asm6502Parser::SEI)
      | (1ULL << asm6502Parser::STA)
      | (1ULL << asm6502Parser::STX)
      | (1ULL << asm6502Parser::STY))) != 0) || ((((_la - 64) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 64)) & ((1ULL << (asm6502Parser::STZ - 64))
      | (1ULL << (asm6502Parser::TAX - 64))
      | (1ULL << (asm6502Parser::TAY - 64))
      | (1ULL << (asm6502Parser::TSX - 64))
      | (1ULL << (asm6502Parser::TXA - 64))
      | (1ULL << (asm6502Parser::TXS - 64))
      | (1ULL << (asm6502Parser::TYA - 64))
      | (1ULL << (asm6502Parser::NAME - 64))
      | (1ULL << (asm6502Parser::NUMBER - 64))
      | (1ULL << (asm6502Parser::COMMENT - 64))
      | (1ULL << (asm6502Parser::STRING - 64))
      | (1ULL << (asm6502Parser::EOL - 64)))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LineContext ------------------------------------------------------------------

asm6502Parser::LineContext::LineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

asm6502Parser::CommentContext* asm6502Parser::LineContext::comment() {
  return getRuleContext<asm6502Parser::CommentContext>(0);
}

asm6502Parser::InstructionContext* asm6502Parser::LineContext::instruction() {
  return getRuleContext<asm6502Parser::InstructionContext>(0);
}

asm6502Parser::AssemblerinstructionContext* asm6502Parser::LineContext::assemblerinstruction() {
  return getRuleContext<asm6502Parser::AssemblerinstructionContext>(0);
}

asm6502Parser::LblContext* asm6502Parser::LineContext::lbl() {
  return getRuleContext<asm6502Parser::LblContext>(0);
}


size_t asm6502Parser::LineContext::getRuleIndex() const {
  return asm6502Parser::RuleLine;
}

void asm6502Parser::LineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<asm6502Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLine(this);
}

void asm6502Parser::LineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<asm6502Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLine(this);
}

asm6502Parser::LineContext* asm6502Parser::line() {
  LineContext *_localctx = _tracker.createInstance<LineContext>(_ctx, getState());
  enterRule(_localctx, 2, asm6502Parser::RuleLine);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(42);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(38);
      comment();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(39);
      instruction();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(40);
      assemblerinstruction();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(41);
      lbl();
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

//----------------- InstructionContext ------------------------------------------------------------------

asm6502Parser::InstructionContext::InstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

asm6502Parser::OpcodeContext* asm6502Parser::InstructionContext::opcode() {
  return getRuleContext<asm6502Parser::OpcodeContext>(0);
}

asm6502Parser::LabelContext* asm6502Parser::InstructionContext::label() {
  return getRuleContext<asm6502Parser::LabelContext>(0);
}

asm6502Parser::ArgumentlistContext* asm6502Parser::InstructionContext::argumentlist() {
  return getRuleContext<asm6502Parser::ArgumentlistContext>(0);
}

asm6502Parser::CommentContext* asm6502Parser::InstructionContext::comment() {
  return getRuleContext<asm6502Parser::CommentContext>(0);
}


size_t asm6502Parser::InstructionContext::getRuleIndex() const {
  return asm6502Parser::RuleInstruction;
}

void asm6502Parser::InstructionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<asm6502Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInstruction(this);
}

void asm6502Parser::InstructionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<asm6502Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInstruction(this);
}

asm6502Parser::InstructionContext* asm6502Parser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 4, asm6502Parser::RuleInstruction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(45);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == asm6502Parser::NAME) {
      setState(44);
      label();
    }
    setState(47);
    opcode();
    setState(49);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << asm6502Parser::T__2)
      | (1ULL << asm6502Parser::T__5)
      | (1ULL << asm6502Parser::T__7))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (asm6502Parser::NAME - 71))
      | (1ULL << (asm6502Parser::NUMBER - 71))
      | (1ULL << (asm6502Parser::STRING - 71)))) != 0)) {
      setState(48);
      argumentlist();
    }
    setState(52);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == asm6502Parser::COMMENT) {
      setState(51);
      comment();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssemblerinstructionContext ------------------------------------------------------------------

asm6502Parser::AssemblerinstructionContext::AssemblerinstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

asm6502Parser::AssembleropcodeContext* asm6502Parser::AssemblerinstructionContext::assembleropcode() {
  return getRuleContext<asm6502Parser::AssembleropcodeContext>(0);
}

asm6502Parser::ArgumentContext* asm6502Parser::AssemblerinstructionContext::argument() {
  return getRuleContext<asm6502Parser::ArgumentContext>(0);
}

asm6502Parser::ArgumentlistContext* asm6502Parser::AssemblerinstructionContext::argumentlist() {
  return getRuleContext<asm6502Parser::ArgumentlistContext>(0);
}

asm6502Parser::CommentContext* asm6502Parser::AssemblerinstructionContext::comment() {
  return getRuleContext<asm6502Parser::CommentContext>(0);
}


size_t asm6502Parser::AssemblerinstructionContext::getRuleIndex() const {
  return asm6502Parser::RuleAssemblerinstruction;
}

void asm6502Parser::AssemblerinstructionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<asm6502Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssemblerinstruction(this);
}

void asm6502Parser::AssemblerinstructionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<asm6502Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssemblerinstruction(this);
}

asm6502Parser::AssemblerinstructionContext* asm6502Parser::assemblerinstruction() {
  AssemblerinstructionContext *_localctx = _tracker.createInstance<AssemblerinstructionContext>(_ctx, getState());
  enterRule(_localctx, 6, asm6502Parser::RuleAssemblerinstruction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(55);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << asm6502Parser::T__2)
      | (1ULL << asm6502Parser::T__5)
      | (1ULL << asm6502Parser::T__7))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (asm6502Parser::NAME - 71))
      | (1ULL << (asm6502Parser::NUMBER - 71))
      | (1ULL << (asm6502Parser::STRING - 71)))) != 0)) {
      setState(54);
      argument();
    }
    setState(57);
    assembleropcode();
    setState(59);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << asm6502Parser::T__2)
      | (1ULL << asm6502Parser::T__5)
      | (1ULL << asm6502Parser::T__7))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (asm6502Parser::NAME - 71))
      | (1ULL << (asm6502Parser::NUMBER - 71))
      | (1ULL << (asm6502Parser::STRING - 71)))) != 0)) {
      setState(58);
      argumentlist();
    }
    setState(62);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == asm6502Parser::COMMENT) {
      setState(61);
      comment();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssembleropcodeContext ------------------------------------------------------------------

asm6502Parser::AssembleropcodeContext::AssembleropcodeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* asm6502Parser::AssembleropcodeContext::ASSEMBLER_INSTRUCTION() {
  return getToken(asm6502Parser::ASSEMBLER_INSTRUCTION, 0);
}


size_t asm6502Parser::AssembleropcodeContext::getRuleIndex() const {
  return asm6502Parser::RuleAssembleropcode;
}

void asm6502Parser::AssembleropcodeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<asm6502Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssembleropcode(this);
}

void asm6502Parser::AssembleropcodeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<asm6502Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssembleropcode(this);
}

asm6502Parser::AssembleropcodeContext* asm6502Parser::assembleropcode() {
  AssembleropcodeContext *_localctx = _tracker.createInstance<AssembleropcodeContext>(_ctx, getState());
  enterRule(_localctx, 8, asm6502Parser::RuleAssembleropcode);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    match(asm6502Parser::ASSEMBLER_INSTRUCTION);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LblContext ------------------------------------------------------------------

asm6502Parser::LblContext::LblContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

asm6502Parser::LabelContext* asm6502Parser::LblContext::label() {
  return getRuleContext<asm6502Parser::LabelContext>(0);
}


size_t asm6502Parser::LblContext::getRuleIndex() const {
  return asm6502Parser::RuleLbl;
}

void asm6502Parser::LblContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<asm6502Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLbl(this);
}

void asm6502Parser::LblContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<asm6502Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLbl(this);
}

asm6502Parser::LblContext* asm6502Parser::lbl() {
  LblContext *_localctx = _tracker.createInstance<LblContext>(_ctx, getState());
  enterRule(_localctx, 10, asm6502Parser::RuleLbl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(66);
    label();
    setState(67);
    match(asm6502Parser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentlistContext ------------------------------------------------------------------

asm6502Parser::ArgumentlistContext::ArgumentlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

asm6502Parser::ArgumentContext* asm6502Parser::ArgumentlistContext::argument() {
  return getRuleContext<asm6502Parser::ArgumentContext>(0);
}

asm6502Parser::ArgumentlistContext* asm6502Parser::ArgumentlistContext::argumentlist() {
  return getRuleContext<asm6502Parser::ArgumentlistContext>(0);
}


size_t asm6502Parser::ArgumentlistContext::getRuleIndex() const {
  return asm6502Parser::RuleArgumentlist;
}

void asm6502Parser::ArgumentlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<asm6502Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgumentlist(this);
}

void asm6502Parser::ArgumentlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<asm6502Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgumentlist(this);
}

asm6502Parser::ArgumentlistContext* asm6502Parser::argumentlist() {
  ArgumentlistContext *_localctx = _tracker.createInstance<ArgumentlistContext>(_ctx, getState());
  enterRule(_localctx, 12, asm6502Parser::RuleArgumentlist);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    argument();
    setState(72);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == asm6502Parser::T__1) {
      setState(70);
      match(asm6502Parser::T__1);
      setState(71);
      argumentlist();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabelContext ------------------------------------------------------------------

asm6502Parser::LabelContext::LabelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

asm6502Parser::NameContext* asm6502Parser::LabelContext::name() {
  return getRuleContext<asm6502Parser::NameContext>(0);
}


size_t asm6502Parser::LabelContext::getRuleIndex() const {
  return asm6502Parser::RuleLabel;
}

void asm6502Parser::LabelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<asm6502Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabel(this);
}

void asm6502Parser::LabelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<asm6502Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabel(this);
}

asm6502Parser::LabelContext* asm6502Parser::label() {
  LabelContext *_localctx = _tracker.createInstance<LabelContext>(_ctx, getState());
  enterRule(_localctx, 14, asm6502Parser::RuleLabel);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    name();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentContext ------------------------------------------------------------------

asm6502Parser::ArgumentContext::ArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<asm6502Parser::NumberContext *> asm6502Parser::ArgumentContext::number() {
  return getRuleContexts<asm6502Parser::NumberContext>();
}

asm6502Parser::NumberContext* asm6502Parser::ArgumentContext::number(size_t i) {
  return getRuleContext<asm6502Parser::NumberContext>(i);
}

asm6502Parser::NameContext* asm6502Parser::ArgumentContext::name() {
  return getRuleContext<asm6502Parser::NameContext>(0);
}

asm6502Parser::StringContext* asm6502Parser::ArgumentContext::string() {
  return getRuleContext<asm6502Parser::StringContext>(0);
}

asm6502Parser::PrefixContext* asm6502Parser::ArgumentContext::prefix() {
  return getRuleContext<asm6502Parser::PrefixContext>(0);
}

asm6502Parser::ArgumentContext* asm6502Parser::ArgumentContext::argument() {
  return getRuleContext<asm6502Parser::ArgumentContext>(0);
}


size_t asm6502Parser::ArgumentContext::getRuleIndex() const {
  return asm6502Parser::RuleArgument;
}

void asm6502Parser::ArgumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<asm6502Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgument(this);
}

void asm6502Parser::ArgumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<asm6502Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgument(this);
}

asm6502Parser::ArgumentContext* asm6502Parser::argument() {
  ArgumentContext *_localctx = _tracker.createInstance<ArgumentContext>(_ctx, getState());
  enterRule(_localctx, 16, asm6502Parser::RuleArgument);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(93);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case asm6502Parser::T__2:
      case asm6502Parser::T__7:
      case asm6502Parser::NAME:
      case asm6502Parser::NUMBER:
      case asm6502Parser::STRING: {
        enterOuterAlt(_localctx, 1);
        setState(77);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == asm6502Parser::T__7) {
          setState(76);
          prefix();
        }
        setState(83);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case asm6502Parser::NUMBER: {
            setState(79);
            number();
            break;
          }

          case asm6502Parser::NAME: {
            setState(80);
            name();
            break;
          }

          case asm6502Parser::STRING: {
            setState(81);
            string();
            break;
          }

          case asm6502Parser::T__2: {
            setState(82);
            match(asm6502Parser::T__2);
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(87);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == asm6502Parser::T__3

        || _la == asm6502Parser::T__4) {
          setState(85);
          _la = _input->LA(1);
          if (!(_la == asm6502Parser::T__3

          || _la == asm6502Parser::T__4)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(86);
          number();
        }
        break;
      }

      case asm6502Parser::T__5: {
        enterOuterAlt(_localctx, 2);
        setState(89);
        match(asm6502Parser::T__5);
        setState(90);
        argument();
        setState(91);
        match(asm6502Parser::T__6);
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

//----------------- PrefixContext ------------------------------------------------------------------

asm6502Parser::PrefixContext::PrefixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t asm6502Parser::PrefixContext::getRuleIndex() const {
  return asm6502Parser::RulePrefix;
}

void asm6502Parser::PrefixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<asm6502Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefix(this);
}

void asm6502Parser::PrefixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<asm6502Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefix(this);
}

asm6502Parser::PrefixContext* asm6502Parser::prefix() {
  PrefixContext *_localctx = _tracker.createInstance<PrefixContext>(_ctx, getState());
  enterRule(_localctx, 18, asm6502Parser::RulePrefix);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(95);
    match(asm6502Parser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringContext ------------------------------------------------------------------

asm6502Parser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* asm6502Parser::StringContext::STRING() {
  return getToken(asm6502Parser::STRING, 0);
}


size_t asm6502Parser::StringContext::getRuleIndex() const {
  return asm6502Parser::RuleString;
}

void asm6502Parser::StringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<asm6502Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString(this);
}

void asm6502Parser::StringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<asm6502Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString(this);
}

asm6502Parser::StringContext* asm6502Parser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 20, asm6502Parser::RuleString);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(97);
    match(asm6502Parser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NameContext ------------------------------------------------------------------

asm6502Parser::NameContext::NameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* asm6502Parser::NameContext::NAME() {
  return getToken(asm6502Parser::NAME, 0);
}


size_t asm6502Parser::NameContext::getRuleIndex() const {
  return asm6502Parser::RuleName;
}

void asm6502Parser::NameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<asm6502Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterName(this);
}

void asm6502Parser::NameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<asm6502Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitName(this);
}

asm6502Parser::NameContext* asm6502Parser::name() {
  NameContext *_localctx = _tracker.createInstance<NameContext>(_ctx, getState());
  enterRule(_localctx, 22, asm6502Parser::RuleName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    match(asm6502Parser::NAME);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

asm6502Parser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* asm6502Parser::NumberContext::NUMBER() {
  return getToken(asm6502Parser::NUMBER, 0);
}


size_t asm6502Parser::NumberContext::getRuleIndex() const {
  return asm6502Parser::RuleNumber;
}

void asm6502Parser::NumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<asm6502Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumber(this);
}

void asm6502Parser::NumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<asm6502Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumber(this);
}

asm6502Parser::NumberContext* asm6502Parser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 24, asm6502Parser::RuleNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(101);
    match(asm6502Parser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CommentContext ------------------------------------------------------------------

asm6502Parser::CommentContext::CommentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* asm6502Parser::CommentContext::COMMENT() {
  return getToken(asm6502Parser::COMMENT, 0);
}


size_t asm6502Parser::CommentContext::getRuleIndex() const {
  return asm6502Parser::RuleComment;
}

void asm6502Parser::CommentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<asm6502Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComment(this);
}

void asm6502Parser::CommentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<asm6502Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComment(this);
}

asm6502Parser::CommentContext* asm6502Parser::comment() {
  CommentContext *_localctx = _tracker.createInstance<CommentContext>(_ctx, getState());
  enterRule(_localctx, 26, asm6502Parser::RuleComment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(103);
    match(asm6502Parser::COMMENT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpcodeContext ------------------------------------------------------------------

asm6502Parser::OpcodeContext::OpcodeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* asm6502Parser::OpcodeContext::ADC() {
  return getToken(asm6502Parser::ADC, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::AND() {
  return getToken(asm6502Parser::AND, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::ASL() {
  return getToken(asm6502Parser::ASL, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::BCC() {
  return getToken(asm6502Parser::BCC, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::BCS() {
  return getToken(asm6502Parser::BCS, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::BEQ() {
  return getToken(asm6502Parser::BEQ, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::BIT() {
  return getToken(asm6502Parser::BIT, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::BMI() {
  return getToken(asm6502Parser::BMI, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::BNE() {
  return getToken(asm6502Parser::BNE, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::BPL() {
  return getToken(asm6502Parser::BPL, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::BRA() {
  return getToken(asm6502Parser::BRA, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::BRK() {
  return getToken(asm6502Parser::BRK, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::BVC() {
  return getToken(asm6502Parser::BVC, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::BVS() {
  return getToken(asm6502Parser::BVS, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::CLC() {
  return getToken(asm6502Parser::CLC, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::CLD() {
  return getToken(asm6502Parser::CLD, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::CLI() {
  return getToken(asm6502Parser::CLI, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::CLV() {
  return getToken(asm6502Parser::CLV, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::CMP() {
  return getToken(asm6502Parser::CMP, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::CPX() {
  return getToken(asm6502Parser::CPX, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::CPY() {
  return getToken(asm6502Parser::CPY, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::DEC() {
  return getToken(asm6502Parser::DEC, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::DEX() {
  return getToken(asm6502Parser::DEX, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::DEY() {
  return getToken(asm6502Parser::DEY, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::EOR() {
  return getToken(asm6502Parser::EOR, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::INC() {
  return getToken(asm6502Parser::INC, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::INX() {
  return getToken(asm6502Parser::INX, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::INY() {
  return getToken(asm6502Parser::INY, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::JMP() {
  return getToken(asm6502Parser::JMP, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::JSR() {
  return getToken(asm6502Parser::JSR, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::LDA() {
  return getToken(asm6502Parser::LDA, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::LDY() {
  return getToken(asm6502Parser::LDY, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::LDX() {
  return getToken(asm6502Parser::LDX, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::LSR() {
  return getToken(asm6502Parser::LSR, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::NOP() {
  return getToken(asm6502Parser::NOP, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::ORA() {
  return getToken(asm6502Parser::ORA, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::PHA() {
  return getToken(asm6502Parser::PHA, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::PHX() {
  return getToken(asm6502Parser::PHX, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::PHY() {
  return getToken(asm6502Parser::PHY, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::PHP() {
  return getToken(asm6502Parser::PHP, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::PLA() {
  return getToken(asm6502Parser::PLA, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::PLP() {
  return getToken(asm6502Parser::PLP, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::PLY() {
  return getToken(asm6502Parser::PLY, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::ROL() {
  return getToken(asm6502Parser::ROL, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::ROR() {
  return getToken(asm6502Parser::ROR, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::RTI() {
  return getToken(asm6502Parser::RTI, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::RTS() {
  return getToken(asm6502Parser::RTS, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::SBC() {
  return getToken(asm6502Parser::SBC, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::SEC() {
  return getToken(asm6502Parser::SEC, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::SED() {
  return getToken(asm6502Parser::SED, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::SEI() {
  return getToken(asm6502Parser::SEI, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::STA() {
  return getToken(asm6502Parser::STA, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::STX() {
  return getToken(asm6502Parser::STX, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::STY() {
  return getToken(asm6502Parser::STY, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::STZ() {
  return getToken(asm6502Parser::STZ, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::TAX() {
  return getToken(asm6502Parser::TAX, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::TAY() {
  return getToken(asm6502Parser::TAY, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::TSX() {
  return getToken(asm6502Parser::TSX, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::TXA() {
  return getToken(asm6502Parser::TXA, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::TXS() {
  return getToken(asm6502Parser::TXS, 0);
}

tree::TerminalNode* asm6502Parser::OpcodeContext::TYA() {
  return getToken(asm6502Parser::TYA, 0);
}


size_t asm6502Parser::OpcodeContext::getRuleIndex() const {
  return asm6502Parser::RuleOpcode;
}

void asm6502Parser::OpcodeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<asm6502Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOpcode(this);
}

void asm6502Parser::OpcodeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<asm6502Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOpcode(this);
}

asm6502Parser::OpcodeContext* asm6502Parser::opcode() {
  OpcodeContext *_localctx = _tracker.createInstance<OpcodeContext>(_ctx, getState());
  enterRule(_localctx, 28, asm6502Parser::RuleOpcode);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(105);
    _la = _input->LA(1);
    if (!(((((_la - 10) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 10)) & ((1ULL << (asm6502Parser::ADC - 10))
      | (1ULL << (asm6502Parser::AND - 10))
      | (1ULL << (asm6502Parser::ASL - 10))
      | (1ULL << (asm6502Parser::BCC - 10))
      | (1ULL << (asm6502Parser::BCS - 10))
      | (1ULL << (asm6502Parser::BEQ - 10))
      | (1ULL << (asm6502Parser::BIT - 10))
      | (1ULL << (asm6502Parser::BMI - 10))
      | (1ULL << (asm6502Parser::BNE - 10))
      | (1ULL << (asm6502Parser::BPL - 10))
      | (1ULL << (asm6502Parser::BRA - 10))
      | (1ULL << (asm6502Parser::BRK - 10))
      | (1ULL << (asm6502Parser::BVC - 10))
      | (1ULL << (asm6502Parser::BVS - 10))
      | (1ULL << (asm6502Parser::CLC - 10))
      | (1ULL << (asm6502Parser::CLD - 10))
      | (1ULL << (asm6502Parser::CLI - 10))
      | (1ULL << (asm6502Parser::CLV - 10))
      | (1ULL << (asm6502Parser::CMP - 10))
      | (1ULL << (asm6502Parser::CPX - 10))
      | (1ULL << (asm6502Parser::CPY - 10))
      | (1ULL << (asm6502Parser::DEC - 10))
      | (1ULL << (asm6502Parser::DEX - 10))
      | (1ULL << (asm6502Parser::DEY - 10))
      | (1ULL << (asm6502Parser::EOR - 10))
      | (1ULL << (asm6502Parser::INC - 10))
      | (1ULL << (asm6502Parser::INX - 10))
      | (1ULL << (asm6502Parser::INY - 10))
      | (1ULL << (asm6502Parser::JMP - 10))
      | (1ULL << (asm6502Parser::JSR - 10))
      | (1ULL << (asm6502Parser::LDA - 10))
      | (1ULL << (asm6502Parser::LDY - 10))
      | (1ULL << (asm6502Parser::LDX - 10))
      | (1ULL << (asm6502Parser::LSR - 10))
      | (1ULL << (asm6502Parser::NOP - 10))
      | (1ULL << (asm6502Parser::ORA - 10))
      | (1ULL << (asm6502Parser::PHA - 10))
      | (1ULL << (asm6502Parser::PHX - 10))
      | (1ULL << (asm6502Parser::PHY - 10))
      | (1ULL << (asm6502Parser::PHP - 10))
      | (1ULL << (asm6502Parser::PLA - 10))
      | (1ULL << (asm6502Parser::PLP - 10))
      | (1ULL << (asm6502Parser::PLY - 10))
      | (1ULL << (asm6502Parser::ROL - 10))
      | (1ULL << (asm6502Parser::ROR - 10))
      | (1ULL << (asm6502Parser::RTI - 10))
      | (1ULL << (asm6502Parser::RTS - 10))
      | (1ULL << (asm6502Parser::SBC - 10))
      | (1ULL << (asm6502Parser::SEC - 10))
      | (1ULL << (asm6502Parser::SED - 10))
      | (1ULL << (asm6502Parser::SEI - 10))
      | (1ULL << (asm6502Parser::STA - 10))
      | (1ULL << (asm6502Parser::STX - 10))
      | (1ULL << (asm6502Parser::STY - 10))
      | (1ULL << (asm6502Parser::STZ - 10))
      | (1ULL << (asm6502Parser::TAX - 10))
      | (1ULL << (asm6502Parser::TAY - 10))
      | (1ULL << (asm6502Parser::TSX - 10))
      | (1ULL << (asm6502Parser::TXA - 10))
      | (1ULL << (asm6502Parser::TXS - 10))
      | (1ULL << (asm6502Parser::TYA - 10)))) != 0))) {
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

// Static vars and initialization.
std::vector<dfa::DFA> asm6502Parser::_decisionToDFA;
atn::PredictionContextCache asm6502Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN asm6502Parser::_atn;
std::vector<uint16_t> asm6502Parser::_serializedATN;

std::vector<std::string> asm6502Parser::_ruleNames = {
  "prog", "line", "instruction", "assemblerinstruction", "assembleropcode", 
  "lbl", "argumentlist", "label", "argument", "prefix", "string", "name", 
  "number", "comment", "opcode"
};

std::vector<std::string> asm6502Parser::_literalNames = {
  "", "':'", "','", "'*'", "'+'", "'-'", "'('", "')'", "'#'"
};

std::vector<std::string> asm6502Parser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "ASSEMBLER_INSTRUCTION", "ADC", "AND", 
  "ASL", "BCC", "BCS", "BEQ", "BIT", "BMI", "BNE", "BPL", "BRA", "BRK", 
  "BVC", "BVS", "CLC", "CLD", "CLI", "CLV", "CMP", "CPX", "CPY", "DEC", 
  "DEX", "DEY", "EOR", "INC", "INX", "INY", "JMP", "JSR", "LDA", "LDY", 
  "LDX", "LSR", "NOP", "ORA", "PHA", "PHX", "PHY", "PHP", "PLA", "PLP", 
  "PLY", "ROL", "ROR", "RTI", "RTS", "SBC", "SEC", "SED", "SEI", "STA", 
  "STX", "STY", "STZ", "TAX", "TAY", "TSX", "TXA", "TXS", "TYA", "NAME", 
  "NUMBER", "COMMENT", "STRING", "EOL", "WS"
};

dfa::Vocabulary asm6502Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> asm6502Parser::_tokenNames;

asm6502Parser::Initializer::Initializer() {
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
    0x3, 0x4e, 0x6e, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x3, 0x2, 0x5, 0x2, 0x22, 0xa, 
    0x2, 0x3, 0x2, 0x6, 0x2, 0x25, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x26, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x2d, 0xa, 0x3, 0x3, 0x4, 
    0x5, 0x4, 0x30, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x34, 0xa, 0x4, 
    0x3, 0x4, 0x5, 0x4, 0x37, 0xa, 0x4, 0x3, 0x5, 0x5, 0x5, 0x3a, 0xa, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x3e, 0xa, 0x5, 0x3, 0x5, 0x5, 0x5, 0x41, 
    0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x4b, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0xa, 0x5, 0xa, 0x50, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x5, 0xa, 0x56, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x5a, 0xa, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x60, 0xa, 0xa, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x2, 0x2, 
    0x11, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 
    0x1a, 0x1c, 0x1e, 0x2, 0x4, 0x3, 0x2, 0x6, 0x7, 0x3, 0x2, 0xc, 0x48, 
    0x2, 0x70, 0x2, 0x24, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2c, 0x3, 0x2, 0x2, 
    0x2, 0x6, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x8, 0x39, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0x42, 0x3, 0x2, 0x2, 0x2, 0xc, 0x44, 0x3, 0x2, 0x2, 0x2, 0xe, 0x47, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x12, 0x5f, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x61, 0x3, 0x2, 0x2, 0x2, 0x16, 0x63, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x65, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x67, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0x69, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x6b, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0x22, 0x5, 0x4, 0x3, 0x2, 0x21, 0x20, 0x3, 0x2, 0x2, 0x2, 0x21, 
    0x22, 0x3, 0x2, 0x2, 0x2, 0x22, 0x23, 0x3, 0x2, 0x2, 0x2, 0x23, 0x25, 
    0x7, 0x4d, 0x2, 0x2, 0x24, 0x21, 0x3, 0x2, 0x2, 0x2, 0x25, 0x26, 0x3, 
    0x2, 0x2, 0x2, 0x26, 0x24, 0x3, 0x2, 0x2, 0x2, 0x26, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0x27, 0x3, 0x3, 0x2, 0x2, 0x2, 0x28, 0x2d, 0x5, 0x1c, 0xf, 
    0x2, 0x29, 0x2d, 0x5, 0x6, 0x4, 0x2, 0x2a, 0x2d, 0x5, 0x8, 0x5, 0x2, 
    0x2b, 0x2d, 0x5, 0xc, 0x7, 0x2, 0x2c, 0x28, 0x3, 0x2, 0x2, 0x2, 0x2c, 
    0x29, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2b, 
    0x3, 0x2, 0x2, 0x2, 0x2d, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x30, 0x5, 
    0x10, 0x9, 0x2, 0x2f, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0x31, 0x3, 0x2, 0x2, 0x2, 0x31, 0x33, 0x5, 0x1e, 0x10, 
    0x2, 0x32, 0x34, 0x5, 0xe, 0x8, 0x2, 0x33, 0x32, 0x3, 0x2, 0x2, 0x2, 
    0x33, 0x34, 0x3, 0x2, 0x2, 0x2, 0x34, 0x36, 0x3, 0x2, 0x2, 0x2, 0x35, 
    0x37, 0x5, 0x1c, 0xf, 0x2, 0x36, 0x35, 0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 
    0x3, 0x2, 0x2, 0x2, 0x37, 0x7, 0x3, 0x2, 0x2, 0x2, 0x38, 0x3a, 0x5, 
    0x12, 0xa, 0x2, 0x39, 0x38, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 0x3, 0x2, 
    0x2, 0x2, 0x3a, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3d, 0x5, 0xa, 0x6, 
    0x2, 0x3c, 0x3e, 0x5, 0xe, 0x8, 0x2, 0x3d, 0x3c, 0x3, 0x2, 0x2, 0x2, 
    0x3d, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x40, 0x3, 0x2, 0x2, 0x2, 0x3f, 
    0x41, 0x5, 0x1c, 0xf, 0x2, 0x40, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 
    0x3, 0x2, 0x2, 0x2, 0x41, 0x9, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x7, 
    0xb, 0x2, 0x2, 0x43, 0xb, 0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x5, 0x10, 
    0x9, 0x2, 0x45, 0x46, 0x7, 0x3, 0x2, 0x2, 0x46, 0xd, 0x3, 0x2, 0x2, 
    0x2, 0x47, 0x4a, 0x5, 0x12, 0xa, 0x2, 0x48, 0x49, 0x7, 0x4, 0x2, 0x2, 
    0x49, 0x4b, 0x5, 0xe, 0x8, 0x2, 0x4a, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4a, 
    0x4b, 0x3, 0x2, 0x2, 0x2, 0x4b, 0xf, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 
    0x5, 0x18, 0xd, 0x2, 0x4d, 0x11, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x50, 0x5, 
    0x14, 0xb, 0x2, 0x4f, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x3, 0x2, 
    0x2, 0x2, 0x50, 0x55, 0x3, 0x2, 0x2, 0x2, 0x51, 0x56, 0x5, 0x1a, 0xe, 
    0x2, 0x52, 0x56, 0x5, 0x18, 0xd, 0x2, 0x53, 0x56, 0x5, 0x16, 0xc, 0x2, 
    0x54, 0x56, 0x7, 0x5, 0x2, 0x2, 0x55, 0x51, 0x3, 0x2, 0x2, 0x2, 0x55, 
    0x52, 0x3, 0x2, 0x2, 0x2, 0x55, 0x53, 0x3, 0x2, 0x2, 0x2, 0x55, 0x54, 
    0x3, 0x2, 0x2, 0x2, 0x56, 0x59, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 0x9, 
    0x2, 0x2, 0x2, 0x58, 0x5a, 0x5, 0x1a, 0xe, 0x2, 0x59, 0x57, 0x3, 0x2, 
    0x2, 0x2, 0x59, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x60, 0x3, 0x2, 0x2, 
    0x2, 0x5b, 0x5c, 0x7, 0x8, 0x2, 0x2, 0x5c, 0x5d, 0x5, 0x12, 0xa, 0x2, 
    0x5d, 0x5e, 0x7, 0x9, 0x2, 0x2, 0x5e, 0x60, 0x3, 0x2, 0x2, 0x2, 0x5f, 
    0x4f, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x60, 0x13, 
    0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 0x7, 0xa, 0x2, 0x2, 0x62, 0x15, 0x3, 
    0x2, 0x2, 0x2, 0x63, 0x64, 0x7, 0x4c, 0x2, 0x2, 0x64, 0x17, 0x3, 0x2, 
    0x2, 0x2, 0x65, 0x66, 0x7, 0x49, 0x2, 0x2, 0x66, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0x67, 0x68, 0x7, 0x4a, 0x2, 0x2, 0x68, 0x1b, 0x3, 0x2, 0x2, 0x2, 
    0x69, 0x6a, 0x7, 0x4b, 0x2, 0x2, 0x6a, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x6b, 
    0x6c, 0x9, 0x3, 0x2, 0x2, 0x6c, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x10, 0x21, 
    0x26, 0x2c, 0x2f, 0x33, 0x36, 0x39, 0x3d, 0x40, 0x4a, 0x4f, 0x55, 0x59, 
    0x5f, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

asm6502Parser::Initializer asm6502Parser::_init;
