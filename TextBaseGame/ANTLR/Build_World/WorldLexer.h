// Generated from World.g4 by ANTLR 4.6

#pragma once

#include "antlr4-runtime.h"

class  WorldLexer : public antlr4::Lexer {
public:
	enum {
		CONNECTION = 1, NODE = 2, LCB = 3, RCB = 4, EQ = 5, SC = 6, CM = 7,
		ID = 8, STRING = 9, INT = 10, WS = 11, SPACE = 12
	};

	WorldLexer(antlr4::CharStream *input);
	~WorldLexer();

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
