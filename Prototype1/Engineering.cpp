#include "framework.h"
#include "Engineering.h"
#include "Economy.h"

Engineering::Engineering() :  Economy()
{}

Engineering::Engineering(std::string sector, double workers, double money, double factories)
	: Economy(sector, workers, money, factories)
{}

Engineering::~Engineering()
{}

Engineering::Engineering(const Engineering& item)
{
	this->sector = item.sector;
	this->factories = item.factories;
	this->money = item.money;
	this->workers = item.workers;
}

double Engineering::fundSector()
{
	//const int spends = 10;
	money - spends;
	factories = spends * 1;
	return factories;
}

double Engineering::shortenSector()
{
	money - 1;
	factories - 10;
	return factories;
}

double Engineering::income()
{
	double cash = 100 / factories * 3;
	//int time = 5;

	while (true) {
		// -> Натуральне скорочення населення
		money += cash;
		std::this_thread::sleep_for(std::chrono::minutes(time));
	};
}

double Engineering::costSector()
{
	double cash = 100 / factories * 3;
	//int time = 5;

	while (true) {
		// -> Натуральне скорочення населення
		money += cash;
		std::this_thread::sleep_for(std::chrono::minutes(time));
	};
}

std::string Engineering::getSector()
{
	return sector;
}

int Engineering::getId()
{
	return id;
}

double Engineering::getWorkers()
{
	return workers;
}

double Engineering::getMoney()
{
	return money;
}

double Engineering::getFactories()
{
	return factories;
}
