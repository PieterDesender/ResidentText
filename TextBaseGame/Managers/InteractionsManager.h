#pragma once

#include"../Singleton.h"

//#include<string>

#include "antlr4-runtime.h"

using namespace antlr4;
using namespace std;

class InteractionsManager : public Singleton<InteractionsManager>
{
public:
	void Interaction(string userInput);

private:
	friend class Singleton<InteractionsManager>;
	InteractionsManager() {};
	~InteractionsManager() {};
};
