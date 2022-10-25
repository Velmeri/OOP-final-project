#pragma once
#include <time.h>

class Stopwatch
{
	time_t start;
public:
	Stopwatch() { start = time(0); }

	int GetTime() const;
};

