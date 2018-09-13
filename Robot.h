#ifndef ROBOT_HPP_
#define ROBOT_HPP_

#include "Fighter.h"

class Robot : public Fighter
{
private:
	const int MAX_ENERGY;
	int energy;
	int bonusDamage = 0;

public:
	Robot(string name, int maximumHP, int strength, int speed, int magic) :
		Fighter(name, maximumHP, strength, speed, magic) 
	{
		MAX_ENERGY = magic * 2;
		energy = MAX_ENERGY;
	}
	~Robot();

	// Inherited via Fighter
	virtual int getDamage() override;
	virtual void reset() override;
	virtual bool useAbility() override;
};

#endif /*ROBOT_HPP_*/