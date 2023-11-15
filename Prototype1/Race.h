#pragma once
class Race
{
private:
	std::string name;
	double population;
	int status;
	int power;
	double income;
	double minus;
	double plus;
public:
	Race();
	Race(std::string name, double population, 
		int status, int power, double inclome);
	Race(const Race& item);
	~Race();
	double increasePopulation( double population, double plus);
	double decreasePopulation(double population, double minus);

};

