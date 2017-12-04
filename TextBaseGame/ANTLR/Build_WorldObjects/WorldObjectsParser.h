// Generated from WorldObjects.g4 by ANTLR 4.6

#pragma once

#include "antlr4-runtime.h"

class  WorldObjectsParser : public antlr4::Parser {
public:
	enum {
		WORLDOBJECT = 1, LCB = 2, RCB = 3, EQ = 4, SC = 5, CM = 6, ID = 7, STRING = 8,
		INT = 9, WS = 10, SPACE = 11
	};

	enum {
		RuleWorldobjects = 0, RuleWorldobject = 1, RuleWorldobjectname = 2,
		RuleWorldobjectexamine = 3, RuleWorldobjectitemlist = 4, RuleWorldobjectitemiteration = 5,
		RuleWorldobjectitem = 6
	};

	WorldObjectsParser(antlr4::TokenStream *input);
	~WorldObjectsParser();

	virtual std::string getGrammarFileName() const override;
	virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
	virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
	virtual const std::vector<std::string>& getRuleNames() const override;
	virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

	class WorldobjectsContext;
	class WorldobjectContext;
	class WorldobjectnameContext;
	class WorldobjectexamineContext;
	class WorldobjectitemlistContext;
	class WorldobjectitemiterationContext;
	class WorldobjectitemContext;

	class  WorldobjectsContext : public antlr4::ParserRuleContext {
	public:
		WorldobjectsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		virtual size_t getRuleIndex() const override;
		std::vector<WorldobjectContext *> worldobject();
		WorldobjectContext* worldobject(size_t i);

		virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
		virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

		virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
	};

	WorldobjectsContext* worldobjects();

	class  WorldobjectContext : public antlr4::ParserRuleContext {
	public:
		WorldobjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode *WORLDOBJECT();
		antlr4::tree::TerminalNode *ID();
		antlr4::tree::TerminalNode *LCB();
		WorldobjectnameContext *worldobjectname();
		std::vector<antlr4::tree::TerminalNode *> CM();
		antlr4::tree::TerminalNode* CM(size_t i);
		WorldobjectexamineContext *worldobjectexamine();
		WorldobjectitemlistContext *worldobjectitemlist();
		antlr4::tree::TerminalNode *RCB();

		virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
		virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

		virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
	};

	WorldobjectContext* worldobject();

	class  WorldobjectnameContext : public antlr4::ParserRuleContext {
	public:
		WorldobjectnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode *STRING();

		virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
		virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

		virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
	};

	WorldobjectnameContext* worldobjectname();

	class  WorldobjectexamineContext : public antlr4::ParserRuleContext {
	public:
		WorldobjectexamineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode *STRING();

		virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
		virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

		virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
	};

	WorldobjectexamineContext* worldobjectexamine();

	class  WorldobjectitemlistContext : public antlr4::ParserRuleContext {
	public:
		WorldobjectitemlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode *LCB();
		WorldobjectitemiterationContext *worldobjectitemiteration();
		antlr4::tree::TerminalNode *RCB();

		virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
		virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

		virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
	};

	WorldobjectitemlistContext* worldobjectitemlist();

	class  WorldobjectitemiterationContext : public antlr4::ParserRuleContext {
	public:
		WorldobjectitemiterationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		virtual size_t getRuleIndex() const override;
		std::vector<WorldobjectitemContext *> worldobjectitem();
		WorldobjectitemContext* worldobjectitem(size_t i);

		virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
		virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

		virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
	};

	WorldobjectitemiterationContext* worldobjectitemiteration();

	class  WorldobjectitemContext : public antlr4::ParserRuleContext {
	public:
		WorldobjectitemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode *STRING();

		virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
		virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

		virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
	};

	WorldobjectitemContext* worldobjectitem();

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
