#pragma once
#include "DataManager.h"
class Economy
	: public DataManager
{
protected:
	const double spends = 10;
	const int time = 5;
	double money;
	std::string sector;
	double factories;
	double workers;
	double parasites;
	std::vector<Economy> economics;
	//double spends;
public:
	Economy();
	Economy(std:: string sector, double workers, double money, double factories);
	Economy(const Economy& item);
	~Economy();
	void showParasites();
	double destroyParasites();
	double virtual fundSector() = 0;
	double virtual shortenSector() = 0;
	double virtual income() = 0;
	double virtual costSector() = 0;
	double GDP(std::vector<Economy> economics);
};

