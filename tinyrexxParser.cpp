
// Generated from tinyrexx.g4 by ANTLR 4.7.1


#include "tinyrexxListener.h"

#include "tinyrexxParser.h"


using namespace antlrcpp;
using namespace antlr4;

tinyrexxParser::tinyrexxParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

tinyrexxParser::~tinyrexxParser() {
  delete _interpreter;
}

std::string tinyrexxParser::getGrammarFileName() const {
  return "tinyrexx.g4";
}

const std::vector<std::string>& tinyrexxParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& tinyrexxParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

tinyrexxParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tinyrexxParser::StatementContext *> tinyrexxParser::ProgramContext::statement() {
  return getRuleContexts<tinyrexxParser::StatementContext>();
}

tinyrexxParser::StatementContext* tinyrexxParser::ProgramContext::statement(size_t i) {
  return getRuleContext<tinyrexxParser::StatementContext>(i);
}


size_t tinyrexxParser::ProgramContext::getRuleIndex() const {
  return tinyrexxParser::RuleProgram;
}

void tinyrexxParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void tinyrexxParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

tinyrexxParser::ProgramContext* tinyrexxParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, tinyrexxParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(27); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(26);
      statement();
      setState(29); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << tinyrexxParser::T__1)
      | (1ULL << tinyrexxParser::T__2)
      | (1ULL << tinyrexxParser::T__3)
      | (1ULL << tinyrexxParser::ID))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

tinyrexxParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tinyrexxParser::AssignContext* tinyrexxParser::StatementContext::assign() {
  return getRuleContext<tinyrexxParser::AssignContext>(0);
}

tinyrexxParser::PrintContext* tinyrexxParser::StatementContext::print() {
  return getRuleContext<tinyrexxParser::PrintContext>(0);
}

tinyrexxParser::InputContext* tinyrexxParser::StatementContext::input() {
  return getRuleContext<tinyrexxParser::InputContext>(0);
}

tinyrexxParser::W_loopContext* tinyrexxParser::StatementContext::w_loop() {
  return getRuleContext<tinyrexxParser::W_loopContext>(0);
}

tinyrexxParser::ForeachContext* tinyrexxParser::StatementContext::foreach() {
  return getRuleContext<tinyrexxParser::ForeachContext>(0);
}


size_t tinyrexxParser::StatementContext::getRuleIndex() const {
  return tinyrexxParser::RuleStatement;
}

void tinyrexxParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void tinyrexxParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

tinyrexxParser::StatementContext* tinyrexxParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, tinyrexxParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(36);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(31);
      assign();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(32);
      print();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(33);
      input();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(34);
      w_loop();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(35);
      foreach();
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

//----------------- AssignContext ------------------------------------------------------------------

tinyrexxParser::AssignContext::AssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tinyrexxParser::AssignContext::ID() {
  return getToken(tinyrexxParser::ID, 0);
}

tinyrexxParser::A_exprContext* tinyrexxParser::AssignContext::a_expr() {
  return getRuleContext<tinyrexxParser::A_exprContext>(0);
}


size_t tinyrexxParser::AssignContext::getRuleIndex() const {
  return tinyrexxParser::RuleAssign;
}

void tinyrexxParser::AssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssign(this);
}

void tinyrexxParser::AssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssign(this);
}

tinyrexxParser::AssignContext* tinyrexxParser::assign() {
  AssignContext *_localctx = _tracker.createInstance<AssignContext>(_ctx, getState());
  enterRule(_localctx, 4, tinyrexxParser::RuleAssign);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(38);
    match(tinyrexxParser::ID);
    setState(39);
    match(tinyrexxParser::T__0);
    setState(40);
    a_expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintContext ------------------------------------------------------------------

tinyrexxParser::PrintContext::PrintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tinyrexxParser::A_exprContext* tinyrexxParser::PrintContext::a_expr() {
  return getRuleContext<tinyrexxParser::A_exprContext>(0);
}


size_t tinyrexxParser::PrintContext::getRuleIndex() const {
  return tinyrexxParser::RulePrint;
}

void tinyrexxParser::PrintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint(this);
}

void tinyrexxParser::PrintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint(this);
}

tinyrexxParser::PrintContext* tinyrexxParser::print() {
  PrintContext *_localctx = _tracker.createInstance<PrintContext>(_ctx, getState());
  enterRule(_localctx, 6, tinyrexxParser::RulePrint);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(42);
    match(tinyrexxParser::T__1);
    setState(43);
    a_expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InputContext ------------------------------------------------------------------

tinyrexxParser::InputContext::InputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tinyrexxParser::InputContext::ID() {
  return getToken(tinyrexxParser::ID, 0);
}


size_t tinyrexxParser::InputContext::getRuleIndex() const {
  return tinyrexxParser::RuleInput;
}

void tinyrexxParser::InputContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInput(this);
}

void tinyrexxParser::InputContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInput(this);
}

tinyrexxParser::InputContext* tinyrexxParser::input() {
  InputContext *_localctx = _tracker.createInstance<InputContext>(_ctx, getState());
  enterRule(_localctx, 8, tinyrexxParser::RuleInput);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(45);
    match(tinyrexxParser::T__2);
    setState(46);
    match(tinyrexxParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- W_loopContext ------------------------------------------------------------------

tinyrexxParser::W_loopContext::W_loopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tinyrexxParser::TestContext* tinyrexxParser::W_loopContext::test() {
  return getRuleContext<tinyrexxParser::TestContext>(0);
}

std::vector<tinyrexxParser::StatementContext *> tinyrexxParser::W_loopContext::statement() {
  return getRuleContexts<tinyrexxParser::StatementContext>();
}

tinyrexxParser::StatementContext* tinyrexxParser::W_loopContext::statement(size_t i) {
  return getRuleContext<tinyrexxParser::StatementContext>(i);
}


size_t tinyrexxParser::W_loopContext::getRuleIndex() const {
  return tinyrexxParser::RuleW_loop;
}

void tinyrexxParser::W_loopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterW_loop(this);
}

void tinyrexxParser::W_loopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitW_loop(this);
}

tinyrexxParser::W_loopContext* tinyrexxParser::w_loop() {
  W_loopContext *_localctx = _tracker.createInstance<W_loopContext>(_ctx, getState());
  enterRule(_localctx, 10, tinyrexxParser::RuleW_loop);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(48);
    match(tinyrexxParser::T__3);
    setState(49);
    match(tinyrexxParser::T__4);
    setState(50);
    test();
    setState(52); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(51);
      statement();
      setState(54); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << tinyrexxParser::T__1)
      | (1ULL << tinyrexxParser::T__2)
      | (1ULL << tinyrexxParser::T__3)
      | (1ULL << tinyrexxParser::ID))) != 0));
    setState(56);
    match(tinyrexxParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TestContext ------------------------------------------------------------------

tinyrexxParser::TestContext::TestContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tinyrexxParser::A_exprContext *> tinyrexxParser::TestContext::a_expr() {
  return getRuleContexts<tinyrexxParser::A_exprContext>();
}

tinyrexxParser::A_exprContext* tinyrexxParser::TestContext::a_expr(size_t i) {
  return getRuleContext<tinyrexxParser::A_exprContext>(i);
}

tinyrexxParser::R_opContext* tinyrexxParser::TestContext::r_op() {
  return getRuleContext<tinyrexxParser::R_opContext>(0);
}


size_t tinyrexxParser::TestContext::getRuleIndex() const {
  return tinyrexxParser::RuleTest;
}

void tinyrexxParser::TestContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTest(this);
}

void tinyrexxParser::TestContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTest(this);
}

tinyrexxParser::TestContext* tinyrexxParser::test() {
  TestContext *_localctx = _tracker.createInstance<TestContext>(_ctx, getState());
  enterRule(_localctx, 12, tinyrexxParser::RuleTest);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(58);
    a_expr(0);
    setState(59);
    r_op();
    setState(60);
    a_expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- A_exprContext ------------------------------------------------------------------

tinyrexxParser::A_exprContext::A_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tinyrexxParser::A_exprContext::ID() {
  return getToken(tinyrexxParser::ID, 0);
}

tree::TerminalNode* tinyrexxParser::A_exprContext::NUMBER() {
  return getToken(tinyrexxParser::NUMBER, 0);
}

std::vector<tinyrexxParser::A_exprContext *> tinyrexxParser::A_exprContext::a_expr() {
  return getRuleContexts<tinyrexxParser::A_exprContext>();
}

tinyrexxParser::A_exprContext* tinyrexxParser::A_exprContext::a_expr(size_t i) {
  return getRuleContext<tinyrexxParser::A_exprContext>(i);
}

tree::TerminalNode* tinyrexxParser::A_exprContext::MINUS() {
  return getToken(tinyrexxParser::MINUS, 0);
}

tinyrexxParser::A_opContext* tinyrexxParser::A_exprContext::a_op() {
  return getRuleContext<tinyrexxParser::A_opContext>(0);
}


size_t tinyrexxParser::A_exprContext::getRuleIndex() const {
  return tinyrexxParser::RuleA_expr;
}

void tinyrexxParser::A_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterA_expr(this);
}

void tinyrexxParser::A_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitA_expr(this);
}


tinyrexxParser::A_exprContext* tinyrexxParser::a_expr() {
   return a_expr(0);
}

tinyrexxParser::A_exprContext* tinyrexxParser::a_expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  tinyrexxParser::A_exprContext *_localctx = _tracker.createInstance<A_exprContext>(_ctx, parentState);
  tinyrexxParser::A_exprContext *previousContext = _localctx;
  size_t startState = 14;
  enterRecursionRule(_localctx, 14, tinyrexxParser::RuleA_expr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(71);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case tinyrexxParser::ID: {
        setState(63);
        match(tinyrexxParser::ID);
        break;
      }

      case tinyrexxParser::NUMBER: {
        setState(64);
        match(tinyrexxParser::NUMBER);
        break;
      }

      case tinyrexxParser::T__6: {
        setState(65);
        match(tinyrexxParser::T__6);
        setState(66);
        a_expr(0);
        setState(67);
        match(tinyrexxParser::T__7);
        break;
      }

      case tinyrexxParser::MINUS: {
        setState(69);
        match(tinyrexxParser::MINUS);
        setState(70);
        a_expr(1);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(79);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<A_exprContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleA_expr);
        setState(73);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(74);
        a_op();
        setState(75);
        a_expr(3); 
      }
      setState(81);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- A_opContext ------------------------------------------------------------------

tinyrexxParser::A_opContext::A_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tinyrexxParser::A_opContext::MINUS() {
  return getToken(tinyrexxParser::MINUS, 0);
}

tree::TerminalNode* tinyrexxParser::A_opContext::PLUS() {
  return getToken(tinyrexxParser::PLUS, 0);
}

tree::TerminalNode* tinyrexxParser::A_opContext::MUL() {
  return getToken(tinyrexxParser::MUL, 0);
}

tree::TerminalNode* tinyrexxParser::A_opContext::DIV() {
  return getToken(tinyrexxParser::DIV, 0);
}


size_t tinyrexxParser::A_opContext::getRuleIndex() const {
  return tinyrexxParser::RuleA_op;
}

void tinyrexxParser::A_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterA_op(this);
}

void tinyrexxParser::A_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitA_op(this);
}

tinyrexxParser::A_opContext* tinyrexxParser::a_op() {
  A_opContext *_localctx = _tracker.createInstance<A_opContext>(_ctx, getState());
  enterRule(_localctx, 16, tinyrexxParser::RuleA_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << tinyrexxParser::MINUS)
      | (1ULL << tinyrexxParser::PLUS)
      | (1ULL << tinyrexxParser::MUL)
      | (1ULL << tinyrexxParser::DIV))) != 0))) {
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

//----------------- R_opContext ------------------------------------------------------------------

tinyrexxParser::R_opContext::R_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tinyrexxParser::R_opContext::EQUAL() {
  return getToken(tinyrexxParser::EQUAL, 0);
}

tree::TerminalNode* tinyrexxParser::R_opContext::LT() {
  return getToken(tinyrexxParser::LT, 0);
}

tree::TerminalNode* tinyrexxParser::R_opContext::LEQ() {
  return getToken(tinyrexxParser::LEQ, 0);
}

tree::TerminalNode* tinyrexxParser::R_opContext::GT() {
  return getToken(tinyrexxParser::GT, 0);
}

tree::TerminalNode* tinyrexxParser::R_opContext::GEQ() {
  return getToken(tinyrexxParser::GEQ, 0);
}


size_t tinyrexxParser::R_opContext::getRuleIndex() const {
  return tinyrexxParser::RuleR_op;
}

void tinyrexxParser::R_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterR_op(this);
}

void tinyrexxParser::R_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitR_op(this);
}

tinyrexxParser::R_opContext* tinyrexxParser::r_op() {
  R_opContext *_localctx = _tracker.createInstance<R_opContext>(_ctx, getState());
  enterRule(_localctx, 18, tinyrexxParser::RuleR_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(84);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << tinyrexxParser::EQUAL)
      | (1ULL << tinyrexxParser::LT)
      | (1ULL << tinyrexxParser::LEQ)
      | (1ULL << tinyrexxParser::GT)
      | (1ULL << tinyrexxParser::GEQ))) != 0))) {
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

//----------------- ForeachContext ------------------------------------------------------------------

tinyrexxParser::ForeachContext::ForeachContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tinyrexxParser::RangeContext* tinyrexxParser::ForeachContext::range() {
  return getRuleContext<tinyrexxParser::RangeContext>(0);
}

std::vector<tinyrexxParser::StatementContext *> tinyrexxParser::ForeachContext::statement() {
  return getRuleContexts<tinyrexxParser::StatementContext>();
}

tinyrexxParser::StatementContext* tinyrexxParser::ForeachContext::statement(size_t i) {
  return getRuleContext<tinyrexxParser::StatementContext>(i);
}


size_t tinyrexxParser::ForeachContext::getRuleIndex() const {
  return tinyrexxParser::RuleForeach;
}

void tinyrexxParser::ForeachContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForeach(this);
}

void tinyrexxParser::ForeachContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForeach(this);
}

tinyrexxParser::ForeachContext* tinyrexxParser::foreach() {
  ForeachContext *_localctx = _tracker.createInstance<ForeachContext>(_ctx, getState());
  enterRule(_localctx, 20, tinyrexxParser::RuleForeach);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    match(tinyrexxParser::T__3);
    setState(87);
    range();
    setState(89); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(88);
      statement();
      setState(91); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << tinyrexxParser::T__1)
      | (1ULL << tinyrexxParser::T__2)
      | (1ULL << tinyrexxParser::T__3)
      | (1ULL << tinyrexxParser::ID))) != 0));
    setState(93);
    match(tinyrexxParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RangeContext ------------------------------------------------------------------

tinyrexxParser::RangeContext::RangeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tinyrexxParser::RangeContext::ID() {
  return getToken(tinyrexxParser::ID, 0);
}

std::vector<tinyrexxParser::A_exprContext *> tinyrexxParser::RangeContext::a_expr() {
  return getRuleContexts<tinyrexxParser::A_exprContext>();
}

tinyrexxParser::A_exprContext* tinyrexxParser::RangeContext::a_expr(size_t i) {
  return getRuleContext<tinyrexxParser::A_exprContext>(i);
}

tinyrexxParser::TtoContext* tinyrexxParser::RangeContext::tto() {
  return getRuleContext<tinyrexxParser::TtoContext>(0);
}


size_t tinyrexxParser::RangeContext::getRuleIndex() const {
  return tinyrexxParser::RuleRange;
}

void tinyrexxParser::RangeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRange(this);
}

void tinyrexxParser::RangeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRange(this);
}

tinyrexxParser::RangeContext* tinyrexxParser::range() {
  RangeContext *_localctx = _tracker.createInstance<RangeContext>(_ctx, getState());
  enterRule(_localctx, 22, tinyrexxParser::RuleRange);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(95);
    match(tinyrexxParser::ID);
    setState(96);
    match(tinyrexxParser::T__0);
    setState(97);
    a_expr(0);
    setState(98);
    tto();
    setState(99);
    a_expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TtoContext ------------------------------------------------------------------

tinyrexxParser::TtoContext::TtoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t tinyrexxParser::TtoContext::getRuleIndex() const {
  return tinyrexxParser::RuleTto;
}

void tinyrexxParser::TtoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTto(this);
}

void tinyrexxParser::TtoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tinyrexxListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTto(this);
}

tinyrexxParser::TtoContext* tinyrexxParser::tto() {
  TtoContext *_localctx = _tracker.createInstance<TtoContext>(_ctx, getState());
  enterRule(_localctx, 24, tinyrexxParser::RuleTto);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(101);
    match(tinyrexxParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool tinyrexxParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 7: return a_exprSempred(dynamic_cast<A_exprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool tinyrexxParser::a_exprSempred(A_exprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> tinyrexxParser::_decisionToDFA;
atn::PredictionContextCache tinyrexxParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN tinyrexxParser::_atn;
std::vector<uint16_t> tinyrexxParser::_serializedATN;

std::vector<std::string> tinyrexxParser::_ruleNames = {
  "program", "statement", "assign", "print", "input", "w_loop", "test", 
  "a_expr", "a_op", "r_op", "foreach", "range", "tto"
};

std::vector<std::string> tinyrexxParser::_literalNames = {
  "", "'='", "'say'", "'pull'", "'do'", "'while'", "'end'", "'('", "')'", 
  "'to'", "'-'", "'+'", "'*'", "'/'", "'=='", "'<'", "'<='", "'>'", "'>='"
};

std::vector<std::string> tinyrexxParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "MINUS", "PLUS", "MUL", "DIV", 
  "EQUAL", "LT", "LEQ", "GT", "GEQ", "ID", "NUMBER", "WS", "ErrorChar"
};

dfa::Vocabulary tinyrexxParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> tinyrexxParser::_tokenNames;

tinyrexxParser::Initializer::Initializer() {
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
    0x3, 0x18, 0x6a, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x3, 
    0x2, 0x6, 0x2, 0x1e, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x1f, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x27, 0xa, 0x3, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x6, 0x7, 
    0x37, 0xa, 0x7, 0xd, 0x7, 0xe, 0x7, 0x38, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x4a, 0xa, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x50, 0xa, 0x9, 
    0xc, 0x9, 0xe, 0x9, 0x53, 0xb, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x6, 0xc, 0x5c, 0xa, 0xc, 0xd, 0xc, 
    0xe, 0xc, 0x5d, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x2, 0x3, 0x10, 
    0xf, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 
    0x1a, 0x2, 0x4, 0x3, 0x2, 0xc, 0xf, 0x3, 0x2, 0x10, 0x14, 0x2, 0x67, 
    0x2, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x4, 0x26, 0x3, 0x2, 0x2, 0x2, 0x6, 0x28, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x2c, 0x3, 0x2, 0x2, 0x2, 0xa, 0x2f, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x32, 0x3, 0x2, 0x2, 0x2, 0xe, 0x3c, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x49, 0x3, 0x2, 0x2, 0x2, 0x12, 0x54, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x56, 0x3, 0x2, 0x2, 0x2, 0x16, 0x58, 0x3, 0x2, 0x2, 0x2, 0x18, 0x61, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0x67, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1e, 0x5, 
    0x4, 0x3, 0x2, 0x1d, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1f, 0x3, 0x2, 
    0x2, 0x2, 0x1f, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x20, 0x3, 0x2, 0x2, 
    0x2, 0x20, 0x3, 0x3, 0x2, 0x2, 0x2, 0x21, 0x27, 0x5, 0x6, 0x4, 0x2, 
    0x22, 0x27, 0x5, 0x8, 0x5, 0x2, 0x23, 0x27, 0x5, 0xa, 0x6, 0x2, 0x24, 
    0x27, 0x5, 0xc, 0x7, 0x2, 0x25, 0x27, 0x5, 0x16, 0xc, 0x2, 0x26, 0x21, 
    0x3, 0x2, 0x2, 0x2, 0x26, 0x22, 0x3, 0x2, 0x2, 0x2, 0x26, 0x23, 0x3, 
    0x2, 0x2, 0x2, 0x26, 0x24, 0x3, 0x2, 0x2, 0x2, 0x26, 0x25, 0x3, 0x2, 
    0x2, 0x2, 0x27, 0x5, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x7, 0x15, 0x2, 
    0x2, 0x29, 0x2a, 0x7, 0x3, 0x2, 0x2, 0x2a, 0x2b, 0x5, 0x10, 0x9, 0x2, 
    0x2b, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 0x7, 0x4, 0x2, 0x2, 0x2d, 
    0x2e, 0x5, 0x10, 0x9, 0x2, 0x2e, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 
    0x7, 0x5, 0x2, 0x2, 0x30, 0x31, 0x7, 0x15, 0x2, 0x2, 0x31, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0x32, 0x33, 0x7, 0x6, 0x2, 0x2, 0x33, 0x34, 0x7, 0x7, 
    0x2, 0x2, 0x34, 0x36, 0x5, 0xe, 0x8, 0x2, 0x35, 0x37, 0x5, 0x4, 0x3, 
    0x2, 0x36, 0x35, 0x3, 0x2, 0x2, 0x2, 0x37, 0x38, 0x3, 0x2, 0x2, 0x2, 
    0x38, 0x36, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x3, 0x2, 0x2, 0x2, 0x39, 
    0x3a, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x7, 0x8, 0x2, 0x2, 0x3b, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 0x5, 0x10, 0x9, 0x2, 0x3d, 0x3e, 0x5, 
    0x14, 0xb, 0x2, 0x3e, 0x3f, 0x5, 0x10, 0x9, 0x2, 0x3f, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0x40, 0x41, 0x8, 0x9, 0x1, 0x2, 0x41, 0x4a, 0x7, 0x15, 0x2, 
    0x2, 0x42, 0x4a, 0x7, 0x16, 0x2, 0x2, 0x43, 0x44, 0x7, 0x9, 0x2, 0x2, 
    0x44, 0x45, 0x5, 0x10, 0x9, 0x2, 0x45, 0x46, 0x7, 0xa, 0x2, 0x2, 0x46, 
    0x4a, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 0x7, 0xc, 0x2, 0x2, 0x48, 0x4a, 
    0x5, 0x10, 0x9, 0x3, 0x49, 0x40, 0x3, 0x2, 0x2, 0x2, 0x49, 0x42, 0x3, 
    0x2, 0x2, 0x2, 0x49, 0x43, 0x3, 0x2, 0x2, 0x2, 0x49, 0x47, 0x3, 0x2, 
    0x2, 0x2, 0x4a, 0x51, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0xc, 0x4, 0x2, 
    0x2, 0x4c, 0x4d, 0x5, 0x12, 0xa, 0x2, 0x4d, 0x4e, 0x5, 0x10, 0x9, 0x5, 
    0x4e, 0x50, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x50, 
    0x53, 0x3, 0x2, 0x2, 0x2, 0x51, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 
    0x3, 0x2, 0x2, 0x2, 0x52, 0x11, 0x3, 0x2, 0x2, 0x2, 0x53, 0x51, 0x3, 
    0x2, 0x2, 0x2, 0x54, 0x55, 0x9, 0x2, 0x2, 0x2, 0x55, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0x56, 0x57, 0x9, 0x3, 0x2, 0x2, 0x57, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x58, 0x59, 0x7, 0x6, 0x2, 0x2, 0x59, 0x5b, 0x5, 0x18, 0xd, 0x2, 
    0x5a, 0x5c, 0x5, 0x4, 0x3, 0x2, 0x5b, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5c, 
    0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 
    0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0x7, 
    0x8, 0x2, 0x2, 0x60, 0x17, 0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 0x7, 0x15, 
    0x2, 0x2, 0x62, 0x63, 0x7, 0x3, 0x2, 0x2, 0x63, 0x64, 0x5, 0x10, 0x9, 
    0x2, 0x64, 0x65, 0x5, 0x1a, 0xe, 0x2, 0x65, 0x66, 0x5, 0x10, 0x9, 0x2, 
    0x66, 0x19, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x7, 0xb, 0x2, 0x2, 0x68, 
    0x1b, 0x3, 0x2, 0x2, 0x2, 0x8, 0x1f, 0x26, 0x38, 0x49, 0x51, 0x5d, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

tinyrexxParser::Initializer tinyrexxParser::_init;
