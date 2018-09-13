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

	if ((mana + manaIncrease) <= MAX_MANA)
	{
		mana += manaIncrease;
	}

	Fighter::regenerate();
}

bool Cleric::useAbility()
{
	return false;
}