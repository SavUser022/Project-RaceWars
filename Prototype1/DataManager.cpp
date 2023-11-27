#include "framework.h"
#include "mainClassHeader.h"

DataManager::DataManager(std::vector<Race> races, std::vector<AgrarSect> agr, std::vector<Engineering> eng,
	std::vector<FoodIndustry> food, std::vector<Nuclear> atom, 
	std::vector<PetroChemical> peter) : races(races), agr(agr)
{}

void DataManager::loadAgrarData()
{
	std::ifstream fin;
	fin.open("AgrarData.txt");
	while (!fin.eof())
	{
		std::string sector;
		double workers;
		double 	money;
		double	factories;
		double fields;

		fin.ignore();

		std::getline(fin, sector);


		fin >> workers;
		fin >> money;
		fin >> factories;
		fin >> fields;
		AgrarSect agrik(sector, workers, money, factories, fields);
		agr.push_back(agrik);
	};
	fin.close();
}

void DataManager::loadRaceData()
{
	std::ifstream fin;
	fin.open("RaceData.txt");
	while (!fin.eof())
	{
		int id;
		std::string name;
		double population;
		int	status;
		int	power;
		double tax;

		fin >> id;
		fin.ignore();

		std::getline(fin, name);
		fin >> population;
		fin >> status;
		fin >> power;
		fin >> tax;

		Race addrace(name, population, status, power, tax, id);
		races.push_back(addrace);
		fin.close();
	}

}

void DataManager::loadEngineeringData()
{
	std::ifstream fin;
	fin.open("EngineeringData.txt");
	while (!fin.eof())
	{

		std::string sector;
		double workers;
		double 	money;
		double	factories;

		std::getline(fin, sector);


		fin >> workers;
		fin >> money;
		fin >> factories;
		Engineering engik(sector, workers, money, factories);
		eng.push_back(engik);
	}
	fin.close();
}

void DataManager::loadFoodIndustryData()
{
	std::ifstream fin;
	fin.open("FoodIndustryData.txt");
	while (!fin.eof())
	{
		std::string sector;
		double workers;
		double 	money;
		double	factories;
		double fields;

		fin.ignore();

		std::getline(fin, sector);


		fin >> workers;
		fin >> money;
		fin >> factories;
		fin >> fields;
		FoodIndustry fod(sector, workers, money, factories);
		food.push_back(fod);
	}
	fin.close();
}

void DataManager::loadNuclearData()
{
	std::ifstream fin;
	fin.open("NuclearData.txt");
	while (!fin.eof())
	{
		//int id;
		std::string sector;
		double workers;
		double 	money;
		double	factories;

		//fin >> id;
		fin.ignore();

		std::getline(fin, sector);


		fin >> workers;
		fin >> money;
		fin >> factories;
		Nuclear nuke(sector, workers, money, factories);
		atom.push_back(nuke);
	}
	fin.close();
}

void DataManager::loadPetroChemicalData()
{
	std::ifstream fin;
	fin.open("PetroChemicalData.txt");
	while (!fin.eof())
	{
		//int id;
		std::string sector;
		double workers;
		double 	money;
		double	factories;

		//fin >> id;
		fin.ignore();

		std::getline(fin, sector);

		fin >> workers;
		fin >> money;
		fin >> factories;
		PetroChemical petro(sector, workers, money, factories);
		peter.push_back(petro);
	};
	fin.close();
}

void DataManager::saveAgrarData()
{
	std::ofstream fout;
	fout.open("AgrarData.txt");

	int id;
	std::string sector;
	double workers;
	double money;
	double factories;
	double fields;

	
	for (int i = 0; i < agr.size(); i++)
	{
		AgrarSect temp = agr.at(i);
		fout << temp.getSector() << std::endl;
		fout << temp.getWorkers() << std::endl;
		fout << temp.getMoney() << std::endl;
		fout << temp.getFactories() << std::endl;
		fout << temp.getfields() << std::endl;
	};
	fout.close();
}

void DataManager::saveRaceData()
{
}

void DataManager::saveEngineeringData()
{
	std::ofstream fout;
	fout.open("EngineeringData.txt");

	int id;
	std::string sector;
	double workers;
	double money;
	double factories;


	for (int i = 0; i < agr.size(); i++)
	{
		AgrarSect temp = agr.at(i);
		fout << temp.getSector() << std::endl;
		fout << temp.getWorkers() << std::endl;
		fout << temp.getMoney() << std::endl;
		fout << temp.getFactories() << std::endl;
	};
	fout.close();
}

void DataManager::saveFoodIndustryData()
{
	std::ofstream fout;
	fout.open("FoodIndustryData.txt");

	int id;
	std::string sector;
	double workers;
	double money;
	double factories;


	for (int i = 0; i < agr.size(); i++)
	{
		AgrarSect temp = agr.at(i);
		fout << temp.getSector() << std::endl;
		fout << temp.getWorkers() << std::endl;
		fout << temp.getMoney() << std::endl;
		fout << temp.getFactories() << std::endl;
	};
	fout.close();
}

void DataManager::saveNuclearData()
{
	std::ofstream fout;
	fout.open("NuclearData.txt");

	int id;
	std::string sector;
	double workers;
	double money;
	double factories;


	for (int i = 0; i < agr.size(); i++)
	{
		AgrarSect temp = agr.at(i);
		fout << temp.getSector() << std::endl;
		fout << temp.getWorkers() << std::endl;
		fout << temp.getMoney() << std::endl;
		fout << temp.getFactories() << std::endl;
	};
	fout.close();
}

void DataManager::savePetroChemicalData()
{
	std::ofstream fout;
	fout.open("PetrochemicalData.txt");

	int id;
	std::string sector;
	double workers;
	double money;
	double factories;


	for (int i = 0; i < agr.size(); i++)
	{
		AgrarSect temp = agr.at(i);
		fout << temp.getSector() << std::endl;
		fout << temp.getWorkers() << std::endl;
		fout << temp.getMoney() << std::endl;
		fout << temp.getFactories() << std::endl;
	};
	fout.close();
}
