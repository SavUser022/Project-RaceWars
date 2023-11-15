#pragma once
#include "Economy.h"
class AgrarSect :
     public Economy
{
private:
    double fields;
public:
    AgrarSect();
    AgrarSect(std::string sector, double workers, double money, double fields);
    AgrarSect(const AgrarSect& item);
    ~AgrarSect();
    double fundSector() override;
    double shortenSector() override;
    double  income() override ;
    double  costSector() override;

};

