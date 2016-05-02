#ifndef MONSTER_H
#define MONSTER_H

#include "Character.h"

class Monster : public Character {
public:
	virtual Monster* clone() = 0;
};

#endif // !MONSTER_H
