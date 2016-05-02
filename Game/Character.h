#ifndef CHAR_H
#define CHAR_H

#include <iostream>
using namespace std;

class Character{
public:
	Character();
	int getX();
	int getY();
	char getID();
	virtual void up();
	virtual void down();
	virtual void left();
	virtual void right();
	virtual void fire() = 0;
	void print();
protected:
	char ID;	//ID for map
	int x;
	int y;
	int health;
	int strength;
};

#endif // !CHAR_H
