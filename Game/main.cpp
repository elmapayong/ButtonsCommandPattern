#include "Character.h"
#include "Player.h"
#include "Command.h"
#include "UpCommand.h"
#include "Map.h"
#include <Windows.h>

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	//Character* player1 = new Player();

	//Command* up = new UpCommand();

	//player1->print();

	//up->execute(*player1);

	//player1->print();

	//bool done = false;
	//while (!done){
	//	if (GetAsyncKeyState(0x57) != 0){
	//		up->execute(*player1);
	//		player1->print();
	//	}
	//	if (GetAsyncKeyState(0x53) != 0){
	//		cout << "down" << endl;
	//	}
	//	Sleep(300);
	//}

	//Map m;

	//Player A;
	//A.print();
	//A.down(); 
	//A.print();
	//A.right();
	//A.print();
	//m.insert(A.getX(), A.getY(), A.getID());

	//m.print();

	bool gameover = false;
	Character* playerA = new Player();
	Map m;
	char key_press;

	while (!gameover){
		system("CLS");	//not portable
		cout << flush;
		m.clear();
		

		//W - up
		if (GetAsyncKeyState(87) != 0){
			if (m.isInHeight(playerA->getY() - playerA->getSpeed())) //checks if within bounds
				playerA->up();
		}
		//D - right
		else if (GetAsyncKeyState(68) != 0){
			if (m.isInWidth(playerA->getX() + playerA->getSpeed()))
				playerA->right();
		}
		//S - down
		else if (GetAsyncKeyState(83) != 0){
			if (m.isInHeight(playerA->getY() + playerA->getSpeed()))
				playerA->down();
		}
		//A - left
		else if (GetAsyncKeyState(65) != 0){
			if (m.isInWidth(playerA->getX() - playerA->getSpeed()))
				playerA->left();
		}
		//SPACEBAR - attack
		else if (GetAsyncKeyState(VK_SPACE) != 0){
			playerA->attack();
		}
		else if (GetAsyncKeyState(VK_BACK) != 0){
			gameover = true;
		}
		
		m.insert(playerA->getX(), playerA->getY(), playerA->getID());
		m.print();
		Sleep(100);
	}






	//bool done = false;
	//while (!done){
	//	if (GetAsyncKeyState(VK_SPACE) != 0)
	//		done = true;
	//}

	//cout << "DONE" << endl;

	//system("pause");
}