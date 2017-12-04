#pragma once

#include "../Items/Item.h"
#include "../Singleton.h"
#include "../Enumeration.h"
//#include"../Singleton.h"

#include "antlr4-runtime.h"
//#include "../ANTLR/Build_Items/itemsLexer.h"
//#include "../ANTLR/Build_Items/itemsParser.h"
//#include "../ANTLR/Build_Items/itemsBaseListener.h"
//#include "../ANTLR/Build_Items/itemsBaseVisitor.h"
//#include "../ANTLR/Build_Items/MyItemsVisitor.h"

#include <map>
//#include <string>

using namespace antlr4;
using namespace std;

class ItemManager : public Singleton<ItemManager>
{
public:
	bool SetItemsToMap(string assetFile);

	Item* AddItem(string itemId, ItemType type);
	Item* GetItem(string itemId) { return m_MapItems[itemId]; }
	Item* GetLastAddedItem() const { return m_LastAddedItem; }

	map<string, Item*> GetItemMap() const { return m_MapItems; }

private:
	map<string, Item*>m_MapItems;
	Item* m_LastAddedItem = nullptr;

	friend class Singleton<ItemManager>;
	ItemManager();
	~ItemManager();
};
