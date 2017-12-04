#include "InteractionsManager.h"
#include "../ANTLR/Build_Interactions/interactionsVisitor.h"
#include "../ANTLR/Build_Interactions/interactionsLexer.h"
#include "../ANTLR/Build_Interactions/MyinteractionsVisitor.h"

void InteractionsManager::Interaction(string userInput)
{
	ANTLRInputStream input(userInput);
	interactionsLexer lexer(&input);
	CommonTokenStream tokens(&lexer);
	interactionsParser parser(&tokens);
	tree::ParseTree* tree = parser.interactions();
	interactionsVisitor* visitor = new MyinteractionsVisitor();
	visitor->visit(tree);
	tree->~ParseTree();
	delete visitor;
}