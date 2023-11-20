#pragma once
class States
{
    int population;
    int diplomacy;

public:
    States();
    States(int pop, int dip);
    States(const States& st);
    ~States();
    int getPopulation() const;
    int getDiplomacy() const;
    void setPopulation(int pop);
    void setDiplomacy(int dip);
};

