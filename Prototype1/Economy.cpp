#include "framework.h"
#include "Economy.h"

Economy::Economy() : sector("NONE"), workers(10), money(0.01), factories(0)
{
	
}

Economy::Economy(std::string sector, double workers, double money, double factories) 
	: sector(sector), workers(workers), money(money), factories(factories)
{
}

Economy::Economy(const Economy& item)
{
	this->money = item.money;
	this->workers = item.workers;
	this->sector = item.sector;
	//this->spends = item.spends;
}

Economy::~Economy()
{
}

void Economy::showParasites()
{

}

double Economy::destroyParasites()
{
	int spend;
	money - spend;
	parasites = spend * 10;
	return parasites;
}