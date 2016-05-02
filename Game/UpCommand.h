#ifndef UP_H
#define UP_H

#include "Command.h"

class UpCommand : public Command{
public:
	void execute(Character& person);
};

#endif // !UP_H
