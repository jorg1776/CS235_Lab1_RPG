#include "Fighter.h"



Fighter::Fighter()
{
}


Fighter::~Fighter()
{
}

std::string Fighter::getName() const
{
	return std::string();
}

int Fighter::getMaximumHP() const
{
	return 0;
}

int Fighter::getCurrentHP() const
{
	return 0;
}

int Fighter::getStrength() const
{
	return 0;
}

int Fighter::getSpeed() const
{
	return 0;
}

int Fighter::getMagic() const
{
	return 0;
}

int Fighter::getDamage()
{
	return 0;
}

void Fighter::takeDamage(int damage)
{
}

void Fighter::reset()
{
}

void Fighter::regenerate()
{
}

bool Fighter::useAbility()
{
	return false;
}
