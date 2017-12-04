#pragma once

#include"../Structs.h"
#include"../Items/Item.h"
//#include"ItemFactory.h"
#include"../Managers/ItemManager.h"

#include<map>
//#include<string>
//#include<limits>
//#include<cstddef>
//#include<algorithm>

using namespace std;

class Inventory
{
public:
	Inventory(int maxInventoryWeight = 0, bool weightDependant = false);
	~Inventory();

	bool ReduceItem(string itemId, int amount = 1);
	bool AddItem(string itemId, int amount = 1);
	bool IsAbleToAddWeight(int itemWeight = 1) const;

	int GetItemCount() const { return m_CurrentItemCount; }
	int GetMaxInventoryWeight() const { return m_MaxInventoryWeight; }
	int GetInventoryWeight() const { return m_CurrentInventoryWeight; }

	ItemPtrAmount GetItemPair(string itemId) { return m_MapInventory[itemId]; }
	map<string, ItemPtrAmount> GetItemMap() const { return m_MapInventory; }

private:
	void CalculateWeight();

	bool m_WeightDependant;
	map<string, ItemPtrAmount> m_MapInventory;
	int m_MaxInventoryWeight;
	int m_CurrentInventoryWeight = 0;
	int m_CurrentItemCount = 0;
};
