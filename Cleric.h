#ifndef CLERIC_HPP_
#define CLERIC_HPP_

#include "Fighter.h"

class Cleric : Fighter
{
public:
	Cleric(string name, int maximumHP, int strength, int speed, int magic) :
		Fighter(name, maximumHP, strength, speed, magic) {}
	~Cleric();

	// Inherited via Fighter
	virtual int getDamage() override;
	virtual void reset() override;
	virtual void regenerate() override;
	virtual bool useAbility() override;
};

#endif /*CLERIC_HPP_*/