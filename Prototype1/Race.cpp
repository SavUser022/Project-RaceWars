#include "framework.h"
#include "Race.h"

Race::Race() : name("NONE"), population(1000), status(0), power(0), income(1)
{
}

Race::Race(std::string name, double population, int status, int power, double inclome)
	: name(name), population(population), status(status), power(power), income(income)
{
}

Race::Race(const Race& item)
{
	this->income = item.income;
	this->name = item.name;
	this->population = item.population;
	this->power = item.power;
	this->status = item.status;

}

Race::~Race()
{

}

double Race::increasePopulation(double population , double plus)
{
	population + plus;
	return population ;
}

double Race::decreasePopulation(double population, double plus)
{
	population - minus;
	return population;
}
