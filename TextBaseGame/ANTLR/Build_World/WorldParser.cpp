// Generated from World.g4 by ANTLR 4.6

#include "WorldListener.h"
#include "WorldVisitor.h"

#include "WorldParser.h"

using namespace antlrcpp;
using namespace antlr4;

WorldParser::WorldParser(TokenStream *input) : Parser(input) {
	_interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

WorldParser::~WorldParser() {
	delete _interpreter;
}

std::string WorldParser::getGrammarFileName() const {
	return "World.g4";
}

const std::vector<std::string>& WorldParser::getRuleNames() const {
	return _ruleNames;
}

dfa::Vocabulary& WorldParser::getVocabulary() const {
	return _vocabulary;
}

//----------------- WorldContext ------------------------------------------------------------------

WorldParser::WorldContext::WorldContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

std::vector<WorldParser::NodeContext *> WorldParser::WorldContext::node() {
	return getRuleContexts<WorldParser::NodeContext>();
}

WorldParser::NodeContext* WorldParser::WorldContext::node(size_t i) {
	return getRuleContext<WorldParser::NodeContext>(i);
}

std::vector<WorldParser::ConnectionContext *> WorldParser::WorldContext::connection() {
	return getRuleContexts<WorldParser::ConnectionContext>();
}

WorldParser::ConnectionContext* WorldParser::WorldContext::connection(size_t i) {
	return getRuleContext<WorldParser::ConnectionContext>(i);
}

size_t WorldParser::WorldContext::getRuleIndex() const {
	return WorldParser::RuleWorld;
}

void WorldParser::WorldContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterWorld(this);
}

void WorldParser::WorldContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitWorld(this);
}

antlrcpp::Any WorldParser::WorldContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<WorldVisitor*>(visitor))
		return parserVisitor->visitWorld(this);
	else
		return visitor->visitChildren(this);
}

WorldParser::WorldContext* WorldParser::world() {
	WorldContext *_localctx = _tracker.createInstance<WorldContext>(_ctx, getState());
	enterRule(_localctx, 0, WorldParser::RuleWorld);
	size_t _la = 0;

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(29);
		_errHandler->sync(this);
		_la = _input->LA(1);
		while (_la == WorldParser::NODE) {
			setState(26);
			node();
			setState(31);
			_errHandler->sync(this);
			_la = _input->LA(1);
		}
		setState(35);
		_errHandler->sync(this);
		_la = _input->LA(1);
		while (_la == WorldParser::CONNECTION) {
			setState(32);
			connection();
			setState(37);
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

//----------------- NodeContext ------------------------------------------------------------------

WorldParser::NodeContext::NodeContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WorldParser::NodeContext::NODE() {
	return getToken(WorldParser::NODE, 0);
}

tree::TerminalNode* WorldParser::NodeContext::ID() {
	return getToken(WorldParser::ID, 0);
}

tree::TerminalNode* WorldParser::NodeContext::LCB() {
	return getToken(WorldParser::LCB, 0);
}

WorldParser::NodeexamineContext* WorldParser::NodeContext::nodeexamine() {
	return getRuleContext<WorldParser::NodeexamineContext>(0);
}

tree::TerminalNode* WorldParser::NodeContext::CM() {
	return getToken(WorldParser::CM, 0);
}

WorldParser::NodeworldobjectlistContext* WorldParser::NodeContext::nodeworldobjectlist() {
	return getRuleContext<WorldParser::NodeworldobjectlistContext>(0);
}

tree::TerminalNode* WorldParser::NodeContext::RCB() {
	return getToken(WorldParser::RCB, 0);
}

size_t WorldParser::NodeContext::getRuleIndex() const {
	return WorldParser::RuleNode;
}

void WorldParser::NodeContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterNode(this);
}

void WorldParser::NodeContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitNode(this);
}

antlrcpp::Any WorldParser::NodeContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<WorldVisitor*>(visitor))
		return parserVisitor->visitNode(this);
	else
		return visitor->visitChildren(this);
}

WorldParser::NodeContext* WorldParser::node() {
	NodeContext *_localctx = _tracker.createInstance<NodeContext>(_ctx, getState());
	enterRule(_localctx, 2, WorldParser::RuleNode);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(38);
		match(WorldParser::NODE);
		setState(39);
		match(WorldParser::ID);
		setState(40);
		match(WorldParser::LCB);
		setState(41);
		nodeexamine();
		setState(42);
		match(WorldParser::CM);
		setState(43);
		nodeworldobjectlist();
		setState(44);
		match(WorldParser::RCB);
	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- NodeexamineContext ------------------------------------------------------------------

WorldParser::NodeexamineContext::NodeexamineContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WorldParser::NodeexamineContext::STRING() {
	return getToken(WorldParser::STRING, 0);
}

size_t WorldParser::NodeexamineContext::getRuleIndex() const {
	return WorldParser::RuleNodeexamine;
}

void WorldParser::NodeexamineContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterNodeexamine(this);
}

void WorldParser::NodeexamineContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitNodeexamine(this);
}

antlrcpp::Any WorldParser::NodeexamineContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<WorldVisitor*>(visitor))
		return parserVisitor->visitNodeexamine(this);
	else
		return visitor->visitChildren(this);
}

WorldParser::NodeexamineContext* WorldParser::nodeexamine() {
	NodeexamineContext *_localctx = _tracker.createInstance<NodeexamineContext>(_ctx, getState());
	enterRule(_localctx, 4, WorldParser::RuleNodeexamine);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(46);
		match(WorldParser::STRING);
	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- NodeworldobjectlistContext ------------------------------------------------------------------

WorldParser::NodeworldobjectlistContext::NodeworldobjectlistContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WorldParser::NodeworldobjectlistContext::LCB() {
	return getToken(WorldParser::LCB, 0);
}

WorldParser::NodeworldobjectiterationContext* WorldParser::NodeworldobjectlistContext::nodeworldobjectiteration() {
	return getRuleContext<WorldParser::NodeworldobjectiterationContext>(0);
}

tree::TerminalNode* WorldParser::NodeworldobjectlistContext::RCB() {
	return getToken(WorldParser::RCB, 0);
}

size_t WorldParser::NodeworldobjectlistContext::getRuleIndex() const {
	return WorldParser::RuleNodeworldobjectlist;
}

void WorldParser::NodeworldobjectlistContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterNodeworldobjectlist(this);
}

void WorldParser::NodeworldobjectlistContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitNodeworldobjectlist(this);
}

antlrcpp::Any WorldParser::NodeworldobjectlistContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<WorldVisitor*>(visitor))
		return parserVisitor->visitNodeworldobjectlist(this);
	else
		return visitor->visitChildren(this);
}

WorldParser::NodeworldobjectlistContext* WorldParser::nodeworldobjectlist() {
	NodeworldobjectlistContext *_localctx = _tracker.createInstance<NodeworldobjectlistContext>(_ctx, getState());
	enterRule(_localctx, 6, WorldParser::RuleNodeworldobjectlist);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(48);
		match(WorldParser::LCB);
		setState(49);
		nodeworldobjectiteration();
		setState(50);
		match(WorldParser::RCB);
	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- NodeworldobjectiterationContext ------------------------------------------------------------------

WorldParser::NodeworldobjectiterationContext::NodeworldobjectiterationContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

std::vector<WorldParser::NodeworldobjectContext *> WorldParser::NodeworldobjectiterationContext::nodeworldobject() {
	return getRuleContexts<WorldParser::NodeworldobjectContext>();
}

WorldParser::NodeworldobjectContext* WorldParser::NodeworldobjectiterationContext::nodeworldobject(size_t i) {
	return getRuleContext<WorldParser::NodeworldobjectContext>(i);
}

size_t WorldParser::NodeworldobjectiterationContext::getRuleIndex() const {
	return WorldParser::RuleNodeworldobjectiteration;
}

void WorldParser::NodeworldobjectiterationContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterNodeworldobjectiteration(this);
}

void WorldParser::NodeworldobjectiterationContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitNodeworldobjectiteration(this);
}

antlrcpp::Any WorldParser::NodeworldobjectiterationContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<WorldVisitor*>(visitor))
		return parserVisitor->visitNodeworldobjectiteration(this);
	else
		return visitor->visitChildren(this);
}

WorldParser::NodeworldobjectiterationContext* WorldParser::nodeworldobjectiteration() {
	NodeworldobjectiterationContext *_localctx = _tracker.createInstance<NodeworldobjectiterationContext>(_ctx, getState());
	enterRule(_localctx, 8, WorldParser::RuleNodeworldobjectiteration);
	size_t _la = 0;

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(55);
		_errHandler->sync(this);
		_la = _input->LA(1);
		while (_la == WorldParser::STRING) {
			setState(52);
			nodeworldobject();
			setState(57);
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

//----------------- NodeworldobjectContext ------------------------------------------------------------------

WorldParser::NodeworldobjectContext::NodeworldobjectContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WorldParser::NodeworldobjectContext::STRING() {
	return getToken(WorldParser::STRING, 0);
}

size_t WorldParser::NodeworldobjectContext::getRuleIndex() const {
	return WorldParser::RuleNodeworldobject;
}

void WorldParser::NodeworldobjectContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterNodeworldobject(this);
}

void WorldParser::NodeworldobjectContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitNodeworldobject(this);
}

antlrcpp::Any WorldParser::NodeworldobjectContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<WorldVisitor*>(visitor))
		return parserVisitor->visitNodeworldobject(this);
	else
		return visitor->visitChildren(this);
}

WorldParser::NodeworldobjectContext* WorldParser::nodeworldobject() {
	NodeworldobjectContext *_localctx = _tracker.createInstance<NodeworldobjectContext>(_ctx, getState());
	enterRule(_localctx, 10, WorldParser::RuleNodeworldobject);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(58);
		match(WorldParser::STRING);
	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- ConnectionContext ------------------------------------------------------------------

WorldParser::ConnectionContext::ConnectionContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WorldParser::ConnectionContext::CONNECTION() {
	return getToken(WorldParser::CONNECTION, 0);
}

tree::TerminalNode* WorldParser::ConnectionContext::LCB() {
	return getToken(WorldParser::LCB, 0);
}

WorldParser::Node1Context* WorldParser::ConnectionContext::node1() {
	return getRuleContext<WorldParser::Node1Context>(0);
}

std::vector<tree::TerminalNode *> WorldParser::ConnectionContext::CM() {
	return getTokens(WorldParser::CM);
}

tree::TerminalNode* WorldParser::ConnectionContext::CM(size_t i) {
	return getToken(WorldParser::CM, i);
}

WorldParser::Node2Context* WorldParser::ConnectionContext::node2() {
	return getRuleContext<WorldParser::Node2Context>(0);
}

WorldParser::ConnectionstatusContext* WorldParser::ConnectionContext::connectionstatus() {
	return getRuleContext<WorldParser::ConnectionstatusContext>(0);
}

WorldParser::ExamineclosedContext* WorldParser::ConnectionContext::examineclosed() {
	return getRuleContext<WorldParser::ExamineclosedContext>(0);
}

WorldParser::ExamineopenContext* WorldParser::ConnectionContext::examineopen() {
	return getRuleContext<WorldParser::ExamineopenContext>(0);
}

WorldParser::KeyidContext* WorldParser::ConnectionContext::keyid() {
	return getRuleContext<WorldParser::KeyidContext>(0);
}

tree::TerminalNode* WorldParser::ConnectionContext::RCB() {
	return getToken(WorldParser::RCB, 0);
}

size_t WorldParser::ConnectionContext::getRuleIndex() const {
	return WorldParser::RuleConnection;
}

void WorldParser::ConnectionContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterConnection(this);
}

void WorldParser::ConnectionContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitConnection(this);
}

antlrcpp::Any WorldParser::ConnectionContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<WorldVisitor*>(visitor))
		return parserVisitor->visitConnection(this);
	else
		return visitor->visitChildren(this);
}

WorldParser::ConnectionContext* WorldParser::connection() {
	ConnectionContext *_localctx = _tracker.createInstance<ConnectionContext>(_ctx, getState());
	enterRule(_localctx, 12, WorldParser::RuleConnection);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(60);
		match(WorldParser::CONNECTION);
		setState(61);
		match(WorldParser::LCB);
		setState(62);
		node1();
		setState(63);
		match(WorldParser::CM);
		setState(64);
		node2();
		setState(65);
		match(WorldParser::CM);
		setState(66);
		connectionstatus();
		setState(67);
		match(WorldParser::CM);
		setState(68);
		examineclosed();
		setState(69);
		match(WorldParser::CM);
		setState(70);
		examineopen();
		setState(71);
		match(WorldParser::CM);
		setState(72);
		keyid();
		setState(73);
		match(WorldParser::RCB);
	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- Node1Context ------------------------------------------------------------------

WorldParser::Node1Context::Node1Context(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WorldParser::Node1Context::STRING() {
	return getToken(WorldParser::STRING, 0);
}

size_t WorldParser::Node1Context::getRuleIndex() const {
	return WorldParser::RuleNode1;
}

void WorldParser::Node1Context::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterNode1(this);
}

void WorldParser::Node1Context::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitNode1(this);
}

antlrcpp::Any WorldParser::Node1Context::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<WorldVisitor*>(visitor))
		return parserVisitor->visitNode1(this);
	else
		return visitor->visitChildren(this);
}

WorldParser::Node1Context* WorldParser::node1() {
	Node1Context *_localctx = _tracker.createInstance<Node1Context>(_ctx, getState());
	enterRule(_localctx, 14, WorldParser::RuleNode1);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(75);
		match(WorldParser::STRING);
	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- Node2Context ------------------------------------------------------------------

WorldParser::Node2Context::Node2Context(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WorldParser::Node2Context::STRING() {
	return getToken(WorldParser::STRING, 0);
}

size_t WorldParser::Node2Context::getRuleIndex() const {
	return WorldParser::RuleNode2;
}

void WorldParser::Node2Context::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterNode2(this);
}

void WorldParser::Node2Context::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitNode2(this);
}

antlrcpp::Any WorldParser::Node2Context::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<WorldVisitor*>(visitor))
		return parserVisitor->visitNode2(this);
	else
		return visitor->visitChildren(this);
}

WorldParser::Node2Context* WorldParser::node2() {
	Node2Context *_localctx = _tracker.createInstance<Node2Context>(_ctx, getState());
	enterRule(_localctx, 16, WorldParser::RuleNode2);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(77);
		match(WorldParser::STRING);
	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- ConnectionstatusContext ------------------------------------------------------------------

WorldParser::ConnectionstatusContext::ConnectionstatusContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WorldParser::ConnectionstatusContext::INT() {
	return getToken(WorldParser::INT, 0);
}

size_t WorldParser::ConnectionstatusContext::getRuleIndex() const {
	return WorldParser::RuleConnectionstatus;
}

void WorldParser::ConnectionstatusContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterConnectionstatus(this);
}

void WorldParser::ConnectionstatusContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitConnectionstatus(this);
}

antlrcpp::Any WorldParser::ConnectionstatusContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<WorldVisitor*>(visitor))
		return parserVisitor->visitConnectionstatus(this);
	else
		return visitor->visitChildren(this);
}

WorldParser::ConnectionstatusContext* WorldParser::connectionstatus() {
	ConnectionstatusContext *_localctx = _tracker.createInstance<ConnectionstatusContext>(_ctx, getState());
	enterRule(_localctx, 18, WorldParser::RuleConnectionstatus);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(79);
		match(WorldParser::INT);
	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- ExamineclosedContext ------------------------------------------------------------------

WorldParser::ExamineclosedContext::ExamineclosedContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WorldParser::ExamineclosedContext::STRING() {
	return getToken(WorldParser::STRING, 0);
}

size_t WorldParser::ExamineclosedContext::getRuleIndex() const {
	return WorldParser::RuleExamineclosed;
}

void WorldParser::ExamineclosedContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterExamineclosed(this);
}

void WorldParser::ExamineclosedContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitExamineclosed(this);
}

antlrcpp::Any WorldParser::ExamineclosedContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<WorldVisitor*>(visitor))
		return parserVisitor->visitExamineclosed(this);
	else
		return visitor->visitChildren(this);
}

WorldParser::ExamineclosedContext* WorldParser::examineclosed() {
	ExamineclosedContext *_localctx = _tracker.createInstance<ExamineclosedContext>(_ctx, getState());
	enterRule(_localctx, 20, WorldParser::RuleExamineclosed);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(81);
		match(WorldParser::STRING);
	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- ExamineopenContext ------------------------------------------------------------------

WorldParser::ExamineopenContext::ExamineopenContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WorldParser::ExamineopenContext::STRING() {
	return getToken(WorldParser::STRING, 0);
}

size_t WorldParser::ExamineopenContext::getRuleIndex() const {
	return WorldParser::RuleExamineopen;
}

void WorldParser::ExamineopenContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterExamineopen(this);
}

void WorldParser::ExamineopenContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitExamineopen(this);
}

antlrcpp::Any WorldParser::ExamineopenContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<WorldVisitor*>(visitor))
		return parserVisitor->visitExamineopen(this);
	else
		return visitor->visitChildren(this);
}

WorldParser::ExamineopenContext* WorldParser::examineopen() {
	ExamineopenContext *_localctx = _tracker.createInstance<ExamineopenContext>(_ctx, getState());
	enterRule(_localctx, 22, WorldParser::RuleExamineopen);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(83);
		match(WorldParser::STRING);
	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

//----------------- KeyidContext ------------------------------------------------------------------

WorldParser::KeyidContext::KeyidContext(ParserRuleContext *parent, size_t invokingState)
	: ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* WorldParser::KeyidContext::STRING() {
	return getToken(WorldParser::STRING, 0);
}

size_t WorldParser::KeyidContext::getRuleIndex() const {
	return WorldParser::RuleKeyid;
}

void WorldParser::KeyidContext::enterRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldListener *>(listener);
	if (parserListener != nullptr)
		parserListener->enterKeyid(this);
}

void WorldParser::KeyidContext::exitRule(tree::ParseTreeListener *listener) {
	auto parserListener = dynamic_cast<WorldListener *>(listener);
	if (parserListener != nullptr)
		parserListener->exitKeyid(this);
}

antlrcpp::Any WorldParser::KeyidContext::accept(tree::ParseTreeVisitor *visitor) {
	if (auto parserVisitor = dynamic_cast<WorldVisitor*>(visitor))
		return parserVisitor->visitKeyid(this);
	else
		return visitor->visitChildren(this);
}

WorldParser::KeyidContext* WorldParser::keyid() {
	KeyidContext *_localctx = _tracker.createInstance<KeyidContext>(_ctx, getState());
	enterRule(_localctx, 24, WorldParser::RuleKeyid);

	auto onExit = finally([=] {
		exitRule();
	});
	try {
		enterOuterAlt(_localctx, 1);
		setState(85);
		match(WorldParser::STRING);
	}
	catch (RecognitionException &e) {
		_errHandler->reportError(this, e);
		_localctx->exception = std::current_exception();
		_errHandler->recover(this, _localctx->exception);
	}

	return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> WorldParser::_decisionToDFA;
atn::PredictionContextCache WorldParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN WorldParser::_atn;
std::vector<uint16_t> WorldParser::_serializedATN;

std::vector<std::string> WorldParser::_ruleNames = {
  "world", "node", "nodeexamine", "nodeworldobjectlist", "nodeworldobjectiteration",
  "nodeworldobject", "connection", "node1", "node2", "connectionstatus",
  "examineclosed", "examineopen", "keyid"
};

std::vector<std::string> WorldParser::_literalNames = {
  "", "'connection'", "'node'", "'{'", "'}'", "'='", "';'", "','", "", "",
  "", "", "' '"
};

std::vector<std::string> WorldParser::_symbolicNames = {
  "", "CONNECTION", "NODE", "LCB", "RCB", "EQ", "SC", "CM", "ID", "STRING",
  "INT", "WS", "SPACE"
};

dfa::Vocabulary WorldParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> WorldParser::_tokenNames;

WorldParser::Initializer::Initializer() {
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
	  0x3, 0xe, 0x5a, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9,
	  0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4,
	  0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9,
	  0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x3,
	  0x2, 0x7, 0x2, 0x1e, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x21, 0xb, 0x2, 0x3,
	  0x2, 0x7, 0x2, 0x24, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x27, 0xb, 0x2, 0x3,
	  0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3,
	  0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3,
	  0x6, 0x7, 0x6, 0x38, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x3b, 0xb, 0x6, 0x3,
	  0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3,
	  0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3,
	  0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3,
	  0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3,
	  0xe, 0x3, 0xe, 0x2, 0x2, 0xf, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10,
	  0x12, 0x14, 0x16, 0x18, 0x1a, 0x2, 0x2, 0x4f, 0x2, 0x1f, 0x3, 0x2, 0x2,
	  0x2, 0x4, 0x28, 0x3, 0x2, 0x2, 0x2, 0x6, 0x30, 0x3, 0x2, 0x2, 0x2, 0x8,
	  0x32, 0x3, 0x2, 0x2, 0x2, 0xa, 0x39, 0x3, 0x2, 0x2, 0x2, 0xc, 0x3c,
	  0x3, 0x2, 0x2, 0x2, 0xe, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x10, 0x4d, 0x3,
	  0x2, 0x2, 0x2, 0x12, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x14, 0x51, 0x3, 0x2,
	  0x2, 0x2, 0x16, 0x53, 0x3, 0x2, 0x2, 0x2, 0x18, 0x55, 0x3, 0x2, 0x2,
	  0x2, 0x1a, 0x57, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1e, 0x5, 0x4, 0x3, 0x2,
	  0x1d, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x21, 0x3, 0x2, 0x2, 0x2, 0x1f,
	  0x1d, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x20, 0x3, 0x2, 0x2, 0x2, 0x20, 0x25,
	  0x3, 0x2, 0x2, 0x2, 0x21, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x22, 0x24, 0x5,
	  0xe, 0x8, 0x2, 0x23, 0x22, 0x3, 0x2, 0x2, 0x2, 0x24, 0x27, 0x3, 0x2,
	  0x2, 0x2, 0x25, 0x23, 0x3, 0x2, 0x2, 0x2, 0x25, 0x26, 0x3, 0x2, 0x2,
	  0x2, 0x26, 0x3, 0x3, 0x2, 0x2, 0x2, 0x27, 0x25, 0x3, 0x2, 0x2, 0x2,
	  0x28, 0x29, 0x7, 0x4, 0x2, 0x2, 0x29, 0x2a, 0x7, 0xa, 0x2, 0x2, 0x2a,
	  0x2b, 0x7, 0x5, 0x2, 0x2, 0x2b, 0x2c, 0x5, 0x6, 0x4, 0x2, 0x2c, 0x2d,
	  0x7, 0x9, 0x2, 0x2, 0x2d, 0x2e, 0x5, 0x8, 0x5, 0x2, 0x2e, 0x2f, 0x7,
	  0x6, 0x2, 0x2, 0x2f, 0x5, 0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 0x7, 0xb,
	  0x2, 0x2, 0x31, 0x7, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x7, 0x5, 0x2,
	  0x2, 0x33, 0x34, 0x5, 0xa, 0x6, 0x2, 0x34, 0x35, 0x7, 0x6, 0x2, 0x2,
	  0x35, 0x9, 0x3, 0x2, 0x2, 0x2, 0x36, 0x38, 0x5, 0xc, 0x7, 0x2, 0x37,
	  0x36, 0x3, 0x2, 0x2, 0x2, 0x38, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x39, 0x37,
	  0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3a, 0xb, 0x3,
	  0x2, 0x2, 0x2, 0x3b, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 0x7, 0xb,
	  0x2, 0x2, 0x3d, 0xd, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3f, 0x7, 0x3, 0x2,
	  0x2, 0x3f, 0x40, 0x7, 0x5, 0x2, 0x2, 0x40, 0x41, 0x5, 0x10, 0x9, 0x2,
	  0x41, 0x42, 0x7, 0x9, 0x2, 0x2, 0x42, 0x43, 0x5, 0x12, 0xa, 0x2, 0x43,
	  0x44, 0x7, 0x9, 0x2, 0x2, 0x44, 0x45, 0x5, 0x14, 0xb, 0x2, 0x45, 0x46,
	  0x7, 0x9, 0x2, 0x2, 0x46, 0x47, 0x5, 0x16, 0xc, 0x2, 0x47, 0x48, 0x7,
	  0x9, 0x2, 0x2, 0x48, 0x49, 0x5, 0x18, 0xd, 0x2, 0x49, 0x4a, 0x7, 0x9,
	  0x2, 0x2, 0x4a, 0x4b, 0x5, 0x1a, 0xe, 0x2, 0x4b, 0x4c, 0x7, 0x6, 0x2,
	  0x2, 0x4c, 0xf, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 0x7, 0xb, 0x2, 0x2,
	  0x4e, 0x11, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x7, 0xb, 0x2, 0x2, 0x50,
	  0x13, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x7, 0xc, 0x2, 0x2, 0x52, 0x15,
	  0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x7, 0xb, 0x2, 0x2, 0x54, 0x17, 0x3,
	  0x2, 0x2, 0x2, 0x55, 0x56, 0x7, 0xb, 0x2, 0x2, 0x56, 0x19, 0x3, 0x2,
	  0x2, 0x2, 0x57, 0x58, 0x7, 0xb, 0x2, 0x2, 0x58, 0x1b, 0x3, 0x2, 0x2,
	  0x2, 0x5, 0x1f, 0x25, 0x39,
	};

	atn::ATNDeserializer deserializer;
	_atn = deserializer.deserialize(_serializedATN);

	size_t count = _atn.getNumberOfDecisions();
	_decisionToDFA.reserve(count);
	for (size_t i = 0; i < count; i++) {
		_decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
	}
}

WorldParser::Initializer WorldParser::_init;