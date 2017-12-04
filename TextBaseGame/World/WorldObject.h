#pragma once

#include<string>

class Inventory;

using namespace std;

class WorldObject
{
public:
	WorldObject(string ObjectId);
	~WorldObject();

	void SetObjectName(string objectName) { m_ObjectName = objectName; }
	string GetObjectName() { return m_ObjectName; }

	string GetObjectId() { return m_ObjectId; }

	string GetExamineResponce() { return m_ExamineResponce; }
	void SetExamineResponce(string examineResponce) { m_ExamineResponce = examineResponce; }

	Inventory* GetInventory() { return m_pInventory; }

private:
	string m_ObjectId = "";
	string m_ObjectName = "";
	string m_ExamineResponce = "";

	Inventory* m_pInventory = nullptr;
};
