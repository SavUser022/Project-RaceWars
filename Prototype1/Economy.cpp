#include "framework.h"
#include "Economy.h"

Economy::Economy() : sector("NONE"), workers(10), money(0.01)
{
	
}

Economy::Economy(std::string sector, double workers, double incomeEC)
{
}

Economy::Economy(const Economy& item)
{
	this->money = item.money;
	this->workers = item.workers;
	this->sector = item.sector;
}

Economy::~Economy()
{
}

void Economy::showParasites()
{
}

double Economy::destroyParasites()
{
	
	return parasites;
}



double Economy::shortenSector()
{
	return 0.0;
}
