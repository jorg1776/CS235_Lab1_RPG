#include "Arena.h"
#include "Robot.h"
#include "Archer.h"
#include "Cleric.h"

#include<sstream>

Arena::Arena()
{
}


Arena::~Arena()
{
}

bool Arena::addFighter(std::string info)
{
	stringstream ss(info);

	string name;
	string type;
	int maximumHP;
	int strength;
	int speed;
	int magic;


	if (ss >> name >> type >> maximumHP >> strength >> speed >> magic) 
	{
		if (getFighterIndex(name) == -1)
		{
			if (type == "R")
			{
				Robot newRobot(name, maximumHP, strength, speed, magic);
			}
			else if (type == "A")
			{
				Archer newArcher(name, maximumHP, strength, speed, magic);
			}
			else if (type == "C")
			{
				Cleric newCleric(name, maximumHP, strength, speed, magic);
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

bool Arena::removeFighter(std::string name)
{
	return false;
}

//if fighter not in index, returns -1
int Arena::getFighterIndex(string name)
{
	if (fighters.size > 0) //if there are fighters in the vector
	{
		for (int i = 0; i < fighters.size(); i++)
		{
			if (fighters[i]->getName() == name)
			{
				return i;
			}
		}

		return -1; //only returns if name doesn't exist in vector
	}
	else
	{
		return -1;
	}
}

FighterInterface * Arena::getFighter(std::string name)
{
	return nullptr;
}

int Arena::getSize() const
{
	return 0;
}