#include "AttackCommand.h"

void AttackCommand::execute(Character& person){
	person.attack();
}