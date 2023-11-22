#pragma once
#include "Race.h"
class DataManager
{
private:
	std::vector<Race> races;
	std::vector<Economy> economon;
public:
	DataManager();
	DataManager(std::vector<Race> races, std::vector<Economy> economon);
	DataManager(const DataManager& item);
	~DataManager();
	void loadData();
	void saveData();
};

