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
	Fighter::reset();
}

bool Archer::useAbility()
{
	speed++;
	return true;
}
