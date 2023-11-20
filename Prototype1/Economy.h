#pragma once
class Economy
{
protected:
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

};

