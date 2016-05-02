#include "Character.h"

Character::Character(){
	ID = 'x';
	x = 0;
	y = 0;
	health = 0;
	strength = 0;
}

int Character::getX(){
	return x;
}

int Character::getY(){
	return y;
}

char Character::getID(){
	return ID;
}

void Character::up(){
	--y;
}

void Character::down(){
	++y;
}

void Character::left(){
	--x;
}

void Character::right(){
	++x;
}

void Character::print(){
	cout << "x:" << x << "  y:" << y << endl;
}