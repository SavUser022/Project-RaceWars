#include "framework.h"
#include "Nuclear.h"

Nuclear::Nuclear() : Economy()
{}

Nuclear::Nuclear(std::string sector, double workers, double money, double factories )  
	: Economy(sector, workers, money, factories)// mutants(mutants)
{}

Nuclear::Nuclear(const Nuclear& item)
{
	this->sector = item.sector;
	this->factories = item.factories;
	this->money = item.money;
	this->workers = item.workers;
}

Nuclear::~Nuclear()
{}
/*
double Nuclear::StripingReactors()
{
	int killmutants;

	killmutants = ;
	mutants - killmutants;
	return mutants;
}
*/
double Nuclear::fundSector()
{
	int const spends = 10;
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
	int time = 5;
	double cash = factories  * 2;
	while (true)
	{
		money += cash;
		std::this_thread::sleep_for(std::chrono::minutes(time));
	}
	return money;
}

double Nuclear::costSector()
{
	double costs = 100 /  factories * 25;
	int time = 5;

	while (true) {
		// -> Натуральне скорочення населення
		money += costs;
		std::this_thread::sleep_for(std::chrono::minutes(time));
	};
}

std::string Nuclear::getSector()
{
	return std::string();
}


double Nuclear::getWorkers()
{
	return workers;
}

double Nuclear::getMoney()
{
	return money;
}

double Nuclear::getFactories()
{
	return factories;
}
