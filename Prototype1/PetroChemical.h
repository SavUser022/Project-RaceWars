#pragma once
#include "Economy.h"
class PetroChemical :
    public Economy
{
public:
    PetroChemical();
    PetroChemical(std::string sector, double workers, double money, double factories);
    PetroChemical(const PetroChemical& item);
    ~PetroChemical();
    double fundSector() override;
    double  shortenSector() override;
    double  income() override;
    double  costSector() override;
    std::string getSector() override;
    double getWorkers() override;
    double getMoney() override;
    double getFactories() override;
};



