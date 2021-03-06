// Generated from items.g4 by ANTLR 4.6

#pragma once

#include "antlr4-runtime.h"

class  itemsLexer : public antlr4::Lexer {
public:
	enum {
		ITEM = 1, LCB = 2, RCB = 3, EQ = 4, SC = 5, CM = 6, ID = 7, STRING = 8,
		INT = 9, WS = 10, SPACE = 11
	};

	itemsLexer(antlr4::CharStream *input);
	~itemsLexer();

	virtual std::string getGrammarFileName() const override;
	virtual const std::vector<std::string>& getRuleNames() const override;

	virtual const std::vector<std::string>& getModeNames() const override;
	virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
	virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

	virtual const std::vector<uint16_t> getSerializedATN() const override;
	virtual const antlr4::atn::ATN& getATN() const override;

private:
	static std::vector<antlr4::dfa::DFA> _decisionToDFA;
	static antlr4::atn::PredictionContextCache _sharedContextCache;
	static std::vector<std::string> _ruleNames;
	static std::vector<std::string> _tokenNames;
	static std::vector<std::string> _modeNames;

	static std::vector<std::string> _literalNames;
	static std::vector<std::string> _symbolicNames;
	static antlr4::dfa::Vocabulary _vocabulary;
	static antlr4::atn::ATN _atn;
	static std::vector<uint16_t> _serializedATN;

	// Individual action functions triggered by action() above.

	// Individual semantic predicate functions triggered by sempred() above.

	struct Initializer {
		Initializer();
	};
	static Initializer _init;
};
