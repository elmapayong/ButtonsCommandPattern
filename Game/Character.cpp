#include "Character.h"

Character::Character(){
	x = 0;
	y = 0;
	health = 0;
	strength = 0;
}

void Character::up(){
	++y;
}

void Character::down(){
	--y;
}

void Character::left(){
	--x;
}

void Character::right(){
	++x;
}

void Character::print(){
	cout << "x:" << x << "  y:" << y;
}