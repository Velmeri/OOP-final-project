#include "Timer.h"

Timer::Timer(int t)
{
	start = time(0);
	finish = t;
}
int Timer::GetTime() const
{
	return time(0) - start;
}

Timer::operator bool() const
{
	if ((time(0) - start) >= finish)
		return 1;
	return 0;
}
