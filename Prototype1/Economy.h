#pragma once
class Economy
{
private:
	double money;
	std::string sector;
	double factories;
	double workers;
	//double money;
	double parasites;
	
public:
	Economy();
	Economy(std::string sector, double workers, double money);
	Economy(const Economy& item);
	~Economy();
	void showParasites();
	double destroyParasites();
	double virtual fundSector() = 0;
	double virtual shortenSector() = 0;

};

