#ifndef RIGHT_H
#define RIGHT_H

#include "Command.h"

class RightCommand : public Command{
public:
	void execute(Character& person);
};
#endif // !RIGHT_H
