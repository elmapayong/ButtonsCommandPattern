#include "Troll.h"

Troll::Troll(int h, int str){
	health = h;
	strength = h;
}

Monster* Troll::clone(){
	return new Troll(health, strength);
}

void Troll::attack(){

}