#pragma once
#include "States.h"
class QuasiState : public States
{
	int independenceDegree;
public:
	QuasiState();
	QuasiState(int pop, int dip, int indDegree);
	~QuasiState();
	int getIndependenceDegree() const;
	void setIndependenceDegree(int indDegree);
	void changeIndependenceDegree(int change);
};

