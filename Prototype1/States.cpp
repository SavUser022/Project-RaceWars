#include "framework.h"
#include "States.h"

States::States() : population(0), diplomacy(0)
{}

States::States(int pop, int dip) : population(pop), diplomacy(dip) 
{}

States::States(const States& st)
{
	this->population = st.population;
	this->diplomacy = st.diplomacy;
}

States::~States()
{}

int States::getPopulation() const
{
	return population;
}

int States::getDiplomacy() const
{
	return diplomacy;
}

void States::setPopulation(int pop)
{
	population = pop;
}

void States::setDiplomacy(int dip)
{
	diplomacy = dip; 
}

