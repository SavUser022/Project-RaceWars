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
	//const int spends = 10;
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
	double cash = 100 / factories * 14;
	//int time = 5;

	while (true) {
		money += cash;
		std::this_thread::sleep_for(std::chrono::minutes(time));
	};
	return money;
}

double FoodIndustry::costSector()
{
	double cash = 100 / factories * 7;
	//int time = 5;

	while (true) {
		// -> Натуральне скорочення населення
		money += cash;
		std::this_thread::sleep_for(std::chrono::minutes(time));
	};
	return money;
}

std::string FoodIndustry::getSector()
{
	return sector;
}



double FoodIndustry::getWorkers()
{
	return workers;
}

double FoodIndustry::getMoney()
{
	return money;
}

double FoodIndustry::getFactories()
{
	return factories;
}
