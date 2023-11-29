#pragma once
#include "States.h" 
class Rebels : public States 
{
    bool isRevolted;

public:
    Rebels();
    Rebels(int pop, int dip, bool revolted);
    Rebels(const Rebels& rebels);
    ~Rebels();
    bool getRevolted() const;
    void setRevolted(bool revolted);
};

