#ifndef ROBOT_HPP_
#define ROBOT_HPP_

#include "Fighter.h"

class Robot : Fighter
{
public:
	Robot(string name, int maximumHP, int strength, int speed, int magic) :
		Fighter(name, maximumHP, strength, speed, magic) {}
	~Robot();

	// Inherited via Fighter
	virtual int getDamage() override;
	virtual void reset() override;
	virtual void regenerate() override;
	virtual bool useAbility() override;
};

#endif /*ROBOT_HPP_*/