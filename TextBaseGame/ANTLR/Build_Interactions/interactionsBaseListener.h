
// Generated from interactions.g4 by ANTLR 4.6

#pragma once


#include "antlr4-runtime.h"
#include "interactionsListener.h"


/**
 * This class provides an empty implementation of interactionsListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  interactionsBaseListener : public interactionsListener {
public:

  virtual void enterInteractions(interactionsParser::InteractionsContext * /*ctx*/) override { }
  virtual void exitInteractions(interactionsParser::InteractionsContext * /*ctx*/) override { }

  virtual void enterMoveto(interactionsParser::MovetoContext * /*ctx*/) override { }
  virtual void exitMoveto(interactionsParser::MovetoContext * /*ctx*/) override { }

  virtual void enterLook(interactionsParser::LookContext * /*ctx*/) override { }
  virtual void exitLook(interactionsParser::LookContext * /*ctx*/) override { }

  virtual void enterExamineobject(interactionsParser::ExamineobjectContext * /*ctx*/) override { }
  virtual void exitExamineobject(interactionsParser::ExamineobjectContext * /*ctx*/) override { }

  virtual void enterExaminedoor(interactionsParser::ExaminedoorContext * /*ctx*/) override { }
  virtual void exitExaminedoor(interactionsParser::ExaminedoorContext * /*ctx*/) override { }

  virtual void enterSearchobject(interactionsParser::SearchobjectContext * /*ctx*/) override { }
  virtual void exitSearchobject(interactionsParser::SearchobjectContext * /*ctx*/) override { }

  virtual void enterInventoryshow(interactionsParser::InventoryshowContext * /*ctx*/) override { }
  virtual void exitInventoryshow(interactionsParser::InventoryshowContext * /*ctx*/) override { }

  virtual void enterPickupitem(interactionsParser::PickupitemContext * /*ctx*/) override { }
  virtual void exitPickupitem(interactionsParser::PickupitemContext * /*ctx*/) override { }

  virtual void enterDropitem(interactionsParser::DropitemContext * /*ctx*/) override { }
  virtual void exitDropitem(interactionsParser::DropitemContext * /*ctx*/) override { }

  virtual void enterUseitem(interactionsParser::UseitemContext * /*ctx*/) override { }
  virtual void exitUseitem(interactionsParser::UseitemContext * /*ctx*/) override { }

  virtual void enterStatusself(interactionsParser::StatusselfContext * /*ctx*/) override { }
  virtual void exitStatusself(interactionsParser::StatusselfContext * /*ctx*/) override { }

  virtual void enterInventoryexamine(interactionsParser::InventoryexamineContext * /*ctx*/) override { }
  virtual void exitInventoryexamine(interactionsParser::InventoryexamineContext * /*ctx*/) override { }

  virtual void enterUsekey(interactionsParser::UsekeyContext * /*ctx*/) override { }
  virtual void exitUsekey(interactionsParser::UsekeyContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

