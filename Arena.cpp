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

//if fighter not in index, returns -1
int Arena::getFighterIndex(string name)
{
	if (fighters.size() > 0) //if there are fighters in the vector
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
		if (getFighterIndex(name) == -1) //if not in list
		{
			if (type == "R")
			{
				Robot* newRobot = new Robot(name, maximumHP, strength, speed, magic);
				fighters.push_back(newRobot);
				return true;
			}
			else if (type == "A")
			{
				Archer* newArcher = new Archer(name, maximumHP, strength, speed, magic);
				fighters.push_back(newArcher);
				return true;
			}
			else if (type == "C")
			{
				Cleric* newCleric = new Cleric(name, maximumHP, strength, speed, magic);
				fighters.push_back(newCleric);
				return true;
			}
		}
	}
	
	return false;
}

bool Arena::removeFighter(std::string name)
{
	int fighterIndex = getFighterIndex(name);
	if (fighterIndex >= 0)
	{
		fighters.erase(fighters.begin() + fighterIndex);
		return true;
	}
	return false;
}

FighterInterface* Arena::getFighter(std::string name)
{
	int fighterIndex = getFighterIndex(name);
	if (fighterIndex >= 0)
	{
		return fighters.at(fighterIndex);
	}
	else 
	{
		return nullptr;
	}
}

int Arena::getSize() const
{
	return fighters.size();
}