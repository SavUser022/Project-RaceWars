#include "framework.h"
#include "Colony.h"

Colony::Colony() : States(0, 0), developmentLevel(0)
{}

Colony::Colony(int pop, int dip, int devLevel) : States(pop, dip), developmentLevel(devLevel)
{}

Colony::~Colony()
{}

int Colony::getDevelopmentLevel() const
{
	return developmentLevel; 
}

void Colony::setDevelopmentLevel(int devLevel)
{
	developmentLevel = devLevel; 
}

