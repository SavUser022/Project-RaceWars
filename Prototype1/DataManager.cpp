#include "framework.h"
#include "DataManager.h"
#include "Race.h"
#include "Economy.h"

DataManager::DataManager() : races(), economon()
{

}

DataManager::DataManager(std::vector<Race> races, std::vector<Economy> economon) : races(races), economon(economon)
{

}

DataManager::DataManager(const DataManager& item)
{
	
}

DataManager::~DataManager()
{
}

void DataManager::loadData()
{
}

void DataManager::saveData()
{
}
