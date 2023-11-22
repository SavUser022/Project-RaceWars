#pragma once
#include "Race.h"
#include "Economy.h"
class Nuclear :
    public Economy
{
private:
    double mutants;
    //double killMutants;
public:
    Nuclear();
    Nuclear(std::string sector, double workers, double money, double mutants);
    Nuclear(const Nuclear& item);
    ~Nuclear();
    //double StripingReactors();
    double fundSector() override;
    double  shortenSector() override;
    double  income() override;
    double  costSector() override;
};

