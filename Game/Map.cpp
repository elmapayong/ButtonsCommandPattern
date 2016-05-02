#include "Map.h"

Map::Map(){
	clear();
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
			cout << map[y][x];
		}
		cout << endl;
	}
}