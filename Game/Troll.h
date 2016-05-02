#ifndef TROLL_H
#define TROLL_H

#include "Monster.h"

class Troll : public Monster{
public:
	Troll(int health, int strength);
	void attack();
	Monster* clone();
};
#endif // !TROLL_H
