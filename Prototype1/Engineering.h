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
    std::string getSector() override;
    //int getId() override;
    double getWorkers() override;
    double getMoney() override;
    double getFactories() override;
};
