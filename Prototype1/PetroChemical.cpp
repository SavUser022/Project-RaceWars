#include "framework.h"
#include "PetroChemical.h"

PetroChemical::PetroChemical() : Economy()
{
}

PetroChemical::PetroChemical(std::string sector, double workers, double money, double factories) 
	: Economy(sector, workers, money, factories)
{
}

PetroChemical::PetroChemical(const PetroChemical& item)
{
	this->sector = item.sector;
	this->factories = item.factories;
	this->money = item.money;
	this->workers = item.workers;
}

PetroChemical::~PetroChemical()
{}

double PetroChemical::fundSector()
{
	int const spends = 10 ;
	money - spends;
	factories = spends * 1.5;
	return factories;
}

double PetroChemical::shortenSector()
{
	money - 0.9;
	factories - 10;
	return factories;

}

double PetroChemical::income()
{
	int time = 5;
	double cash = factories * 2;
	while (true) {
		money += cash;
		std::this_thread::sleep_for(std::chrono::minutes(time));
		return money;
	}
}

double PetroChemical::costSector()
{
	int time = 5;
	double cash = factories * 0.2;
	while (true) {
		money -= cash;
		std::this_thread::sleep_for(std::chrono::minutes(time));
		return money;
	}

}

std::string PetroChemical::getSector()
{
	return sector;
}



double PetroChemical::getWorkers()
{
	return workers;
}

double PetroChemical::getMoney()
{
	return money;
}

double PetroChemical::getFactories()
{
	return factories;
}
