#include "Map.h"

Map::Map(){
	clear();
}

bool Map::insert(int x, int y, char c){
	if (x > 0 && x < WIDTH){
		if (y > 0 && y < HEIGHT){
			map[y][x] = c;
			return true;
		}
	}
	return false;
}

bool Map::isInWidth(int x){
	if (x > 0 && x < WIDTH-1)
		return true;

	return false;
}

bool Map::isInHeight(int y){
	if (y > 0 && y < HEIGHT-1)
		return true;

	return false;
}

void Map::clear(){
	for (int y = 0; y < HEIGHT; ++y){
		for (int x = 0; x < WIDTH; ++x){
			map[y][x] = ' ';
		}
	}
}

void Map::print(){
	for (int y = 0; y < HEIGHT; ++y){
		for (int x = 0; x < WIDTH; ++x){
			if (y == 0 || y == HEIGHT-1 || x == 0 || x == WIDTH-1)
				cout << '*';
			else
				cout << map[y][x];
		}
		cout << endl;
	}
}