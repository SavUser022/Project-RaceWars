#include "Race.h"
#include "framework.h"
#include "Race.h"
#include "Economy.h"

Race::Race() : Economy(), name("NONE"), population(1000), status(0), power(0), tax(0.001)
{
}

Race::Race(std::string name, double population, int status, int power, double tax) :
	Economy( sector, workers, money, factories)
{
}



Race::Race(const Race& item)
{
	this->tax = item.tax;
	this->name = item.name;
	this->population = item.population;
	this->power = item.power;
	this->status = item.status;

}

Race::~Race()
{

}



double Race::dynamicPopulation()
{

	double rising = 100 / population * 4;
	double downsizing = 100 / population * 3;
	int time = 5;

	while (true) {
		// -> Натуральне скорочення населення
		population += rising;
		std::this_thread::sleep_for(std::chrono::minutes(time));
	};
	while (true)
	{
		// -> Натуральне збільшення населення
		population -= downsizing;
		std::this_thread::sleep_for(std::chrono::minutes(time));
	}
}

double Race::genocide()
{
	population - army * 1000;
	return population;
}

double Race::mobilization()
{
	int spends = 10;
	money - spends;
	army = spends * 0.01;
	return army;
}
/*
int Race::ChangeRaceStatus()
{
	int var;
	std::cin >> var;
	return var;
}
*/