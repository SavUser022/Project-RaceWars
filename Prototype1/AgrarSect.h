#pragma once
#include "Economy.h"
class AgrarSect :
     public Economy
{
private:
    double fields;
public:
    AgrarSect();
    AgrarSect(std::string sector, double workers, double money, double fields, double factories);
    AgrarSect(const AgrarSect& item);
    ~AgrarSect();
    double fundSector() override;
    double shortenSector() override;
    double  income() override ;
    double  costSector() override;
     //int getId() override;
     std::string getSector() override ;
     double getMoney() override ;
     double getFactories() override ;
     double getWorkers() override;
     double getfields();
};

