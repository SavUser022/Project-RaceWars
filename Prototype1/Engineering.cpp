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
	const int spends;
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
	money =  factories * 1.5;
	return money;
	return 0.0;
}

double Engineering::costSector()
{
	money - factories * 0.5 ;
	return money;
}
