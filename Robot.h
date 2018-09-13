#ifndef ROBOT_HPP_
#define ROBOT_HPP_

#include "Fighter.h"

class Robot : public Fighter
{
private:
	int maxEnergy;
	int energy;
	int bonusDamage = 0;

public:
	Robot(string name, int maximumHP, int strength, int speed, int magic) :
		Fighter(name, maximumHP, strength, speed, magic) 
	{
		maxEnergy = magic * 2;
		energy = maxEnergy;
	}
	~Robot();

	// Inherited via Fighter
	virtual int getDamage() override;
	virtual void reset() override;
	virtual bool useAbility() override;
};

#endif /*ROBOT_HPP_*/