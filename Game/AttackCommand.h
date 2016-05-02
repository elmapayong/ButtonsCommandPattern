#ifndef ATTACK_H
#define ATTACK_H

#include "Command.h"

class AttackCommand : public Command{
public:
	void execute(Character& person);
};

#endif // !FIRE_H
