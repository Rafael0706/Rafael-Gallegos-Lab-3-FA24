#ifndef STATSCALC_H
#define STATSCALC_H

class StatsCalc
{
public:
	StatsCalc() {};
	~StatsCalc() {};

	float mean(int x1, int x2, int x3, int x4);
	float std(int x1, int x2, int x3, int x4);

private:
	double meanstd;
};

#endif // !STATSCALC_H#pragma once
