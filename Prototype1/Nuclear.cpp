#include "framework.h"
#include "Nuclear.h"

Nuclear::Nuclear() : Economy(), mutants(0)
{
}

Nuclear::Nuclear(std::string sector, double workers, double money, double mutants)  
	: Economy(sector, workers, money, mutants), mutants(mutants)
{}

Nuclear::Nuclear(const Nuclear& item)
{
	this->sector = item.sector;
	this->factories = item.factories;
	this->money = item.money;
	this->workers = item.workers;
	this->mutants = item.mutants;
}

Nuclear::~Nuclear()
{}

double Nuclear::StripingReactors()
{
	int killmutants;
	killmutants = money * 0.001;
	mutants - killmutants;
	return mutants;
}

double Nuclear::fundSector()
{
	int spends;
	money - spends;
	factories = spends * 0.1;
	return factories;
	
}

double Nuclear::shortenSector()
{
	money - 10;
	factories - 10;
	return factories;
}

double Nuclear::income()
{
	money = factories * 10;
	return money;
}

double Nuclear::costSector()
{
	money - factories * 2.5;
	return money;
	
}
