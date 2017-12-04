// Generated from items.g4 by ANTLR 4.6

#include "itemsListener.h"
#include "itemsVisitor.h"

#include "itemsParser.h"

using namespace antlrcpp;
using namespace antlr4;

itemsParser::itemsParser(TokenStream *input) : Parser(input) {
	_interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

itemsParser::~itemsParser() {
	delete _interpreter;
}

std::string itemsParser::getGrammarFileName() const {
	return "items.g4";
}

const std::vector<std::string>& itemsParser::getRuleNames() const {
	return _ruleNames;
}

dfa::Vocabulary& itemsParser::getVocabulary() const {
	return _vocabulary;
}

//----------------- ItemsContext ------------------------------------------------------------------

itemsParser::ItemsContext::ItemsContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

std::vector<itemsParser::ItemContext *> itemsParser::ItemsContext::item() {
	return getRuleContexts<itemsParser::ItemContext>();
}

itemsParser::ItemContext* itemsParser::ItemsContext::item(size_t i) {
	return getRuleContext<itemsParser::ItemContext>(i);
}

size_t itemsParser::ItemsContext::getRuleIndex() const {
	return itemsParser::RuleItems;
}

void itemsParser::ItemsContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<itemsListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterItems(this);
}

void itemsParser::ItemsContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<itemsListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitItems(this);
}

antlrcpp::Any itemsParser::ItemsContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<itemsVisitor*>(visitor))
		return parserVisitor->visitItems(this);
	else
		return visitor->visitChildren(this);
}

itemsParser::ItemsContext* itemsParser::items() {
	ItemsContext *_localctx = _tracker.createInstance<ItemsContext>(_ctx, getState());
	enterRule(_localctx, 0, itemsParser::RuleItems);
	size_t _la = 0;

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(15);
		_errHandler->sync(this);
		_la = _input->LA(1);
		while (_la == itemsParser::ITEM) {
			setState(12);
			item();
			setState(17);
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

//----------------- ItemContext ------------------------------------------------------------------

itemsParser::ItemContext::ItemContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* itemsParser::ItemContext::ITEM() {
	return getToken(itemsParser::ITEM, 0);
}

tree::TerminalNode* itemsParser::ItemContext::ID() {
	return getToken(itemsParser::ID, 0);
}

tree::TerminalNode* itemsParser::ItemContext::LCB() {
	return getToken(itemsParser::LCB, 0);
}

itemsParser::ItemweightContext* itemsParser::ItemContext::itemweight() {
	return getRuleContext<itemsParser::ItemweightContext>(0);
}

std::vector<tree::TerminalNode *> itemsParser::ItemContext::CM() {
	return getTokens(itemsParser::CM);
}

tree::TerminalNode* itemsParser::ItemContext::CM(size_t i) {
	return getToken(itemsParser::CM, i);
}

itemsParser::ItemtypeContext* itemsParser::ItemContext::itemtype() {
	return getRuleContext<itemsParser::ItemtypeContext>(0);
}

itemsParser::ItemexamineContext* itemsParser::ItemContext::itemexamine() {
	return getRuleContext<itemsParser::ItemexamineContext>(0);
}

tree::TerminalNode* itemsParser::ItemContext::RCB() {
	return getToken(itemsParser::RCB, 0);
}

size_t itemsParser::ItemContext::getRuleIndex() const {
	return itemsParser::RuleItem;
}

void itemsParser::ItemContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<itemsListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterItem(this);
}

void itemsParser::ItemContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<itemsListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitItem(this);
}

antlrcpp::Any itemsParser::ItemContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<itemsVisitor*>(visitor))
		return parserVisitor->visitItem(this);
	else
		return visitor->visitChildren(this);
}

itemsParser::ItemContext* itemsParser::item() {
	ItemContext *_localctx = _tracker.createInstance<ItemContext>(_ctx, getState());
	enterRule(_localctx, 2, itemsParser::RuleItem);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(18);
		match(itemsParser::ITEM);
		setState(19);
		match(itemsParser::ID);
		setState(20);
		match(itemsParser::LCB);
		setState(21);
		itemweight();
		setState(22);
		match(itemsParser::CM);
		setState(23);
		itemtype();
		setState(24);
		match(itemsParser::CM);
		setState(25);
		itemexamine();
		setState(26);
		match(itemsParser::RCB);
	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- ItemtypeContext ------------------------------------------------------------------

itemsParser::ItemtypeContext::ItemtypeContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* itemsParser::ItemtypeContext::INT() {
	return getToken(itemsParser::INT, 0);
}

size_t itemsParser::ItemtypeContext::getRuleIndex() const {
	return itemsParser::RuleItemtype;
}

void itemsParser::ItemtypeContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<itemsListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterItemtype(this);
}

void itemsParser::ItemtypeContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<itemsListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitItemtype(this);
}

antlrcpp::Any itemsParser::ItemtypeContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<itemsVisitor*>(visitor))
		return parserVisitor->visitItemtype(this);
	else
		return visitor->visitChildren(this);
}

itemsParser::ItemtypeContext* itemsParser::itemtype() {
	ItemtypeContext *_localctx = _tracker.createInstance<ItemtypeContext>(_ctx, getState());
	enterRule(_localctx, 4, itemsParser::RuleItemtype);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(28);
		match(itemsParser::INT);
	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- ItemweightContext ------------------------------------------------------------------

itemsParser::ItemweightContext::ItemweightContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* itemsParser::ItemweightContext::INT() {
	return getToken(itemsParser::INT, 0);
}

size_t itemsParser::ItemweightContext::getRuleIndex() const {
	return itemsParser::RuleItemweight;
}

void itemsParser::ItemweightContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<itemsListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterItemweight(this);
}

void itemsParser::ItemweightContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<itemsListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitItemweight(this);
}

antlrcpp::Any itemsParser::ItemweightContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<itemsVisitor*>(visitor))
		return parserVisitor->visitItemweight(this);
	else
		return visitor->visitChildren(this);
}

itemsParser::ItemweightContext* itemsParser::itemweight() {
	ItemweightContext *_localctx = _tracker.createInstance<ItemweightContext>(_ctx, getState());
	enterRule(_localctx, 6, itemsParser::RuleItemweight);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(30);
		match(itemsParser::INT);
	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- ItemexamineContext ------------------------------------------------------------------

itemsParser::ItemexamineContext::ItemexamineContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* itemsParser::ItemexamineContext::STRING() {
	return getToken(itemsParser::STRING, 0);
}

size_t itemsParser::ItemexamineContext::getRuleIndex() const {
	return itemsParser::RuleItemexamine;
}

void itemsParser::ItemexamineContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<itemsListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterItemexamine(this);
}

void itemsParser::ItemexamineContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<itemsListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitItemexamine(this);
}

antlrcpp::Any itemsParser::ItemexamineContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<itemsVisitor*>(visitor))
		return parserVisitor->visitItemexamine(this);
	else
		return visitor->visitChildren(this);
}

itemsParser::ItemexamineContext* itemsParser::itemexamine() {
	ItemexamineContext *_localctx = _tracker.createInstance<ItemexamineContext>(_ctx, getState());
	enterRule(_localctx, 8, itemsParser::RuleItemexamine);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(32);
		match(itemsParser::STRING);
	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

itemsParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* itemsParser::ValueContext::STRING() {
	return getToken(itemsParser::STRING, 0);
}

tree::TerminalNode* itemsParser::ValueContext::INT() {
	return getToken(itemsParser::INT, 0);
}

size_t itemsParser::ValueContext::getRuleIndex() const {
	return itemsParser::RuleValue;
}

void itemsParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<itemsListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterValue(this);
}

void itemsParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<itemsListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitValue(this);
}

antlrcpp::Any itemsParser::ValueContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<itemsVisitor*>(visitor))
		return parserVisitor->visitValue(this);
	else
		return visitor->visitChildren(this);
}

itemsParser::ValueContext* itemsParser::value() {
	ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
	enterRule(_localctx, 10, itemsParser::RuleValue);
	size_t _la = 0;

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(34);
		_la = _input->LA(1);
		if (!(_la == itemsParser::STRING

			|| _la == itemsParser::INT)) {
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
std::vector<dfa::DFA> itemsParser::_decisionToDFA;
atn::PredictionContextCache itemsParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN itemsParser::_atn;
std::vector<uint16_t> itemsParser::_serializedATN;

std::vector<std::string> itemsParser::_ruleNames = {
  "items", "item", "itemtype", "itemweight", "itemexamine", "value"
};

std::vector<std::string> itemsParser::_literalNames = {
  "", "'item'", "'{'", "'}'", "'='", "';'", "','", "", "", "", "", "' '"
};

std::vector<std::string> itemsParser::_symbolicNames = {
  "", "ITEM", "LCB", "RCB", "EQ", "SC", "CM", "ID", "STRING", "INT", "WS",
  "SPACE"
};

dfa::Vocabulary itemsParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> itemsParser::_tokenNames;

itemsParser::Initializer::Initializer() {
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
	  0x3, 0xd, 0x27, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9,
	  0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x3,
	  0x2, 0x7, 0x2, 0x10, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x13, 0xb, 0x2, 0x3,
	  0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3,
	  0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3,
	  0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x2, 0x2, 0x8, 0x2, 0x4,
	  0x6, 0x8, 0xa, 0xc, 0x2, 0x3, 0x3, 0x2, 0xa, 0xb, 0x21, 0x2, 0x11, 0x3,
	  0x2, 0x2, 0x2, 0x4, 0x14, 0x3, 0x2, 0x2, 0x2, 0x6, 0x1e, 0x3, 0x2, 0x2,
	  0x2, 0x8, 0x20, 0x3, 0x2, 0x2, 0x2, 0xa, 0x22, 0x3, 0x2, 0x2, 0x2, 0xc,
	  0x24, 0x3, 0x2, 0x2, 0x2, 0xe, 0x10, 0x5, 0x4, 0x3, 0x2, 0xf, 0xe, 0x3,
	  0x2, 0x2, 0x2, 0x10, 0x13, 0x3, 0x2, 0x2, 0x2, 0x11, 0xf, 0x3, 0x2,
	  0x2, 0x2, 0x11, 0x12, 0x3, 0x2, 0x2, 0x2, 0x12, 0x3, 0x3, 0x2, 0x2,
	  0x2, 0x13, 0x11, 0x3, 0x2, 0x2, 0x2, 0x14, 0x15, 0x7, 0x3, 0x2, 0x2,
	  0x15, 0x16, 0x7, 0x9, 0x2, 0x2, 0x16, 0x17, 0x7, 0x4, 0x2, 0x2, 0x17,
	  0x18, 0x5, 0x8, 0x5, 0x2, 0x18, 0x19, 0x7, 0x8, 0x2, 0x2, 0x19, 0x1a,
	  0x5, 0x6, 0x4, 0x2, 0x1a, 0x1b, 0x7, 0x8, 0x2, 0x2, 0x1b, 0x1c, 0x5,
	  0xa, 0x6, 0x2, 0x1c, 0x1d, 0x7, 0x5, 0x2, 0x2, 0x1d, 0x5, 0x3, 0x2,
	  0x2, 0x2, 0x1e, 0x1f, 0x7, 0xb, 0x2, 0x2, 0x1f, 0x7, 0x3, 0x2, 0x2,
	  0x2, 0x20, 0x21, 0x7, 0xb, 0x2, 0x2, 0x21, 0x9, 0x3, 0x2, 0x2, 0x2,
	  0x22, 0x23, 0x7, 0xa, 0x2, 0x2, 0x23, 0xb, 0x3, 0x2, 0x2, 0x2, 0x24,
	  0x25, 0x9, 0x2, 0x2, 0x2, 0x25, 0xd, 0x3, 0x2, 0x2, 0x2, 0x3, 0x11,
	};

	atn::ATNDeserializer deserializer;
	_atn = deserializer.deserialize(_serializedATN);

	size_t count = _atn.getNumberOfDecisions();
	_decisionToDFA.reserve(count);
	for (size_t i = 0; i < count; i++) {
		_decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
	}
}

itemsParser::Initializer itemsParser::_init;