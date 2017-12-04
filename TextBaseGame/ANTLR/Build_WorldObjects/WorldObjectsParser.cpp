// Generated from WorldObjects.g4 by ANTLR 4.6

#include "WorldObjectsListener.h"
#include "WorldObjectsVisitor.h"

#include "WorldObjectsParser.h"

using namespace antlrcpp;
using namespace antlr4;

WorldObjectsParser::WorldObjectsParser(TokenStream *input) : Parser(input) {
	_interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

WorldObjectsParser::~WorldObjectsParser() {
	delete _interpreter;
}

std::string WorldObjectsParser::getGrammarFileName() const {
	return "WorldObjects.g4";
}

const std::vector<std::string>& WorldObjectsParser::getRuleNames() const {
	return _ruleNames;
}

dfa::Vocabulary& WorldObjectsParser::getVocabulary() const {
	return _vocabulary;
}

//----------------- WorldobjectsContext ------------------------------------------------------------------

WorldObjectsParser::WorldobjectsContext::WorldobjectsContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

std::vector<WorldObjectsParser::WorldobjectContext *> WorldObjectsParser::WorldobjectsContext::worldobject() {
	return getRuleContexts<WorldObjectsParser::WorldobjectContext>();
}

WorldObjectsParser::WorldobjectContext* WorldObjectsParser::WorldobjectsContext::worldobject(size_t i) {
	return getRuleContext<WorldObjectsParser::WorldobjectContext>(i);
}

size_t WorldObjectsParser::WorldobjectsContext::getRuleIndex() const {
	return WorldObjectsParser::RuleWorldobjects;
}

void WorldObjectsParser::WorldobjectsContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldObjectsListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterWorldobjects(this);
}

void WorldObjectsParser::WorldobjectsContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldObjectsListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitWorldobjects(this);
}

antlrcpp::Any WorldObjectsParser::WorldobjectsContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<WorldObjectsVisitor*>(visitor))
		return parserVisitor->visitWorldobjects(this);
	else
		return visitor->visitChildren(this);
}

WorldObjectsParser::WorldobjectsContext* WorldObjectsParser::worldobjects() {
	WorldobjectsContext *_localctx = _tracker.createInstance<WorldobjectsContext>(_ctx, getState());
	enterRule(_localctx, 0, WorldObjectsParser::RuleWorldobjects);
	size_t _la = 0;

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(17);
		_errHandler->sync(this);
		_la = _input->LA(1);
		while (_la == WorldObjectsParser::WORLDOBJECT) {
			setState(14);
			worldobject();
			setState(19);
			_errHandler->sync(this);
			_la = _input->LA(1);
		}
	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- WorldobjectContext ------------------------------------------------------------------

WorldObjectsParser::WorldobjectContext::WorldobjectContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WorldObjectsParser::WorldobjectContext::WORLDOBJECT() {
	return getToken(WorldObjectsParser::WORLDOBJECT, 0);
}

tree::TerminalNode* WorldObjectsParser::WorldobjectContext::ID() {
	return getToken(WorldObjectsParser::ID, 0);
}

tree::TerminalNode* WorldObjectsParser::WorldobjectContext::LCB() {
	return getToken(WorldObjectsParser::LCB, 0);
}

WorldObjectsParser::WorldobjectnameContext* WorldObjectsParser::WorldobjectContext::worldobjectname() {
	return getRuleContext<WorldObjectsParser::WorldobjectnameContext>(0);
}

std::vector<tree::TerminalNode *> WorldObjectsParser::WorldobjectContext::CM() {
	return getTokens(WorldObjectsParser::CM);
}

tree::TerminalNode* WorldObjectsParser::WorldobjectContext::CM(size_t i) {
	return getToken(WorldObjectsParser::CM, i);
}

WorldObjectsParser::WorldobjectexamineContext* WorldObjectsParser::WorldobjectContext::worldobjectexamine() {
	return getRuleContext<WorldObjectsParser::WorldobjectexamineContext>(0);
}

WorldObjectsParser::WorldobjectitemlistContext* WorldObjectsParser::WorldobjectContext::worldobjectitemlist() {
	return getRuleContext<WorldObjectsParser::WorldobjectitemlistContext>(0);
}

tree::TerminalNode* WorldObjectsParser::WorldobjectContext::RCB() {
	return getToken(WorldObjectsParser::RCB, 0);
}

size_t WorldObjectsParser::WorldobjectContext::getRuleIndex() const {
	return WorldObjectsParser::RuleWorldobject;
}

void WorldObjectsParser::WorldobjectContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldObjectsListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterWorldobject(this);
}

void WorldObjectsParser::WorldobjectContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldObjectsListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitWorldobject(this);
}

antlrcpp::Any WorldObjectsParser::WorldobjectContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<WorldObjectsVisitor*>(visitor))
		return parserVisitor->visitWorldobject(this);
	else
		return visitor->visitChildren(this);
}

WorldObjectsParser::WorldobjectContext* WorldObjectsParser::worldobject() {
	WorldobjectContext *_localctx = _tracker.createInstance<WorldobjectContext>(_ctx, getState());
	enterRule(_localctx, 2, WorldObjectsParser::RuleWorldobject);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(20);
		match(WorldObjectsParser::WORLDOBJECT);
		setState(21);
		match(WorldObjectsParser::ID);
		setState(22);
		match(WorldObjectsParser::LCB);
		setState(23);
		worldobjectname();
		setState(24);
		match(WorldObjectsParser::CM);
		setState(25);
		worldobjectexamine();
		setState(26);
		match(WorldObjectsParser::CM);
		setState(27);
		worldobjectitemlist();
		setState(28);
		match(WorldObjectsParser::RCB);
	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- WorldobjectnameContext ------------------------------------------------------------------

WorldObjectsParser::WorldobjectnameContext::WorldobjectnameContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WorldObjectsParser::WorldobjectnameContext::STRING() {
	return getToken(WorldObjectsParser::STRING, 0);
}

size_t WorldObjectsParser::WorldobjectnameContext::getRuleIndex() const {
	return WorldObjectsParser::RuleWorldobjectname;
}

void WorldObjectsParser::WorldobjectnameContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldObjectsListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterWorldobjectname(this);
}

void WorldObjectsParser::WorldobjectnameContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldObjectsListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitWorldobjectname(this);
}

antlrcpp::Any WorldObjectsParser::WorldobjectnameContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<WorldObjectsVisitor*>(visitor))
		return parserVisitor->visitWorldobjectname(this);
	else
		return visitor->visitChildren(this);
}

WorldObjectsParser::WorldobjectnameContext* WorldObjectsParser::worldobjectname() {
	WorldobjectnameContext *_localctx = _tracker.createInstance<WorldobjectnameContext>(_ctx, getState());
	enterRule(_localctx, 4, WorldObjectsParser::RuleWorldobjectname);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(30);
		match(WorldObjectsParser::STRING);
	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- WorldobjectexamineContext ------------------------------------------------------------------

WorldObjectsParser::WorldobjectexamineContext::WorldobjectexamineContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WorldObjectsParser::WorldobjectexamineContext::STRING() {
	return getToken(WorldObjectsParser::STRING, 0);
}

size_t WorldObjectsParser::WorldobjectexamineContext::getRuleIndex() const {
	return WorldObjectsParser::RuleWorldobjectexamine;
}

void WorldObjectsParser::WorldobjectexamineContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldObjectsListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterWorldobjectexamine(this);
}

void WorldObjectsParser::WorldobjectexamineContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldObjectsListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitWorldobjectexamine(this);
}

antlrcpp::Any WorldObjectsParser::WorldobjectexamineContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<WorldObjectsVisitor*>(visitor))
		return parserVisitor->visitWorldobjectexamine(this);
	else
		return visitor->visitChildren(this);
}

WorldObjectsParser::WorldobjectexamineContext* WorldObjectsParser::worldobjectexamine() {
	WorldobjectexamineContext *_localctx = _tracker.createInstance<WorldobjectexamineContext>(_ctx, getState());
	enterRule(_localctx, 6, WorldObjectsParser::RuleWorldobjectexamine);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(32);
		match(WorldObjectsParser::STRING);
	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- WorldobjectitemlistContext ------------------------------------------------------------------

WorldObjectsParser::WorldobjectitemlistContext::WorldobjectitemlistContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WorldObjectsParser::WorldobjectitemlistContext::LCB() {
	return getToken(WorldObjectsParser::LCB, 0);
}

WorldObjectsParser::WorldobjectitemiterationContext* WorldObjectsParser::WorldobjectitemlistContext::worldobjectitemiteration() {
	return getRuleContext<WorldObjectsParser::WorldobjectitemiterationContext>(0);
}

tree::TerminalNode* WorldObjectsParser::WorldobjectitemlistContext::RCB() {
	return getToken(WorldObjectsParser::RCB, 0);
}

size_t WorldObjectsParser::WorldobjectitemlistContext::getRuleIndex() const {
	return WorldObjectsParser::RuleWorldobjectitemlist;
}

void WorldObjectsParser::WorldobjectitemlistContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldObjectsListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterWorldobjectitemlist(this);
}

void WorldObjectsParser::WorldobjectitemlistContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldObjectsListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitWorldobjectitemlist(this);
}

antlrcpp::Any WorldObjectsParser::WorldobjectitemlistContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<WorldObjectsVisitor*>(visitor))
		return parserVisitor->visitWorldobjectitemlist(this);
	else
		return visitor->visitChildren(this);
}

WorldObjectsParser::WorldobjectitemlistContext* WorldObjectsParser::worldobjectitemlist() {
	WorldobjectitemlistContext *_localctx = _tracker.createInstance<WorldobjectitemlistContext>(_ctx, getState());
	enterRule(_localctx, 8, WorldObjectsParser::RuleWorldobjectitemlist);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(34);
		match(WorldObjectsParser::LCB);
		setState(35);
		worldobjectitemiteration();
		setState(36);
		match(WorldObjectsParser::RCB);
	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- WorldobjectitemiterationContext ------------------------------------------------------------------

WorldObjectsParser::WorldobjectitemiterationContext::WorldobjectitemiterationContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

std::vector<WorldObjectsParser::WorldobjectitemContext *> WorldObjectsParser::WorldobjectitemiterationContext::worldobjectitem() {
	return getRuleContexts<WorldObjectsParser::WorldobjectitemContext>();
}

WorldObjectsParser::WorldobjectitemContext* WorldObjectsParser::WorldobjectitemiterationContext::worldobjectitem(size_t i) {
	return getRuleContext<WorldObjectsParser::WorldobjectitemContext>(i);
}

size_t WorldObjectsParser::WorldobjectitemiterationContext::getRuleIndex() const {
	return WorldObjectsParser::RuleWorldobjectitemiteration;
}

void WorldObjectsParser::WorldobjectitemiterationContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldObjectsListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterWorldobjectitemiteration(this);
}

void WorldObjectsParser::WorldobjectitemiterationContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldObjectsListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitWorldobjectitemiteration(this);
}

antlrcpp::Any WorldObjectsParser::WorldobjectitemiterationContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<WorldObjectsVisitor*>(visitor))
		return parserVisitor->visitWorldobjectitemiteration(this);
	else
		return visitor->visitChildren(this);
}

WorldObjectsParser::WorldobjectitemiterationContext* WorldObjectsParser::worldobjectitemiteration() {
	WorldobjectitemiterationContext *_localctx = _tracker.createInstance<WorldobjectitemiterationContext>(_ctx, getState());
	enterRule(_localctx, 10, WorldObjectsParser::RuleWorldobjectitemiteration);
	size_t _la = 0;

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(41);
		_errHandler->sync(this);
		_la = _input->LA(1);
		while (_la == WorldObjectsParser::STRING) {
			setState(38);
			worldobjectitem();
			setState(43);
			_errHandler->sync(this);
			_la = _input->LA(1);
		}
	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- WorldobjectitemContext ------------------------------------------------------------------

WorldObjectsParser::WorldobjectitemContext::WorldobjectitemContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WorldObjectsParser::WorldobjectitemContext::STRING() {
	return getToken(WorldObjectsParser::STRING, 0);
}

size_t WorldObjectsParser::WorldobjectitemContext::getRuleIndex() const {
	return WorldObjectsParser::RuleWorldobjectitem;
}

void WorldObjectsParser::WorldobjectitemContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldObjectsListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterWorldobjectitem(this);
}

void WorldObjectsParser::WorldobjectitemContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldObjectsListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitWorldobjectitem(this);
}

antlrcpp::Any WorldObjectsParser::WorldobjectitemContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<WorldObjectsVisitor*>(visitor))
		return parserVisitor->visitWorldobjectitem(this);
	else
		return visitor->visitChildren(this);
}

WorldObjectsParser::WorldobjectitemContext* WorldObjectsParser::worldobjectitem() {
	WorldobjectitemContext *_localctx = _tracker.createInstance<WorldobjectitemContext>(_ctx, getState());
	enterRule(_localctx, 12, WorldObjectsParser::RuleWorldobjectitem);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(44);
		match(WorldObjectsParser::STRING);
	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> WorldObjectsParser::_decisionToDFA;
atn::PredictionContextCache WorldObjectsParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN WorldObjectsParser::_atn;
std::vector<uint16_t> WorldObjectsParser::_serializedATN;

std::vector<std::string> WorldObjectsParser::_ruleNames = {
  "worldobjects", "worldobject", "worldobjectname", "worldobjectexamine",
  "worldobjectitemlist", "worldobjectitemiteration", "worldobjectitem"
};

std::vector<std::string> WorldObjectsParser::_literalNames = {
  "", "'worldobject'", "'{'", "'}'", "'='", "';'", "','", "", "", "", "",
  "' '"
};

std::vector<std::string> WorldObjectsParser::_symbolicNames = {
  "", "WORLDOBJECT", "LCB", "RCB", "EQ", "SC", "CM", "ID", "STRING", "INT",
  "WS", "SPACE"
};

dfa::Vocabulary WorldObjectsParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> WorldObjectsParser::_tokenNames;

WorldObjectsParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		}
		else {
			_tokenNames.push_back(name);
		}
	}

	_serializedATN = {
	  0x3, 0x430, 0xd6d1, 0x8206, 0xad2d, 0x4417, 0xaef1, 0x8d80, 0xaadd,
	  0x3, 0xd, 0x31, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9,
	  0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4,
	  0x8, 0x9, 0x8, 0x3, 0x2, 0x7, 0x2, 0x12, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2,
	  0x15, 0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3,
	  0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3,
	  0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x7,
	  0x7, 0x2a, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x2d, 0xb, 0x7, 0x3, 0x8, 0x3,
	  0x8, 0x3, 0x8, 0x2, 0x2, 0x9, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x2,
	  0x2, 0x2b, 0x2, 0x13, 0x3, 0x2, 0x2, 0x2, 0x4, 0x16, 0x3, 0x2, 0x2,
	  0x2, 0x6, 0x20, 0x3, 0x2, 0x2, 0x2, 0x8, 0x22, 0x3, 0x2, 0x2, 0x2, 0xa,
	  0x24, 0x3, 0x2, 0x2, 0x2, 0xc, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xe, 0x2e,
	  0x3, 0x2, 0x2, 0x2, 0x10, 0x12, 0x5, 0x4, 0x3, 0x2, 0x11, 0x10, 0x3,
	  0x2, 0x2, 0x2, 0x12, 0x15, 0x3, 0x2, 0x2, 0x2, 0x13, 0x11, 0x3, 0x2,
	  0x2, 0x2, 0x13, 0x14, 0x3, 0x2, 0x2, 0x2, 0x14, 0x3, 0x3, 0x2, 0x2,
	  0x2, 0x15, 0x13, 0x3, 0x2, 0x2, 0x2, 0x16, 0x17, 0x7, 0x3, 0x2, 0x2,
	  0x17, 0x18, 0x7, 0x9, 0x2, 0x2, 0x18, 0x19, 0x7, 0x4, 0x2, 0x2, 0x19,
	  0x1a, 0x5, 0x6, 0x4, 0x2, 0x1a, 0x1b, 0x7, 0x8, 0x2, 0x2, 0x1b, 0x1c,
	  0x5, 0x8, 0x5, 0x2, 0x1c, 0x1d, 0x7, 0x8, 0x2, 0x2, 0x1d, 0x1e, 0x5,
	  0xa, 0x6, 0x2, 0x1e, 0x1f, 0x7, 0x5, 0x2, 0x2, 0x1f, 0x5, 0x3, 0x2,
	  0x2, 0x2, 0x20, 0x21, 0x7, 0xa, 0x2, 0x2, 0x21, 0x7, 0x3, 0x2, 0x2,
	  0x2, 0x22, 0x23, 0x7, 0xa, 0x2, 0x2, 0x23, 0x9, 0x3, 0x2, 0x2, 0x2,
	  0x24, 0x25, 0x7, 0x4, 0x2, 0x2, 0x25, 0x26, 0x5, 0xc, 0x7, 0x2, 0x26,
	  0x27, 0x7, 0x5, 0x2, 0x2, 0x27, 0xb, 0x3, 0x2, 0x2, 0x2, 0x28, 0x2a,
	  0x5, 0xe, 0x8, 0x2, 0x29, 0x28, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2d, 0x3,
	  0x2, 0x2, 0x2, 0x2b, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2c, 0x3, 0x2,
	  0x2, 0x2, 0x2c, 0xd, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2b, 0x3, 0x2, 0x2,
	  0x2, 0x2e, 0x2f, 0x7, 0xa, 0x2, 0x2, 0x2f, 0xf, 0x3, 0x2, 0x2, 0x2,
	  0x4, 0x13, 0x2b,
	};

	atn::ATNDeserializer deserializer;
	_atn = deserializer.deserialize(_serializedATN);

	size_t count = _atn.getNumberOfDecisions();
	_decisionToDFA.reserve(count);
	for (size_t i = 0; i < count; i++) {
		_decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
	}
}

WorldObjectsParser::Initializer WorldObjectsParser::_init;