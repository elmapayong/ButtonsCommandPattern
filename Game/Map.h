#ifndef MAP_H
#define MAP_H

const int WIDTH = 70;
const int HEIGHT = 24;


#include <algorithm>
#include <iostream>
using namespace std;

class Map{
public:
	Map();
	bool insert(int x, int y, char c);
	bool isInWidth(int x);
	bool isInHeight(int y);
	void clear();
	void print();
private:
	char map[HEIGHT][WIDTH];
};

#endif // !MAP_H
