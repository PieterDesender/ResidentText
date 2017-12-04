// Generated from items.g4 by ANTLR 4.6

#pragma once

#include "antlr4-runtime.h"

class  itemsParser : public antlr4::Parser {
public:
	enum {
		ITEM = 1, LCB = 2, RCB = 3, EQ = 4, SC = 5, CM = 6, ID = 7, STRING = 8,
		INT = 9, WS = 10, SPACE = 11
	};

	enum {
		RuleItems = 0, RuleItem = 1, RuleItemtype = 2, RuleItemweight = 3, RuleItemexamine = 4,
		RuleValue = 5
	};

	itemsParser(antlr4::TokenStream *input);
	~itemsParser();

	virtual std::string getGrammarFileName() const override;
	virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
	virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
	virtual const std::vector<std::string>& getRuleNames() const override;
	virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

	class ItemsContext;
	class ItemContext;
	class ItemtypeContext;
	class ItemweightContext;
	class ItemexamineContext;
	class ValueContext;

	class  ItemsContext : public antlr4::ParserRuleContext {
	public:
		ItemsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		virtual size_t getRuleIndex() const override;
		std::vector<ItemContext *> item();
		ItemContext* item(size_t i);

		virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
		virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

		virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
	};

	ItemsContext* items();

	class  ItemContext : public antlr4::ParserRuleContext {
	public:
		ItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode *ITEM();
		antlr4::tree::TerminalNode *ID();
		antlr4::tree::TerminalNode *LCB();
		ItemweightContext *itemweight();
		std::vector<antlr4::tree::TerminalNode *> CM();
		antlr4::tree::TerminalNode* CM(size_t i);
		ItemtypeContext *itemtype();
		ItemexamineContext *itemexamine();
		antlr4::tree::TerminalNode *RCB();

		virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
		virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

		virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
	};

	ItemContext* item();

	class  ItemtypeContext : public antlr4::ParserRuleContext {
	public:
		ItemtypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode *INT();

		virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
		virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

		virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
	};

	ItemtypeContext* itemtype();

	class  ItemweightContext : public antlr4::ParserRuleContext {
	public:
		ItemweightContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode *INT();

		virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
		virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

		virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
	};

	ItemweightContext* itemweight();

	class  ItemexamineContext : public antlr4::ParserRuleContext {
	public:
		ItemexamineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode *STRING();

		virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
		virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

		virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
	};

	ItemexamineContext* itemexamine();

	class  ValueContext : public antlr4::ParserRuleContext {
	public:
		ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
		virtual size_t getRuleIndex() const override;
		antlr4::tree::TerminalNode *STRING();
		antlr4::tree::TerminalNode *INT();

		virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
		virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

		virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
	};

	ValueContext* value();

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
