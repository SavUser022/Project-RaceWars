#pragma once
#include "Economy.h"
class Engineering :
    public Economy
{
public:
    Engineering();
    Engineering(std::string sector, double workers, double money, double factories);
    ~Engineering();
    Engineering(const Engineering& item);
    double  fundSector() override ;
    double  shortenSector() override ;
    double  income() override ;
    double  costSector() override;
};

