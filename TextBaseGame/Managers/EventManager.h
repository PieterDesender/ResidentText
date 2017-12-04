#pragma once

#include <vector>
//#include <algorithm>
#include <functional>

#include "../Singleton.h"

using namespace std;

class EventManager : public Singleton<EventManager>
{
public:
	bool AddEvents();
	void AddEvent(function<void()> eventAction, function<bool()> eventCondition, bool startState);
	void CheckAndRunEvents();

private:
	vector<bool> m_VecEventState;
	vector<function<bool()>> m_VecEventConditions;
	vector<function<void()>> m_VecEventActions;

	friend class Singleton<EventManager>;
	EventManager() {};
	~EventManager();
};
