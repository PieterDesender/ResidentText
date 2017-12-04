
// Generated from interactions.g4 by ANTLR 4.6


#include "interactionsListener.h"
#include "interactionsVisitor.h"

#include "interactionsParser.h"


using namespace antlrcpp;
using namespace antlr4;

interactionsParser::interactionsParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

interactionsParser::~interactionsParser() {
  delete _interpreter;
}

std::string interactionsParser::getGrammarFileName() const {
  return "interactions.g4";
}

const std::vector<std::string>& interactionsParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& interactionsParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- InteractionsContext ------------------------------------------------------------------

interactionsParser::InteractionsContext::InteractionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

interactionsParser::UsekeyContext* interactionsParser::InteractionsContext::usekey() {
  return getRuleContext<interactionsParser::UsekeyContext>(0);
}

interactionsParser::MovetoContext* interactionsParser::InteractionsContext::moveto() {
  return getRuleContext<interactionsParser::MovetoContext>(0);
}

interactionsParser::LookContext* interactionsParser::InteractionsContext::look() {
  return getRuleContext<interactionsParser::LookContext>(0);
}

interactionsParser::SearchobjectContext* interactionsParser::InteractionsContext::searchobject() {
  return getRuleContext<interactionsParser::SearchobjectContext>(0);
}

interactionsParser::ExamineobjectContext* interactionsParser::InteractionsContext::examineobject() {
  return getRuleContext<interactionsParser::ExamineobjectContext>(0);
}

interactionsParser::ExaminedoorContext* interactionsParser::InteractionsContext::examinedoor() {
  return getRuleContext<interactionsParser::ExaminedoorContext>(0);
}

interactionsParser::PickupitemContext* interactionsParser::InteractionsContext::pickupitem() {
  return getRuleContext<interactionsParser::PickupitemContext>(0);
}

interactionsParser::UseitemContext* interactionsParser::InteractionsContext::useitem() {
  return getRuleContext<interactionsParser::UseitemContext>(0);
}

interactionsParser::DropitemContext* interactionsParser::InteractionsContext::dropitem() {
  return getRuleContext<interactionsParser::DropitemContext>(0);
}

interactionsParser::InventoryshowContext* interactionsParser::InteractionsContext::inventoryshow() {
  return getRuleContext<interactionsParser::InventoryshowContext>(0);
}

interactionsParser::StatusselfContext* interactionsParser::InteractionsContext::statusself() {
  return getRuleContext<interactionsParser::StatusselfContext>(0);
}

interactionsParser::InventoryexamineContext* interactionsParser::InteractionsContext::inventoryexamine() {
  return getRuleContext<interactionsParser::InventoryexamineContext>(0);
}


size_t interactionsParser::InteractionsContext::getRuleIndex() const {
  return interactionsParser::RuleInteractions;
}

void interactionsParser::InteractionsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<interactionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInteractions(this);
}

void interactionsParser::InteractionsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<interactionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInteractions(this);
}


antlrcpp::Any interactionsParser::InteractionsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<interactionsVisitor*>(visitor))
    return parserVisitor->visitInteractions(this);
  else
    return visitor->visitChildren(this);
}

interactionsParser::InteractionsContext* interactionsParser::interactions() {
  InteractionsContext *_localctx = _tracker.createInstance<InteractionsContext>(_ctx, getState());
  enterRule(_localctx, 0, interactionsParser::RuleInteractions);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(38);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(26);
      usekey();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(27);
      moveto();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(28);
      look();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(29);
      searchobject();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(30);
      examineobject();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(31);
      examinedoor();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(32);
      pickupitem();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(33);
      useitem();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(34);
      dropitem();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(35);
      inventoryshow();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(36);
      statusself();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(37);
      inventoryexamine();
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

//----------------- MovetoContext ------------------------------------------------------------------

interactionsParser::MovetoContext::MovetoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* interactionsParser::MovetoContext::MOVEINTERACTION() {
  return getToken(interactionsParser::MOVEINTERACTION, 0);
}

tree::TerminalNode* interactionsParser::MovetoContext::SPACE() {
  return getToken(interactionsParser::SPACE, 0);
}

tree::TerminalNode* interactionsParser::MovetoContext::STRING() {
  return getToken(interactionsParser::STRING, 0);
}


size_t interactionsParser::MovetoContext::getRuleIndex() const {
  return interactionsParser::RuleMoveto;
}

void interactionsParser::MovetoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<interactionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMoveto(this);
}

void interactionsParser::MovetoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<interactionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMoveto(this);
}


antlrcpp::Any interactionsParser::MovetoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<interactionsVisitor*>(visitor))
    return parserVisitor->visitMoveto(this);
  else
    return visitor->visitChildren(this);
}

interactionsParser::MovetoContext* interactionsParser::moveto() {
  MovetoContext *_localctx = _tracker.createInstance<MovetoContext>(_ctx, getState());
  enterRule(_localctx, 2, interactionsParser::RuleMoveto);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(40);
    match(interactionsParser::MOVEINTERACTION);
    setState(41);
    match(interactionsParser::SPACE);
    setState(42);
    match(interactionsParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LookContext ------------------------------------------------------------------

interactionsParser::LookContext::LookContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* interactionsParser::LookContext::LOOKINTERACTION() {
  return getToken(interactionsParser::LOOKINTERACTION, 0);
}


size_t interactionsParser::LookContext::getRuleIndex() const {
  return interactionsParser::RuleLook;
}

void interactionsParser::LookContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<interactionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLook(this);
}

void interactionsParser::LookContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<interactionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLook(this);
}


antlrcpp::Any interactionsParser::LookContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<interactionsVisitor*>(visitor))
    return parserVisitor->visitLook(this);
  else
    return visitor->visitChildren(this);
}

interactionsParser::LookContext* interactionsParser::look() {
  LookContext *_localctx = _tracker.createInstance<LookContext>(_ctx, getState());
  enterRule(_localctx, 4, interactionsParser::RuleLook);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
    match(interactionsParser::LOOKINTERACTION);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExamineobjectContext ------------------------------------------------------------------

interactionsParser::ExamineobjectContext::ExamineobjectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* interactionsParser::ExamineobjectContext::EXAMINEINTERACTION() {
  return getToken(interactionsParser::EXAMINEINTERACTION, 0);
}

tree::TerminalNode* interactionsParser::ExamineobjectContext::SPACE() {
  return getToken(interactionsParser::SPACE, 0);
}

tree::TerminalNode* interactionsParser::ExamineobjectContext::STRING() {
  return getToken(interactionsParser::STRING, 0);
}


size_t interactionsParser::ExamineobjectContext::getRuleIndex() const {
  return interactionsParser::RuleExamineobject;
}

void interactionsParser::ExamineobjectContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<interactionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExamineobject(this);
}

void interactionsParser::ExamineobjectContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<interactionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExamineobject(this);
}


antlrcpp::Any interactionsParser::ExamineobjectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<interactionsVisitor*>(visitor))
    return parserVisitor->visitExamineobject(this);
  else
    return visitor->visitChildren(this);
}

interactionsParser::ExamineobjectContext* interactionsParser::examineobject() {
  ExamineobjectContext *_localctx = _tracker.createInstance<ExamineobjectContext>(_ctx, getState());
  enterRule(_localctx, 6, interactionsParser::RuleExamineobject);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(46);
    match(interactionsParser::EXAMINEINTERACTION);
    setState(47);
    match(interactionsParser::SPACE);
    setState(48);
    match(interactionsParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExaminedoorContext ------------------------------------------------------------------

interactionsParser::ExaminedoorContext::ExaminedoorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* interactionsParser::ExaminedoorContext::EXAMINEINTERACTION() {
  return getToken(interactionsParser::EXAMINEINTERACTION, 0);
}

std::vector<tree::TerminalNode *> interactionsParser::ExaminedoorContext::SPACE() {
  return getTokens(interactionsParser::SPACE);
}

tree::TerminalNode* interactionsParser::ExaminedoorContext::SPACE(size_t i) {
  return getToken(interactionsParser::SPACE, i);
}

tree::TerminalNode* interactionsParser::ExaminedoorContext::DOOR() {
  return getToken(interactionsParser::DOOR, 0);
}

tree::TerminalNode* interactionsParser::ExaminedoorContext::STRING() {
  return getToken(interactionsParser::STRING, 0);
}


size_t interactionsParser::ExaminedoorContext::getRuleIndex() const {
  return interactionsParser::RuleExaminedoor;
}

void interactionsParser::ExaminedoorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<interactionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExaminedoor(this);
}

void interactionsParser::ExaminedoorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<interactionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExaminedoor(this);
}


antlrcpp::Any interactionsParser::ExaminedoorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<interactionsVisitor*>(visitor))
    return parserVisitor->visitExaminedoor(this);
  else
    return visitor->visitChildren(this);
}

interactionsParser::ExaminedoorContext* interactionsParser::examinedoor() {
  ExaminedoorContext *_localctx = _tracker.createInstance<ExaminedoorContext>(_ctx, getState());
  enterRule(_localctx, 8, interactionsParser::RuleExaminedoor);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    match(interactionsParser::EXAMINEINTERACTION);
    setState(51);
    match(interactionsParser::SPACE);
    setState(52);
    match(interactionsParser::DOOR);
    setState(53);
    match(interactionsParser::SPACE);
    setState(54);
    match(interactionsParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SearchobjectContext ------------------------------------------------------------------

interactionsParser::SearchobjectContext::SearchobjectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* interactionsParser::SearchobjectContext::SEARCHINTERACTION() {
  return getToken(interactionsParser::SEARCHINTERACTION, 0);
}

tree::TerminalNode* interactionsParser::SearchobjectContext::SPACE() {
  return getToken(interactionsParser::SPACE, 0);
}

tree::TerminalNode* interactionsParser::SearchobjectContext::STRING() {
  return getToken(interactionsParser::STRING, 0);
}


size_t interactionsParser::SearchobjectContext::getRuleIndex() const {
  return interactionsParser::RuleSearchobject;
}

void interactionsParser::SearchobjectContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<interactionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSearchobject(this);
}

void interactionsParser::SearchobjectContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<interactionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSearchobject(this);
}


antlrcpp::Any interactionsParser::SearchobjectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<interactionsVisitor*>(visitor))
    return parserVisitor->visitSearchobject(this);
  else
    return visitor->visitChildren(this);
}

interactionsParser::SearchobjectContext* interactionsParser::searchobject() {
  SearchobjectContext *_localctx = _tracker.createInstance<SearchobjectContext>(_ctx, getState());
  enterRule(_localctx, 10, interactionsParser::RuleSearchobject);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56);
    match(interactionsParser::SEARCHINTERACTION);
    setState(57);
    match(interactionsParser::SPACE);
    setState(58);
    match(interactionsParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InventoryshowContext ------------------------------------------------------------------

interactionsParser::InventoryshowContext::InventoryshowContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* interactionsParser::InventoryshowContext::INVENTORYINTERACTION() {
  return getToken(interactionsParser::INVENTORYINTERACTION, 0);
}


size_t interactionsParser::InventoryshowContext::getRuleIndex() const {
  return interactionsParser::RuleInventoryshow;
}

void interactionsParser::InventoryshowContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<interactionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInventoryshow(this);
}

void interactionsParser::InventoryshowContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<interactionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInventoryshow(this);
}


antlrcpp::Any interactionsParser::InventoryshowContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<interactionsVisitor*>(visitor))
    return parserVisitor->visitInventoryshow(this);
  else
    return visitor->visitChildren(this);
}

interactionsParser::InventoryshowContext* interactionsParser::inventoryshow() {
  InventoryshowContext *_localctx = _tracker.createInstance<InventoryshowContext>(_ctx, getState());
  enterRule(_localctx, 12, interactionsParser::RuleInventoryshow);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(60);
    match(interactionsParser::INVENTORYINTERACTION);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PickupitemContext ------------------------------------------------------------------

interactionsParser::PickupitemContext::PickupitemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* interactionsParser::PickupitemContext::PICKUPINTERACTION() {
  return getToken(interactionsParser::PICKUPINTERACTION, 0);
}

tree::TerminalNode* interactionsParser::PickupitemContext::SPACE() {
  return getToken(interactionsParser::SPACE, 0);
}

tree::TerminalNode* interactionsParser::PickupitemContext::STRING() {
  return getToken(interactionsParser::STRING, 0);
}


size_t interactionsParser::PickupitemContext::getRuleIndex() const {
  return interactionsParser::RulePickupitem;
}

void interactionsParser::PickupitemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<interactionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPickupitem(this);
}

void interactionsParser::PickupitemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<interactionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPickupitem(this);
}


antlrcpp::Any interactionsParser::PickupitemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<interactionsVisitor*>(visitor))
    return parserVisitor->visitPickupitem(this);
  else
    return visitor->visitChildren(this);
}

interactionsParser::PickupitemContext* interactionsParser::pickupitem() {
  PickupitemContext *_localctx = _tracker.createInstance<PickupitemContext>(_ctx, getState());
  enterRule(_localctx, 14, interactionsParser::RulePickupitem);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(62);
    match(interactionsParser::PICKUPINTERACTION);
    setState(63);
    match(interactionsParser::SPACE);
    setState(64);
    match(interactionsParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DropitemContext ------------------------------------------------------------------

interactionsParser::DropitemContext::DropitemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* interactionsParser::DropitemContext::DROPITEMINTERACTION() {
  return getToken(interactionsParser::DROPITEMINTERACTION, 0);
}

tree::TerminalNode* interactionsParser::DropitemContext::SPACE() {
  return getToken(interactionsParser::SPACE, 0);
}

tree::TerminalNode* interactionsParser::DropitemContext::STRING() {
  return getToken(interactionsParser::STRING, 0);
}


size_t interactionsParser::DropitemContext::getRuleIndex() const {
  return interactionsParser::RuleDropitem;
}

void interactionsParser::DropitemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<interactionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDropitem(this);
}

void interactionsParser::DropitemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<interactionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDropitem(this);
}


antlrcpp::Any interactionsParser::DropitemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<interactionsVisitor*>(visitor))
    return parserVisitor->visitDropitem(this);
  else
    return visitor->visitChildren(this);
}

interactionsParser::DropitemContext* interactionsParser::dropitem() {
  DropitemContext *_localctx = _tracker.createInstance<DropitemContext>(_ctx, getState());
  enterRule(_localctx, 16, interactionsParser::RuleDropitem);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(66);
    match(interactionsParser::DROPITEMINTERACTION);
    setState(67);
    match(interactionsParser::SPACE);
    setState(68);
    match(interactionsParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UseitemContext ------------------------------------------------------------------

interactionsParser::UseitemContext::UseitemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* interactionsParser::UseitemContext::USEITEMINTERACTION() {
  return getToken(interactionsParser::USEITEMINTERACTION, 0);
}

tree::TerminalNode* interactionsParser::UseitemContext::SPACE() {
  return getToken(interactionsParser::SPACE, 0);
}

tree::TerminalNode* interactionsParser::UseitemContext::STRING() {
  return getToken(interactionsParser::STRING, 0);
}


size_t interactionsParser::UseitemContext::getRuleIndex() const {
  return interactionsParser::RuleUseitem;
}

void interactionsParser::UseitemContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<interactionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUseitem(this);
}

void interactionsParser::UseitemContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<interactionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUseitem(this);
}


antlrcpp::Any interactionsParser::UseitemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<interactionsVisitor*>(visitor))
    return parserVisitor->visitUseitem(this);
  else
    return visitor->visitChildren(this);
}

interactionsParser::UseitemContext* interactionsParser::useitem() {
  UseitemContext *_localctx = _tracker.createInstance<UseitemContext>(_ctx, getState());
  enterRule(_localctx, 18, interactionsParser::RuleUseitem);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
    match(interactionsParser::USEITEMINTERACTION);
    setState(71);
    match(interactionsParser::SPACE);
    setState(72);
    match(interactionsParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatusselfContext ------------------------------------------------------------------

interactionsParser::StatusselfContext::StatusselfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* interactionsParser::StatusselfContext::STATUS() {
  return getToken(interactionsParser::STATUS, 0);
}


size_t interactionsParser::StatusselfContext::getRuleIndex() const {
  return interactionsParser::RuleStatusself;
}

void interactionsParser::StatusselfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<interactionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatusself(this);
}

void interactionsParser::StatusselfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<interactionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatusself(this);
}


antlrcpp::Any interactionsParser::StatusselfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<interactionsVisitor*>(visitor))
    return parserVisitor->visitStatusself(this);
  else
    return visitor->visitChildren(this);
}

interactionsParser::StatusselfContext* interactionsParser::statusself() {
  StatusselfContext *_localctx = _tracker.createInstance<StatusselfContext>(_ctx, getState());
  enterRule(_localctx, 20, interactionsParser::RuleStatusself);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    match(interactionsParser::STATUS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InventoryexamineContext ------------------------------------------------------------------

interactionsParser::InventoryexamineContext::InventoryexamineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* interactionsParser::InventoryexamineContext::INVENTORYINTERACTION() {
  return getToken(interactionsParser::INVENTORYINTERACTION, 0);
}

std::vector<tree::TerminalNode *> interactionsParser::InventoryexamineContext::SPACE() {
  return getTokens(interactionsParser::SPACE);
}

tree::TerminalNode* interactionsParser::InventoryexamineContext::SPACE(size_t i) {
  return getToken(interactionsParser::SPACE, i);
}

tree::TerminalNode* interactionsParser::InventoryexamineContext::EXAMINEINTERACTION() {
  return getToken(interactionsParser::EXAMINEINTERACTION, 0);
}

tree::TerminalNode* interactionsParser::InventoryexamineContext::STRING() {
  return getToken(interactionsParser::STRING, 0);
}


size_t interactionsParser::InventoryexamineContext::getRuleIndex() const {
  return interactionsParser::RuleInventoryexamine;
}

void interactionsParser::InventoryexamineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<interactionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInventoryexamine(this);
}

void interactionsParser::InventoryexamineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<interactionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInventoryexamine(this);
}


antlrcpp::Any interactionsParser::InventoryexamineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<interactionsVisitor*>(visitor))
    return parserVisitor->visitInventoryexamine(this);
  else
    return visitor->visitChildren(this);
}

interactionsParser::InventoryexamineContext* interactionsParser::inventoryexamine() {
  InventoryexamineContext *_localctx = _tracker.createInstance<InventoryexamineContext>(_ctx, getState());
  enterRule(_localctx, 22, interactionsParser::RuleInventoryexamine);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
    match(interactionsParser::INVENTORYINTERACTION);
    setState(77);
    match(interactionsParser::SPACE);
    setState(78);
    match(interactionsParser::EXAMINEINTERACTION);
    setState(79);
    match(interactionsParser::SPACE);
    setState(80);
    match(interactionsParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UsekeyContext ------------------------------------------------------------------

interactionsParser::UsekeyContext::UsekeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* interactionsParser::UsekeyContext::USEKEYINTERACTION() {
  return getToken(interactionsParser::USEKEYINTERACTION, 0);
}

tree::TerminalNode* interactionsParser::UsekeyContext::SPACE() {
  return getToken(interactionsParser::SPACE, 0);
}

tree::TerminalNode* interactionsParser::UsekeyContext::STRING() {
  return getToken(interactionsParser::STRING, 0);
}


size_t interactionsParser::UsekeyContext::getRuleIndex() const {
  return interactionsParser::RuleUsekey;
}

void interactionsParser::UsekeyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<interactionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUsekey(this);
}

void interactionsParser::UsekeyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<interactionsListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUsekey(this);
}


antlrcpp::Any interactionsParser::UsekeyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<interactionsVisitor*>(visitor))
    return parserVisitor->visitUsekey(this);
  else
    return visitor->visitChildren(this);
}

interactionsParser::UsekeyContext* interactionsParser::usekey() {
  UsekeyContext *_localctx = _tracker.createInstance<UsekeyContext>(_ctx, getState());
  enterRule(_localctx, 24, interactionsParser::RuleUsekey);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    match(interactionsParser::USEKEYINTERACTION);
    setState(83);
    match(interactionsParser::SPACE);
    setState(84);
    match(interactionsParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> interactionsParser::_decisionToDFA;
atn::PredictionContextCache interactionsParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN interactionsParser::_atn;
std::vector<uint16_t> interactionsParser::_serializedATN;

std::vector<std::string> interactionsParser::_ruleNames = {
  "interactions", "moveto", "look", "examineobject", "examinedoor", "searchobject", 
  "inventoryshow", "pickupitem", "dropitem", "useitem", "statusself", "inventoryexamine", 
  "usekey"
};

std::vector<std::string> interactionsParser::_literalNames = {
  "", "", "", "", "", "", "", "", "", "", "'on'", "", "", "' '"
};

std::vector<std::string> interactionsParser::_symbolicNames = {
  "", "MOVEINTERACTION", "LOOKINTERACTION", "EXAMINEINTERACTION", "SEARCHINTERACTION", 
  "DOOR", "PICKUPINTERACTION", "USEITEMINTERACTION", "DROPITEMINTERACTION", 
  "INVENTORYINTERACTION", "ON", "STATUS", "USEKEYINTERACTION", "SPACE", 
  "STRING", "INT"
};

dfa::Vocabulary interactionsParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> interactionsParser::_tokenNames;

interactionsParser::Initializer::Initializer() {
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
    0x3, 0x430, 0xd6d1, 0x8206, 0xad2d, 0x4417, 0xaef1, 0x8d80, 0xaadd, 
    0x3, 0x11, 0x59, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x29, 0xa, 0x2, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x2, 0x2, 0xf, 0x2, 
    0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x2, 
    0x2, 0x56, 0x2, 0x28, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2a, 0x3, 0x2, 0x2, 
    0x2, 0x6, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x8, 0x30, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0x34, 0x3, 0x2, 0x2, 0x2, 0xc, 0x3a, 0x3, 0x2, 0x2, 0x2, 0xe, 0x3e, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x40, 0x3, 0x2, 0x2, 0x2, 0x12, 0x44, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x48, 0x3, 0x2, 0x2, 0x2, 0x16, 0x4c, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x54, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0x29, 0x5, 0x1a, 0xe, 0x2, 0x1d, 0x29, 0x5, 0x4, 0x3, 0x2, 
    0x1e, 0x29, 0x5, 0x6, 0x4, 0x2, 0x1f, 0x29, 0x5, 0xc, 0x7, 0x2, 0x20, 
    0x29, 0x5, 0x8, 0x5, 0x2, 0x21, 0x29, 0x5, 0xa, 0x6, 0x2, 0x22, 0x29, 
    0x5, 0x10, 0x9, 0x2, 0x23, 0x29, 0x5, 0x14, 0xb, 0x2, 0x24, 0x29, 0x5, 
    0x12, 0xa, 0x2, 0x25, 0x29, 0x5, 0xe, 0x8, 0x2, 0x26, 0x29, 0x5, 0x16, 
    0xc, 0x2, 0x27, 0x29, 0x5, 0x18, 0xd, 0x2, 0x28, 0x1c, 0x3, 0x2, 0x2, 
    0x2, 0x28, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x28, 0x1e, 0x3, 0x2, 0x2, 0x2, 
    0x28, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x28, 0x20, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0x21, 0x3, 0x2, 0x2, 0x2, 0x28, 0x22, 0x3, 0x2, 0x2, 0x2, 0x28, 0x23, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x24, 0x3, 0x2, 0x2, 0x2, 0x28, 0x25, 0x3, 
    0x2, 0x2, 0x2, 0x28, 0x26, 0x3, 0x2, 0x2, 0x2, 0x28, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0x29, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 0x7, 0x3, 0x2, 
    0x2, 0x2b, 0x2c, 0x7, 0xf, 0x2, 0x2, 0x2c, 0x2d, 0x7, 0x10, 0x2, 0x2, 
    0x2d, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 0x7, 0x4, 0x2, 0x2, 0x2f, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 0x7, 0x5, 0x2, 0x2, 0x31, 0x32, 
    0x7, 0xf, 0x2, 0x2, 0x32, 0x33, 0x7, 0x10, 0x2, 0x2, 0x33, 0x9, 0x3, 
    0x2, 0x2, 0x2, 0x34, 0x35, 0x7, 0x5, 0x2, 0x2, 0x35, 0x36, 0x7, 0xf, 
    0x2, 0x2, 0x36, 0x37, 0x7, 0x7, 0x2, 0x2, 0x37, 0x38, 0x7, 0xf, 0x2, 
    0x2, 0x38, 0x39, 0x7, 0x10, 0x2, 0x2, 0x39, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0x3a, 0x3b, 0x7, 0x6, 0x2, 0x2, 0x3b, 0x3c, 0x7, 0xf, 0x2, 0x2, 0x3c, 
    0x3d, 0x7, 0x10, 0x2, 0x2, 0x3d, 0xd, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3f, 
    0x7, 0xb, 0x2, 0x2, 0x3f, 0xf, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 0x7, 
    0x8, 0x2, 0x2, 0x41, 0x42, 0x7, 0xf, 0x2, 0x2, 0x42, 0x43, 0x7, 0x10, 
    0x2, 0x2, 0x43, 0x11, 0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x7, 0xa, 0x2, 
    0x2, 0x45, 0x46, 0x7, 0xf, 0x2, 0x2, 0x46, 0x47, 0x7, 0x10, 0x2, 0x2, 
    0x47, 0x13, 0x3, 0x2, 0x2, 0x2, 0x48, 0x49, 0x7, 0x9, 0x2, 0x2, 0x49, 
    0x4a, 0x7, 0xf, 0x2, 0x2, 0x4a, 0x4b, 0x7, 0x10, 0x2, 0x2, 0x4b, 0x15, 
    0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x7, 0xd, 0x2, 0x2, 0x4d, 0x17, 0x3, 
    0x2, 0x2, 0x2, 0x4e, 0x4f, 0x7, 0xb, 0x2, 0x2, 0x4f, 0x50, 0x7, 0xf, 
    0x2, 0x2, 0x50, 0x51, 0x7, 0x5, 0x2, 0x2, 0x51, 0x52, 0x7, 0xf, 0x2, 
    0x2, 0x52, 0x53, 0x7, 0x10, 0x2, 0x2, 0x53, 0x19, 0x3, 0x2, 0x2, 0x2, 
    0x54, 0x55, 0x7, 0xe, 0x2, 0x2, 0x55, 0x56, 0x7, 0xf, 0x2, 0x2, 0x56, 
    0x57, 0x7, 0x10, 0x2, 0x2, 0x57, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x3, 0x28, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

interactionsParser::Initializer interactionsParser::_init;
