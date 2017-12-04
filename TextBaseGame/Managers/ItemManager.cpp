#include "ItemManager.h"
#include "../ANTLR/Build_Items/itemsLexer.h"
#include "../ANTLR/Build_Items/itemsParser.h"
#include "../ANTLR/Build_Items/MyItemsVisitor.h"

ItemManager::ItemManager()
{}

ItemManager::~ItemManager()
{
	for each (pair<string, Item*> mapped in m_MapItems)
	{
		delete mapped.second;
	}
	m_MapItems.clear();
	m_LastAddedItem = nullptr;
}

bool ItemManager::SetItemsToMap(string assetFile)
{
	ifstream stream;
	stream.open(assetFile);
	if (stream.is_open()) {
		ANTLRInputStream input(stream);
		itemsLexer lexer(&input);
		CommonTokenStream tokens(&lexer);
		itemsParser parser(&tokens);
		tree::ParseTree* tree = parser.items();
		itemsVisitor* visitor = new MyItemsVisitor();
		visitor->visit(tree);
		stream.close();
		tree->~ParseTree();
		delete visitor;
		return true;
	}
	return false;
}

Item* ItemManager::AddItem(string itemId, ItemType type)
{
	m_MapItems[itemId] = new Item(itemId, type);
	m_LastAddedItem = m_MapItems[itemId];
	return m_LastAddedItem;
}