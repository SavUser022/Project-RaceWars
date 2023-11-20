#include "framework.h"
#include "QuasiState.h"

QuasiState::QuasiState() : States(0, 0), independenceDegree(0)
{}

QuasiState::QuasiState(int pop, int dip, int indDegree) : States(pop, dip), independenceDegree(indDegree)
{}

QuasiState::~QuasiState()
{}

int QuasiState::getIndependenceDegree() const
{
	return independenceDegree; 
}

void QuasiState::setIndependenceDegree(int indDegree)
{
	independenceDegree = indDegree;
}

void QuasiState::changeIndependenceDegree(int change)
{
	independenceDegree += change; 
}
