#include "framework.h"
#include "AgrarSect.h"

AgrarSect::AgrarSect() : Economy(), fields(10)
{}

AgrarSect::AgrarSect(std::string sector, double workers, double money, double fields)
	:  fields(fields), Economy(sector, workers, money)
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
	factories = money * 0.01;
	fields = money * 0.1;

	return factories;
}

double AgrarSect::shortenSector()
{
	factories - 10;
	return factories;
}

double AgrarSect::income()
{
	
}

double AgrarSect::costSector()
{

	return 0.0;
}

