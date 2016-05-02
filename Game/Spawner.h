#ifndef SPAWNER_H
#define SPAWNER_H

#include "Monster.h"

class Spawner{
public:
	Spawner(Monster* prototype);
	Monster* spawn();
private:
	Monster* prototype;
};

#endif // !SPAWNER_H
