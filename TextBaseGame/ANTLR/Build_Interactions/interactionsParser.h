
// Generated from interactions.g4 by ANTLR 4.6

#pragma once


#include "antlr4-runtime.h"




class  interactionsParser : public antlr4::Parser {
public:
  enum {
    MOVEINTERACTION = 1, LOOKINTERACTION = 2, EXAMINEINTERACTION = 3, SEARCHINTERACTION = 4, 
    DOOR = 5, PICKUPINTERACTION = 6, USEITEMINTERACTION = 7, DROPITEMINTERACTION = 8, 
    INVENTORYINTERACTION = 9, ON = 10, STATUS = 11, USEKEYINTERACTION = 12, 
    SPACE = 13, STRING = 14, INT = 15
  };

  enum {
    RuleInteractions = 0, RuleMoveto = 1, RuleLook = 2, RuleExamineobject = 3, 
    RuleExaminedoor = 4, RuleSearchobject = 5, RuleInventoryshow = 6, RulePickupitem = 7, 
    RuleDropitem = 8, RuleUseitem = 9, RuleStatusself = 10, RuleInventoryexamine = 11, 
    RuleUsekey = 12
  };

  interactionsParser(antlr4::TokenStream *input);
  ~interactionsParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class InteractionsContext;
  class MovetoContext;
  class LookContext;
  class ExamineobjectContext;
  class ExaminedoorContext;
  class SearchobjectContext;
  class InventoryshowContext;
  class PickupitemContext;
  class DropitemContext;
  class UseitemContext;
  class StatusselfContext;
  class InventoryexamineContext;
  class UsekeyContext; 

  class  InteractionsContext : public antlr4::ParserRuleContext {
  public:
    InteractionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UsekeyContext *usekey();
    MovetoContext *moveto();
    LookContext *look();
    SearchobjectContext *searchobject();
    ExamineobjectContext *examineobject();
    ExaminedoorContext *examinedoor();
    PickupitemContext *pickupitem();
    UseitemContext *useitem();
    DropitemContext *dropitem();
    InventoryshowContext *inventoryshow();
    StatusselfContext *statusself();
    InventoryexamineContext *inventoryexamine();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InteractionsContext* interactions();

  class  MovetoContext : public antlr4::ParserRuleContext {
  public:
    MovetoContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MOVEINTERACTION();
    antlr4::tree::TerminalNode *SPACE();
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MovetoContext* moveto();

  class  LookContext : public antlr4::ParserRuleContext {
  public:
    LookContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOOKINTERACTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LookContext* look();

  class  ExamineobjectContext : public antlr4::ParserRuleContext {
  public:
    ExamineobjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXAMINEINTERACTION();
    antlr4::tree::TerminalNode *SPACE();
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExamineobjectContext* examineobject();

  class  ExaminedoorContext : public antlr4::ParserRuleContext {
  public:
    ExaminedoorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXAMINEINTERACTION();
    std::vector<antlr4::tree::TerminalNode *> SPACE();
    antlr4::tree::TerminalNode* SPACE(size_t i);
    antlr4::tree::TerminalNode *DOOR();
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExaminedoorContext* examinedoor();

  class  SearchobjectContext : public antlr4::ParserRuleContext {
  public:
    SearchobjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEARCHINTERACTION();
    antlr4::tree::TerminalNode *SPACE();
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SearchobjectContext* searchobject();

  class  InventoryshowContext : public antlr4::ParserRuleContext {
  public:
    InventoryshowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INVENTORYINTERACTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InventoryshowContext* inventoryshow();

  class  PickupitemContext : public antlr4::ParserRuleContext {
  public:
    PickupitemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PICKUPINTERACTION();
    antlr4::tree::TerminalNode *SPACE();
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PickupitemContext* pickupitem();

  class  DropitemContext : public antlr4::ParserRuleContext {
  public:
    DropitemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DROPITEMINTERACTION();
    antlr4::tree::TerminalNode *SPACE();
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DropitemContext* dropitem();

  class  UseitemContext : public antlr4::ParserRuleContext {
  public:
    UseitemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USEITEMINTERACTION();
    antlr4::tree::TerminalNode *SPACE();
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UseitemContext* useitem();

  class  StatusselfContext : public antlr4::ParserRuleContext {
  public:
    StatusselfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STATUS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatusselfContext* statusself();

  class  InventoryexamineContext : public antlr4::ParserRuleContext {
  public:
    InventoryexamineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INVENTORYINTERACTION();
    std::vector<antlr4::tree::TerminalNode *> SPACE();
    antlr4::tree::TerminalNode* SPACE(size_t i);
    antlr4::tree::TerminalNode *EXAMINEINTERACTION();
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InventoryexamineContext* inventoryexamine();

  class  UsekeyContext : public antlr4::ParserRuleContext {
  public:
    UsekeyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *USEKEYINTERACTION();
    antlr4::tree::TerminalNode *SPACE();
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UsekeyContext* usekey();


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

