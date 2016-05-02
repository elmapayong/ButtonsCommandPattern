#ifndef LEFT_H
#define LEFT_H

#include "Command.h"

class LeftCommand : public Command{
public:
	void execute(Character& person);
};

#endif // !LEFT_H
