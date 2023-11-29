#include "framework.h"
#include "Rebels.h"

Rebels::Rebels() : isRevolted(false) 
{
}

Rebels::Rebels(int pop, int dip, bool revolted) : States(pop, dip), isRevolted(revolted)
{
}

Rebels::Rebels(const Rebels& rebels) : States(rebels), isRevolted(rebels.isRevolted)
{
}

Rebels::~Rebels()
{
}

bool Rebels::getRevolted() const
{
	return false;
}

void Rebels::setRevolted(bool revolted)
{
	isRevolted = revolted;
}
