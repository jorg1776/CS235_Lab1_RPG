#ifndef FIGHTER_HPP_
#define FIGHTER_HPP_

#include "FighterInterface.h"

#include <string>
using namespace std;

class Fighter : public FighterInterface
{
protected:
	string name;
	int maximumHP;
	int currentHP;
	int strength;
	int speed;
	int magic;
	int damage;
public:
	Fighter(string name, int maximumHP, int strength, int speed, int magic) 
		: name(name), maximumHP(maximumHP), strength(strength), speed(speed), magic(magic) 
	{
		currentHP = maximumHP;
	}
	~Fighter();

	// Inherited via FighterInterface
	string getName() const override;
	int getMaximumHP() const override;
	int getCurrentHP() const override;
	int getStrength() const override;
	int getSpeed() const override;
	int getMagic() const override;
	virtual int getDamage() = 0;
	void takeDamage(int damage) override;
	virtual void reset() override;
	virtual void regenerate() override;
	virtual bool useAbility() = 0;
};

#endif /* FIGHTER_HPP_*/