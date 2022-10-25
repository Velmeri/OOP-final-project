#pragma once
#include <iostream>
#include <time.h>

class Timer
{
	bool clear = false;
	time_t start;
	int finish;
public:
	Timer(int time);

	int GetTime() const;

	operator bool() const;
};

