#ifndef DOWN_H
#define DOWN_H

#include "Command.h"

class DownCommand : public Command{
public:
	void execute(Character& person);
};
#endif // !DOWN_H
