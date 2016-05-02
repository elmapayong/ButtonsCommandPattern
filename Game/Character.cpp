#include "Character.h"

Character::Character(){
	ID = 'x';
	x = 0;
	y = 0;
	speed = 0;
	health = 0;
	strength = 0;
}

void Character::setX(int a){
	x = a;
}

void Character::setY(int a){
	y = a;
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
	y -= speed;
}

void Character::down(){
	y += speed;
}

void Character::left(){
	x -= speed;
}

void Character::right(){
	x += speed;
}

void Character::setSpeed(int sp){
	speed = sp;
}

void Character::print(){
	cout << "x:" << x << "  y:" << y << endl;
}