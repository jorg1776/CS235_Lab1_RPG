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
	mana = MAX_MANA;
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
	if (mana >= CLERIC_ABILITY_COST)
	{
		int hpIncrease = magic / 3;
		if (hpIncrease == 0)
		{
			hpIncrease = 1; // allows increase by at least 1
		}

		currentHP += magic / 3;
		if (currentHP > maximumHP)
		{
			currentHP = maximumHP; // keeps current hp from exceeding max
		}

		mana -= CLERIC_ABILITY_COST;
		return true;
	}
	else
	{
		return false;
	}
}