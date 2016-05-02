#include "Character.h"
#include "Player.h"
#include "Command.h"
#include "UpCommand.h"
#include "Map.h"
#include <Windows.h>

#include <iostream>
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

	Map m;

	m.print();








	//bool done = false;
	//while (!done){
	//	if (GetAsyncKeyState(VK_SPACE) != 0)
	//		done = true;
	//}

	//cout << "DONE" << endl;

	system("pause");
}