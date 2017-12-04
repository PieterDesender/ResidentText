
// Generated from interactions.g4 by ANTLR 4.6

#pragma once


#include "antlr4-runtime.h"
#include "interactionsParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by interactionsParser.
 */
class  interactionsListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterInteractions(interactionsParser::InteractionsContext *ctx) = 0;
  virtual void exitInteractions(interactionsParser::InteractionsContext *ctx) = 0;

  virtual void enterMoveto(interactionsParser::MovetoContext *ctx) = 0;
  virtual void exitMoveto(interactionsParser::MovetoContext *ctx) = 0;

  virtual void enterLook(interactionsParser::LookContext *ctx) = 0;
  virtual void exitLook(interactionsParser::LookContext *ctx) = 0;

  virtual void enterExamineobject(interactionsParser::ExamineobjectContext *ctx) = 0;
  virtual void exitExamineobject(interactionsParser::ExamineobjectContext *ctx) = 0;

  virtual void enterExaminedoor(interactionsParser::ExaminedoorContext *ctx) = 0;
  virtual void exitExaminedoor(interactionsParser::ExaminedoorContext *ctx) = 0;

  virtual void enterSearchobject(interactionsParser::SearchobjectContext *ctx) = 0;
  virtual void exitSearchobject(interactionsParser::SearchobjectContext *ctx) = 0;

  virtual void enterInventoryshow(interactionsParser::InventoryshowContext *ctx) = 0;
  virtual void exitInventoryshow(interactionsParser::InventoryshowContext *ctx) = 0;

  virtual void enterPickupitem(interactionsParser::PickupitemContext *ctx) = 0;
  virtual void exitPickupitem(interactionsParser::PickupitemContext *ctx) = 0;

  virtual void enterDropitem(interactionsParser::DropitemContext *ctx) = 0;
  virtual void exitDropitem(interactionsParser::DropitemContext *ctx) = 0;

  virtual void enterUseitem(interactionsParser::UseitemContext *ctx) = 0;
  virtual void exitUseitem(interactionsParser::UseitemContext *ctx) = 0;

  virtual void enterStatusself(interactionsParser::StatusselfContext *ctx) = 0;
  virtual void exitStatusself(interactionsParser::StatusselfContext *ctx) = 0;

  virtual void enterInventoryexamine(interactionsParser::InventoryexamineContext *ctx) = 0;
  virtual void exitInventoryexamine(interactionsParser::InventoryexamineContext *ctx) = 0;

  virtual void enterUsekey(interactionsParser::UsekeyContext *ctx) = 0;
  virtual void exitUsekey(interactionsParser::UsekeyContext *ctx) = 0;


};

