#include "Spawner.h"

Spawner::Spawner(Monster* proto){
	prototype = proto;
}

Monster* Spawner::spawn(){
	return prototype->clone();
}