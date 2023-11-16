#pragma once
#include "Economy.h"
class FoodIndustry :
    public Economy
{
public:
    FoodIndustry();
    FoodIndustry(std::string sector, double workers, double money, double factories);
    FoodIndustry(const FoodIndustry& item);
    ~FoodIndustry();
    double  fundSector() override;
    double  shortenSector() override;
    double  income() override;
    double  costSector() override;
};

