#pragma once
#include "Race.h"
//#include "Economy.h"
#include "AgrarSect.h"
#include "Engineering.h"
#include "FoodIndustry.h"
#include "Nuclear.h"
#include "PetroChemical.h"

class DataManager
{
private:
	std::vector<Race> races;
	std::vector<AgrarSect> agr;
	std::vector<Engineering> eng;
	std::vector<FoodIndustry> food;
	std::vector<Nuclear> atom;
	std::vector<PetroChemical> peter;
public:
	DataManager(std::vector<Race> races, std::vector<AgrarSect> agr, std::vector<Engineering> eng,
		std::vector<FoodIndustry> food, std::vector<Nuclear> atom, std::vector<PetroChemical> peter);
//============================================================================
	void loadAgrarData();
	void loadRaceData();
	void loadEngineeringData();
	void loadFoodIndustryData();
	void loadNuclearData();
	void loadPetroChemicalData();
//=============================================================================
	void saveAgrarData();
	void saveRaceData();
	void saveEngineeringData();
	void saveFoodIndustryData();
	void saveNuclearData();
	void savePetroChemicalData();
//=============================================================================
};

