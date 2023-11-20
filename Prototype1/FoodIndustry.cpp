#include "framework.h"
#include "FoodIndustry.h"

FoodIndustry::FoodIndustry() : Economy()
{
}
FoodIndustry::FoodIndustry(std::string sector, double workers, double money, double factories) 
	: Economy(sector, workers, money, factories)
{

}
FoodIndustry::FoodIndustry(const FoodIndustry& item)
{
	this->sector = item.sector;
	this->factories = item.factories;
	this->money = item.money;
	this->workers = item.workers;
}

FoodIndustry::~FoodIndustry()
{}

double FoodIndustry::fundSector()
{
	const int spends;
	money - spends;
	factories = spends * 0.75;
	return factories;
}

double FoodIndustry::shortenSector()
{
	money - 0.7;
	factories - 10;
	return factories;
}

double FoodIndustry::income()
{
	money = factories * 1.4;
	return money;
}

double FoodIndustry::costSector()
{
	money - factories * 0.7;
	return money;
}
