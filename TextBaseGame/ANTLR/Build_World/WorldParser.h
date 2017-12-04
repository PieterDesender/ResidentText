// Generated from World.g4 by ANTLR 4.6

#pragma once

#include "antlr4-runtime.h"

class  WorldParser : public antlr4::Parser {
public:
	enum {
		CONNECTION = 1, NODE = 2, LCB = 3, RCB = 4, EQ = 5, SC = 6, CM = 7,
		ID = 8, STRING = 9, INT = 10, WS = 11, SPACE = 12
	};

	enum {
		RuleWorld = 0, RuleNode = 1, RuleNodeexamine = 2, RuleNodeworldobjectlist = 3,
		RuleNodeworldobjectiteration = 4, RuleNodeworldobject = 5, RuleConnection = 6,
		RuleNode1 = 7, RuleNode2 = 8, RuleConnectionstatus = 9, RuleExamineclosed = 10,
		RuleExamineopen = 11, RuleKeyid = 12
	};

	WorldParser(antlr4::TokenStream *input);
	~WorldParser();

	virtual std::string getGrammarFileName() const override;
	virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
	virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
	virtual const std::vector<std::string>& getRuleNames() const override;
	virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

	class WorldContext;
	class NodeContext;
	class NodeexamineContext;
	class NodeworldobjectlistContext;
	class NodeworldobjectiterationContext;
	class NodeworldobjectContext;
	class ConnectionContext;
	class Node1Context;
	class Node2Context;
	class ConnectionstatusContext;
	class ExamineclosedContext;
	class ExamineopenContext;
	class KeyidContext;

	class  WorldContext : public antlr4::ParserRuleContext {
	public:
		WorldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		virtual size_t getRuleIndex() const override;
		std::vector<NodeContext *> node();
		NodeContext* node(size_t i);
		std::vector<ConnectionContext *> connection();
		ConnectionContext* connection(size_t i);

		virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
		virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

		virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
	};

	WorldContext* world();

	class  NodeContext : public antlr4::ParserRuleContext {
	public:
		NodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode *NODE();
		antlr4::tree::TerminalNode *ID();
		antlr4::tree::TerminalNode *LCB();
		NodeexamineContext *nodeexamine();
		antlr4::tree::TerminalNode *CM();
		NodeworldobjectlistContext *nodeworldobjectlist();
		antlr4::tree::TerminalNode *RCB();

		virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
		virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

		virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
	};

	NodeContext* node();

	class  NodeexamineContext : public antlr4::ParserRuleContext {
	public:
		NodeexamineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode *STRING();

		virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
		virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

		virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
	};

	NodeexamineContext* nodeexamine();

	class  NodeworldobjectlistContext : public antlr4::ParserRuleContext {
	public:
		NodeworldobjectlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode *LCB();
		NodeworldobjectiterationContext *nodeworldobjectiteration();
		antlr4::tree::TerminalNode *RCB();

		virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
		virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

		virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
	};

	NodeworldobjectlistContext* nodeworldobjectlist();

	class  NodeworldobjectiterationContext : public antlr4::ParserRuleContext {
	public:
		NodeworldobjectiterationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		virtual size_t getRuleIndex() const override;
		std::vector<NodeworldobjectContext *> nodeworldobject();
		NodeworldobjectContext* nodeworldobject(size_t i);

		virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
		virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

		virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
	};

	NodeworldobjectiterationContext* nodeworldobjectiteration();

	class  NodeworldobjectContext : public antlr4::ParserRuleContext {
	public:
		NodeworldobjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode *STRING();

		virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
		virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

		virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
	};

	NodeworldobjectContext* nodeworldobject();

	class  ConnectionContext : public antlr4::ParserRuleContext {
	public:
		ConnectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode *CONNECTION();
		antlr4::tree::TerminalNode *LCB();
		Node1Context *node1();
		std::vector<antlr4::tree::TerminalNode *> CM();
		antlr4::tree::TerminalNode* CM(size_t i);
		Node2Context *node2();
		ConnectionstatusContext *connectionstatus();
		ExamineclosedContext *examineclosed();
		ExamineopenContext *examineopen();
		KeyidContext *keyid();
		antlr4::tree::TerminalNode *RCB();

		virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
		virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

		virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
	};

	ConnectionContext* connection();

	class  Node1Context : public antlr4::ParserRuleContext {
	public:
		Node1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode *STRING();

		virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
		virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

		virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
	};

	Node1Context* node1();

	class  Node2Context : public antlr4::ParserRuleContext {
	public:
		Node2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode *STRING();

		virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
		virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

		virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
	};

	Node2Context* node2();

	class  ConnectionstatusContext : public antlr4::ParserRuleContext {
	public:
		ConnectionstatusContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode *INT();

		virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
		virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

		virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
	};

	ConnectionstatusContext* connectionstatus();

	class  ExamineclosedContext : public antlr4::ParserRuleContext {
	public:
		ExamineclosedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode *STRING();

		virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
		virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

		virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
	};

	ExamineclosedContext* examineclosed();

	class  ExamineopenContext : public antlr4::ParserRuleContext {
	public:
		ExamineopenContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode *STRING();

		virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
		virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

		virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
	};

	ExamineopenContext* examineopen();

	class  KeyidContext : public antlr4::ParserRuleContext {
	public:
		KeyidContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode *STRING();

		virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
		virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

		virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
	};

	KeyidContext* keyid();

private:
	static std::vector<antlr4::dfa::DFA> _decisionToDFA;
	static antlr4::atn::PredictionContextCache _sharedContextCache;
	static std::vector<std::string> _ruleNames;
	static std::vector<std::string> _tokenNames;

	static std::vector<std::string> _literalNames;
	static std::vector<std::string> _symbolicNames;
	static antlr4::dfa::Vocabulary _vocabulary;
	static antlr4::atn::ATN _atn;
	static std::vector<uint16_t> _serializedATN;

	struct Initializer {
		Initializer();
	};
	static Initializer _init;
};
