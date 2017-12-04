// Generated from World.g4 by ANTLR 4.6

#include "WorldLexer.h"

using namespace antlr4;

WorldLexer::WorldLexer(CharStream *input) : Lexer(input) {
	_interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

WorldLexer::~WorldLexer() {
	delete _interpreter;
}

std::string WorldLexer::getGrammarFileName() const {
	return "World.g4";
}

const std::vector<std::string>& WorldLexer::getRuleNames() const {
	return _ruleNames;
}

const std::vector<std::string>& WorldLexer::getModeNames() const {
	return _modeNames;
}

const std::vector<std::string>& WorldLexer::getTokenNames() const {
	return _tokenNames;
}

dfa::Vocabulary& WorldLexer::getVocabulary() const {
	return _vocabulary;
}

const std::vector<uint16_t> WorldLexer::getSerializedATN() const {
	return _serializedATN;
}

const atn::ATN& WorldLexer::getATN() const {
	return _atn;
}

// Static vars and initialization.
std::vector<dfa::DFA> WorldLexer::_decisionToDFA;
atn::PredictionContextCache WorldLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN WorldLexer::_atn;
std::vector<uint16_t> WorldLexer::_serializedATN;

std::vector<std::string> WorldLexer::_ruleNames = {
  "CONNECTION", "NODE", "LCB", "RCB", "EQ", "SC", "CM", "ID", "STRING",
  "INT", "WS", "SPACE"
};

std::vector<std::string> WorldLexer::_modeNames = {
  "DEFAULT_MODE"
};

std::vector<std::string> WorldLexer::_literalNames = {
  "", "'connection'", "'node'", "'{'", "'}'", "'='", "';'", "','", "", "",
  "", "", "' '"
};

std::vector<std::string> WorldLexer::_symbolicNames = {
  "", "CONNECTION", "NODE", "LCB", "RCB", "EQ", "SC", "CM", "ID", "STRING",
  "INT", "WS", "SPACE"
};

dfa::Vocabulary WorldLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> WorldLexer::_tokenNames;

WorldLexer::Initializer::Initializer() {
	// This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
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
	  0x2, 0xe, 0x58, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4,
	  0x4, 0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9,
	  0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4,
	  0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x3, 0x2, 0x3,
	  0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3,
	  0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3,
	  0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3,
	  0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x38,
	  0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x3b, 0xb, 0x9, 0x3, 0xa, 0x3, 0xa, 0x7,
	  0xa, 0x3f, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x42, 0xb, 0xa, 0x3, 0xa, 0x3,
	  0xa, 0x3, 0xb, 0x5, 0xb, 0x47, 0xa, 0xb, 0x3, 0xb, 0x6, 0xb, 0x4a, 0xa,
	  0xb, 0xd, 0xb, 0xe, 0xb, 0x4b, 0x3, 0xc, 0x6, 0xc, 0x4f, 0xa, 0xc, 0xd,
	  0xc, 0xe, 0xc, 0x50, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd,
	  0x3, 0xd, 0x2, 0x2, 0xe, 0x3, 0x3, 0x5, 0x4, 0x7, 0x5, 0x9, 0x6, 0xb,
	  0x7, 0xd, 0x8, 0xf, 0x9, 0x11, 0xa, 0x13, 0xb, 0x15, 0xc, 0x17, 0xd,
	  0x19, 0xe, 0x3, 0x2, 0x8, 0x4, 0x2, 0x43, 0x5c, 0x63, 0x7c, 0x6, 0x2,
	  0x32, 0x3b, 0x43, 0x5c, 0x61, 0x61, 0x63, 0x7c, 0x3, 0x2, 0x24, 0x24,
	  0x4, 0x2, 0x2d, 0x2d, 0x2f, 0x2f, 0x3, 0x2, 0x32, 0x3b, 0x5, 0x2, 0xb,
	  0xc, 0xf, 0xf, 0x22, 0x22, 0x5c, 0x2, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2,
	  0x5, 0x3, 0x2, 0x2, 0x2, 0x2, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2, 0x9, 0x3,
	  0x2, 0x2, 0x2, 0x2, 0xb, 0x3, 0x2, 0x2, 0x2, 0x2, 0xd, 0x3, 0x2, 0x2,
	  0x2, 0x2, 0xf, 0x3, 0x2, 0x2, 0x2, 0x2, 0x11, 0x3, 0x2, 0x2, 0x2, 0x2,
	  0x13, 0x3, 0x2, 0x2, 0x2, 0x2, 0x15, 0x3, 0x2, 0x2, 0x2, 0x2, 0x17,
	  0x3, 0x2, 0x2, 0x2, 0x2, 0x19, 0x3, 0x2, 0x2, 0x2, 0x3, 0x1b, 0x3, 0x2,
	  0x2, 0x2, 0x5, 0x26, 0x3, 0x2, 0x2, 0x2, 0x7, 0x2b, 0x3, 0x2, 0x2, 0x2,
	  0x9, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xb, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xd, 0x31,
	  0x3, 0x2, 0x2, 0x2, 0xf, 0x33, 0x3, 0x2, 0x2, 0x2, 0x11, 0x35, 0x3,
	  0x2, 0x2, 0x2, 0x13, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x15, 0x46, 0x3, 0x2,
	  0x2, 0x2, 0x17, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x19, 0x54, 0x3, 0x2, 0x2,
	  0x2, 0x1b, 0x1c, 0x7, 0x65, 0x2, 0x2, 0x1c, 0x1d, 0x7, 0x71, 0x2, 0x2,
	  0x1d, 0x1e, 0x7, 0x70, 0x2, 0x2, 0x1e, 0x1f, 0x7, 0x70, 0x2, 0x2, 0x1f,
	  0x20, 0x7, 0x67, 0x2, 0x2, 0x20, 0x21, 0x7, 0x65, 0x2, 0x2, 0x21, 0x22,
	  0x7, 0x76, 0x2, 0x2, 0x22, 0x23, 0x7, 0x6b, 0x2, 0x2, 0x23, 0x24, 0x7,
	  0x71, 0x2, 0x2, 0x24, 0x25, 0x7, 0x70, 0x2, 0x2, 0x25, 0x4, 0x3, 0x2,
	  0x2, 0x2, 0x26, 0x27, 0x7, 0x70, 0x2, 0x2, 0x27, 0x28, 0x7, 0x71, 0x2,
	  0x2, 0x28, 0x29, 0x7, 0x66, 0x2, 0x2, 0x29, 0x2a, 0x7, 0x67, 0x2, 0x2,
	  0x2a, 0x6, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2c, 0x7, 0x7d, 0x2, 0x2, 0x2c,
	  0x8, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x7, 0x7f, 0x2, 0x2, 0x2e, 0xa,
	  0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 0x7, 0x3f, 0x2, 0x2, 0x30, 0xc, 0x3,
	  0x2, 0x2, 0x2, 0x31, 0x32, 0x7, 0x3d, 0x2, 0x2, 0x32, 0xe, 0x3, 0x2,
	  0x2, 0x2, 0x33, 0x34, 0x7, 0x2e, 0x2, 0x2, 0x34, 0x10, 0x3, 0x2, 0x2,
	  0x2, 0x35, 0x39, 0x9, 0x2, 0x2, 0x2, 0x36, 0x38, 0x9, 0x3, 0x2, 0x2,
	  0x37, 0x36, 0x3, 0x2, 0x2, 0x2, 0x38, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x39,
	  0x37, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x12,
	  0x3, 0x2, 0x2, 0x2, 0x3b, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x40, 0x7,
	  0x24, 0x2, 0x2, 0x3d, 0x3f, 0xa, 0x4, 0x2, 0x2, 0x3e, 0x3d, 0x3, 0x2,
	  0x2, 0x2, 0x3f, 0x42, 0x3, 0x2, 0x2, 0x2, 0x40, 0x3e, 0x3, 0x2, 0x2,
	  0x2, 0x40, 0x41, 0x3, 0x2, 0x2, 0x2, 0x41, 0x43, 0x3, 0x2, 0x2, 0x2,
	  0x42, 0x40, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 0x7, 0x24, 0x2, 0x2, 0x44,
	  0x14, 0x3, 0x2, 0x2, 0x2, 0x45, 0x47, 0x9, 0x5, 0x2, 0x2, 0x46, 0x45,
	  0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 0x3, 0x2, 0x2, 0x2, 0x47, 0x49, 0x3,
	  0x2, 0x2, 0x2, 0x48, 0x4a, 0x9, 0x6, 0x2, 0x2, 0x49, 0x48, 0x3, 0x2,
	  0x2, 0x2, 0x4a, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x49, 0x3, 0x2, 0x2,
	  0x2, 0x4b, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x16, 0x3, 0x2, 0x2, 0x2,
	  0x4d, 0x4f, 0x9, 0x7, 0x2, 0x2, 0x4e, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4f,
	  0x50, 0x3, 0x2, 0x2, 0x2, 0x50, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51,
	  0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x8,
	  0xc, 0x2, 0x2, 0x53, 0x18, 0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x7, 0x22,
	  0x2, 0x2, 0x55, 0x56, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x8, 0xd, 0x2,
	  0x2, 0x57, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x8, 0x2, 0x39, 0x40, 0x46, 0x4b,
	  0x50, 0x3, 0x8, 0x2, 0x2,
	};

	atn::ATNDeserializer deserializer;
	_atn = deserializer.deserialize(_serializedATN);

	size_t count = _atn.getNumberOfDecisions();
	_decisionToDFA.reserve(count);
	for (size_t i = 0; i < count; i++) {
		_decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
	}
}

WorldLexer::Initializer WorldLexer::_init;