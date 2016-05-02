#ifndef COMMAND_H
#define COMMAND_H

#include "Character.h"

class Command{
public:
	virtual void execute(Character& person) = 0;
};


#endif // !COMMAND_H
