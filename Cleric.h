#ifndef CLERIC_HPP_
#define CLERIC_HPP_

#include "Fighter.h"

class Cleric : public Fighter
{
private:
	const int MAX_MANA;
	int mana;
public:
	Cleric(string name, int maximumHP, int strength, int speed, int magic) :
		Fighter(name, maximumHP, strength, speed, magic) 
	{
		MAX_MANA = magic * 5;
		mana = MAX_MANA;
	}
	~Cleric();

	// Inherited via Fighter
	virtual int getDamage() override;
	virtual void reset() override;
	virtual void regenerate() override;
	virtual bool useAbility() override;
};

#endif /*CLERIC_HPP_*/