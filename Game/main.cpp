#include "Character.h"
#include "Player.h"
#include "Command.h"
#include "UpCommand.h"
#include "DownCommand.h"
#include "LeftCommand.h"
#include "RightCommand.h"
#include "AttackCommand.h"
#include "Map.h"
#include <Windows.h>

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	Map m;
	Character* playerA = new Player();
	Command* up = new UpCommand();
	Command* down = new DownCommand();
	Command* left = new LeftCommand();
	Command* right = new RightCommand();
	Command* attack = new AttackCommand();
	
	playerA->setX(1);
	
	bool gameover = false;
	while (!gameover){
		system("CLS");	//not portable
		cout << flush;
		m.clear();
		

		//W - up
		if (GetAsyncKeyState(87) != 0){
			if (m.isInHeight(playerA->getY() - playerA->getSpeed(false))) //checks if within bounds
				up->execute(*playerA);
		}
		//D - right
		else if (GetAsyncKeyState(68) != 0){
			if (m.isInWidth(playerA->getX() + playerA->getSpeed(true)))
				right->execute(*playerA);
		}
		//S - down
		else if (GetAsyncKeyState(83) != 0){
			if (m.isInHeight(playerA->getY() + playerA->getSpeed(false)))
				down->execute(*playerA);
		}
		//A - left
		else if (GetAsyncKeyState(65) != 0){
			if (m.isInWidth(playerA->getX() - playerA->getSpeed(true)))
				left->execute(*playerA);
		}
		//SPACEBAR - attack
		else if (GetAsyncKeyState(VK_SPACE) != 0){
			attack->execute(*playerA);
		}
		else if (GetAsyncKeyState(VK_BACK) != 0){
			gameover = true;
		}
		
		m.insert(playerA->getX(), playerA->getY(), playerA->getID());
		m.print();
		Sleep(100);
	}




	//system("pause");
}