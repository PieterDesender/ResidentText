#pragma once

//#include <string>
//#include<iostream>

#include "../Enumeration.h"
#include"../Managers/GameManager.h"
//#include"../GameObjects/Player.h"

using namespace std;

class Item
{
public:
	Item(string itemId, ItemType type) : m_ItemId(itemId), m_ItemType(type) {}
	~Item() {};

	int GetItemWeight() const { return m_ItemWeight; }
	void SetItemWeight(int weight) { m_ItemWeight = weight; }

	string GetItemExamineResponce() const { return m_ItemExamineResponce; }
	void SetItmeExamineResponce(string responce) { m_ItemExamineResponce = responce; }

	string GetItemId() const { return m_ItemId; }

	bool UseItem() const;

	ItemType GetItemtype() const { return m_ItemType; }

private:
	int m_ItemWeight = 0;
	string m_ItemExamineResponce = "";
	string m_ItemId;
	ItemType m_ItemType;

	void UseRedHerb() const;
	float m_RedHerbAmount = 10.0f;

	void UseGreenHerb() const;
	float m_GreenHerbAmount = 20.0f;

	void UseYellowHerb() const;
};
