#pragma once
#include "FighterInterface.h"
class Fighter : FighterInterface
{
public:
	Fighter();
	~Fighter();

	// Inherited via FighterInterface
	virtual std::string getName() const override;
	virtual int getMaximumHP() const override;
	virtual int getCurrentHP() const override;
	virtual int getStrength() const override;
	virtual int getSpeed() const override;
	virtual int getMagic() const override;
	virtual int getDamage() override;
	virtual void takeDamage(int damage) override;
	virtual void reset() override;
	virtual void regenerate() override;
	virtual bool useAbility() override;
};

