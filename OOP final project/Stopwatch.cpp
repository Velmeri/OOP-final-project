#include "Stopwatch.h"

int Stopwatch::GetTime() const
{
	return time(0) - start;
}
