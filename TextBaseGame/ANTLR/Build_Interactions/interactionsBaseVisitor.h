
// Generated from interactions.g4 by ANTLR 4.6

#pragma once


#include "antlr4-runtime.h"
#include "interactionsVisitor.h"


/**
 * This class provides an empty implementation of interactionsVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  interactionsBaseVisitor : public interactionsVisitor {
public:

  virtual antlrcpp::Any visitInteractions(interactionsParser::InteractionsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMoveto(interactionsParser::MovetoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLook(interactionsParser::LookContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExamineobject(interactionsParser::ExamineobjectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExaminedoor(interactionsParser::ExaminedoorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSearchobject(interactionsParser::SearchobjectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInventoryshow(interactionsParser::InventoryshowContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPickupitem(interactionsParser::PickupitemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDropitem(interactionsParser::DropitemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUseitem(interactionsParser::UseitemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatusself(interactionsParser::StatusselfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInventoryexamine(interactionsParser::InventoryexamineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUsekey(interactionsParser::UsekeyContext *ctx) override {
    return visitChildren(ctx);
  }


};

