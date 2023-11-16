#pragma once
#include "Economy.h"
class PetroChemical :
    public Economy
{
public:
    PetroChemical();
    PetroChemical(std::string sector, double workers, double money);
    PetroChemical(const PetroChemical& item);
    ~PetroChemical();
    double fundSector() override;
    double  shortenSector() override;
    double  income() override;
    double  costSector() override;
};



