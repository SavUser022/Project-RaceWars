#include "framework.h"
#include "AgrarSect.h"

AgrarSect::AgrarSect() : Economy(), fields(10)
{}

AgrarSect::AgrarSect(std::string sector, double workers, double money, double fields, double factories)
	:  fields(fields), Economy(sector, workers, money, factories)
{
}

AgrarSect::AgrarSect(const AgrarSect& item)
{
	this->sector = item.sector;
	this->fields = item.fields;
	this->factories = item.factories;
	this->money = item.money;
	this->workers = item.workers;
}

AgrarSect::~AgrarSect()
{

}

double AgrarSect::fundSector()
{
	int spends;
	money - spends;
	factories = spends * 0.01;
	fields = spends * 0.1;
	return factories;
}

double AgrarSect::shortenSector()
{
	money - 0.1;
	factories - 10;
	return factories;
}

double AgrarSect::income()
{
	money = (fields * 0.9) + (factories * 0.5) ;
	return money;
}

double AgrarSect::costSector()
{
	money - ((factories * 0.1) + (fields * 0.1));
	return money;
}

