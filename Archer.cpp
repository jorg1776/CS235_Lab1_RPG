#include "Archer.h"

Archer::~Archer()
{
}

int Archer::getDamage()
{
	return speed;
}

void Archer::reset()
{
	speed = initialSpeed;
}

bool Archer::useAbility()
{
	speed++;
	return true;
}
