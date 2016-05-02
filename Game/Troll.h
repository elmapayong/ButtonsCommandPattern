#ifndef TROLL_H
#define TROLL_H

#include "Monster.h"
#include "Character.h"

class Troll : public Monster, public Character{
public:
	Troll(int health, int strength);
	void attack();
	Monster* clone();
};
#endif // !TROLL_H
