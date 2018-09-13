#include "Cleric.h"

Cleric::~Cleric()
{
}

int Cleric::getDamage()
{
	return magic;
}

void Cleric::reset()
{
}

void Cleric::regenerate()
{
	int manaIncrease = magic / 5;
	if (manaIncrease == 0)
	{
		manaIncrease = 1; //so mana increases by at least 1
	}

	mana += manaIncrease;

	if (mana > MAX_MANA)
	{
		mana = MAX_MANA;
	}

	Fighter::regenerate();
}

bool Cleric::useAbility()
{
	return false;
}