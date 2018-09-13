#ifndef ARCHER_HPP_
#define ARCHER_HPP_

#include "Fighter.h"

class Archer : public Fighter
{
public:
	Archer(string name, int maximumHP, int strength, int speed, int magic) :
		Fighter(name, maximumHP, strength, speed, magic) {}
	~Archer();

	// Inherited via Fighter
	virtual int getDamage() override;
	virtual void reset() override;
	virtual bool useAbility() override;
};

#endif /*ARCHER_HPP_*/