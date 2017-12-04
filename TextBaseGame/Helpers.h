#pragma once
#include <windows.h>

inline float GetRandomFloat(float min, float max) {
	return min + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (max - min)));
}
inline int GetRandomInt(int min, int max) {
	return min + (rand() % static_cast<int>(max - min + 1));
}

inline void DelayPrint(const string &txt, DWORD countDelay = 25) {
	for (size_t i = 0; i < txt.length(); i++)
	{
		cout << txt[i];
		Sleep(countDelay);
	}
}