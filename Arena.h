#ifndef ARENA_HPP_
#define ARENA_HPP_

#include "ArenaInterface.h"

#include <vector>
#include <string>
using namespace std;

class Arena : ArenaInterface
{
private:
	int size;
	vector<FighterInterface *> fighters;

	int getFighterIndex(string name);
public:
	Arena();
	~Arena();

	// Inherited via ArenaInterface
	virtual bool addFighter(string info) override;
	virtual bool removeFighter(string name) override;
	virtual FighterInterface * getFighter(string name) override;
	virtual int getSize() const override;
};

#endif /* ARENA_HPP_*/