#pragma once
#include "States.h"
class Colony : public States
{
	int developmentLevel;
public:
	Colony();
	Colony(int pop, int dip, int devLevel);
	~Colony();
	int getDevelopmentLevel() const;
	void setDevelopmentLevel(int devLevel);
	
};

