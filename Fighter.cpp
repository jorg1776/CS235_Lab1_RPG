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

void Fighter::regenerate()
{
	int increase = strength / 6;
	if (increase == 0)
	{
		increase = 1; //so that hp increases by at least one
	}

	currentHP += increase;

	
	if (currentHP > maximumHP)
	{
		currentHP = maximumHP;
	}
}
