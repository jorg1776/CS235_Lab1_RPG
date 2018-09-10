#ifndef ARENA_HPP_
#define ARENA_HPP_

#include "ArenaInterface.h"

class Arena : ArenaInterface
{
private:

public:
	Arena();
	~Arena();

	// Inherited via ArenaInterface
	virtual bool addFighter(std::string info) override;
	virtual bool removeFighter(std::string name) override;
	virtual FighterInterface * getFighter(std::string name) override;
	virtual int getSize() const override;
};

#endif /* ARENA_HPP_*/