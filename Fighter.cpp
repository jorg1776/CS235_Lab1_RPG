#include "Fighter.h"

Fighter::~Fighter()
{
}

string Fighter::getName() const
{
	return name;
}

int Fighter::getMaximumHP() const
{
	return maximumHP;
}

int Fighter::getCurrentHP() const
{
	return currentHP;
}

int Fighter::getStrength() const
{
	return strength;
}

int Fighter::getSpeed() const
{
	return speed;
}

int Fighter::getMagic() const
{
	return magic;
}

void Fighter::takeDamage(int damage)
{
	currentHP -= damage - (speed / 4);
}