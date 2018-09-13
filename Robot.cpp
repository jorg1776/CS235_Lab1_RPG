#include "Robot.h"
#include <cmath>
Robot::~Robot()
{
}

int Robot::getDamage()
{
	int totalDamage = strength;
	if (bonusDamage > 0) //runs if Ability had been used
	{
		totalDamage += bonusDamage;
		bonusDamage = 0;
	}
	return totalDamage;
}

void Robot::reset()
{
	energy = maxEnergy;
	bonusDamage = 0;
}

bool Robot::useAbility()
{
	if (energy >= ROBOT_ABILITY_COST)
	{
		double abilityDamage = (double)strength * pow(((double)energy / (double)maxEnergy), 4);
		bonusDamage = (int)abilityDamage;
		energy -= ROBOT_ABILITY_COST;
		return true;
	}
	else
	{
		return false;
	}
}
