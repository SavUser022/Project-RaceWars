#include "framework.h"
#include "Economy.h"
#include "Race.h"

Economy::Economy() : sector("NONE"), workers(10), money(0.01), factories(0), DataManager()
{
	
}

Economy::Economy(std::string sector, double workers, double money, double factories) 
	: sector(sector), workers(workers), money(money), factories(factories), DataManager()
{
}

Economy::Economy(const Economy& item)
{
	this->money = item.money;
	this->workers = item.workers;
	this->sector = item.sector;
	this->workers = item.workers;
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
	
	//const int spend = 10;
	money - spends;
	parasites = spends * 10;

	return parasites;
}

double Economy::GDP(std::vector<Economy> economics)
{
	const int N = economics.size();
	double total;
	//int time = 5;

	while (true)
	{
		for (int i = 0; i < N; i++)
		{
			money += total;
		}
		std::this_thread::sleep_for(std::chrono::minutes(time));
	};
	

	
	return money;
}
