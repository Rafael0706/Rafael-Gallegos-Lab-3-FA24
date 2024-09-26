#include "StatsCalc.h"
#include <math.h>
float meanD = 4.0f;

float StatsCalc::mean(int x1, int x2, int x3, int x4)
{
	meanstd = (x1 + x2 + x3 + x4) / meanD;
	return (x1 + x2 + x3 + x4) / meanD;
}

float StatsCalc::std(int x1, int x2, int x3, int x4)
{
	return sqrt((pow(x1 - meanstd, 2) + pow(x2 - meanstd, 2) + pow(x3 - meanstd, 2) + pow(x4 - meanstd, 2))/meanD );
}
