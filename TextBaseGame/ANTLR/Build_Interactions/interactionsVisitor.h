
// Generated from interactions.g4 by ANTLR 4.6

#pragma once


#include "antlr4-runtime.h"
#include "interactionsParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by interactionsParser.
 */
class  interactionsVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by interactionsParser.
   */
    virtual antlrcpp::Any visitInteractions(interactionsParser::InteractionsContext *context) = 0;

    virtual antlrcpp::Any visitMoveto(interactionsParser::MovetoContext *context) = 0;

    virtual antlrcpp::Any visitLook(interactionsParser::LookContext *context) = 0;

    virtual antlrcpp::Any visitExamineobject(interactionsParser::ExamineobjectContext *context) = 0;

    virtual antlrcpp::Any visitExaminedoor(interactionsParser::ExaminedoorContext *context) = 0;

    virtual antlrcpp::Any visitSearchobject(interactionsParser::SearchobjectContext *context) = 0;

    virtual antlrcpp::Any visitInventoryshow(interactionsParser::InventoryshowContext *context) = 0;

    virtual antlrcpp::Any visitPickupitem(interactionsParser::PickupitemContext *context) = 0;

    virtual antlrcpp::Any visitDropitem(interactionsParser::DropitemContext *context) = 0;

    virtual antlrcpp::Any visitUseitem(interactionsParser::UseitemContext *context) = 0;

    virtual antlrcpp::Any visitStatusself(interactionsParser::StatusselfContext *context) = 0;

    virtual antlrcpp::Any visitInventoryexamine(interactionsParser::InventoryexamineContext *context) = 0;

    virtual antlrcpp::Any visitUsekey(interactionsParser::UsekeyContext *context) = 0;


};

