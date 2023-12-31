#pragma once
#include "Economy.h"
class Race :
    public Economy
{
	private:
		int id;
		std::string name;
		double population;
		int status;
		int power;
		double tax;
		double minus;
		double plus;
		double army;
		double weapons;
		int count;
		//std::unique_ptr<Race> races;
	public:
		Race();
		Race(std::string name, double population,
			int status, int power, double tax, int id);
		Race(const Race & item);
		~Race();
		double dynamicPopulation();
		double genocide();
		double mobilization();
		//int ChangeRaceStatus();
};

