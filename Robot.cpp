#include "Robot.h"

Robot::~Robot()
{
}

int Robot::getDamage()
{
	return strength;
}

void Robot::reset()
{
	energy = MAX_ENERGY;
	bonusDamage = 0;
}

bool Robot::useAbility()
{
	return false;
}
