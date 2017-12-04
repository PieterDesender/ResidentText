#include "EventManager.h"

#include "../Events/EventActions.h"
#include "../Events/EventConditions.h"

bool EventManager::AddEvents()
{
	AddEvent(bind(eventActions::ExaminedWindowFrontPorch), bind(EventConditons::ExaminedWindowFrontPorch), true);
	AddEvent(bind(eventActions::EnteredKitchen), bind(EventConditons::EnteredKitchen), true);
	AddEvent(bind(eventActions::EnteredHallwaySouthFirst), bind(EventConditons::EnteredHallwaySouthFirst), true);
	AddEvent(bind(eventActions::SearchedLivingRoomTable), bind(EventConditons::SearchedLivingRoomTable), true);
	AddEvent(bind(eventActions::SearchedHiddenPainting), bind(EventConditons::SearchedHiddenPainting), true);
	AddEvent(bind(eventActions::SearchedGarageBag), bind(EventConditons::SearchedGarageBag), true);
	AddEvent(bind(eventActions::SearchedBookCase), bind(EventConditons::SearchedBookCase), true);
	AddEvent(bind(eventActions::SearchedComputer), bind(EventConditons::SearchedComputer), true);
	AddEvent(bind(eventActions::SearchedBathtub), bind(EventConditons::SearchedBathtub), true);

	AddEvent(bind(eventActions::EnteredBackjard), bind(EventConditons::EnteredBackjard), true);

	return true;
}

void EventManager::AddEvent(function<void()> eventAction, function<bool()> eventCondition, bool startState)
{
	m_VecEventActions.push_back(eventAction);
	m_VecEventConditions.push_back(eventCondition);
	m_VecEventState.push_back(startState);
}

void EventManager::CheckAndRunEvents()
{
	for (int i = 0; i < m_VecEventState.size(); ++i) {
		if (!m_VecEventState[i])
			continue;

		if (!m_VecEventConditions[i]())
			continue;

		m_VecEventActions[i]();
		m_VecEventState[i] = false;
	}
}

EventManager::~EventManager()
{
	m_VecEventActions.clear();
	m_VecEventConditions.clear();
}