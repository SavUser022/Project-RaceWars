#include "framework.h"
#include "PetroChemical.h"

PetroChemical::PetroChemical() : Economy()
{
}

PetroChemical::PetroChemical(std::string sector, double workers, double money) 
	: Economy(sector, workers, money, money)
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
	int spends;
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
	money - factories * 0.9;
	return money;
}
