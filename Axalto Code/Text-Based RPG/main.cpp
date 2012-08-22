#include <iostream>
#include <string>

#include "libtbrpg/libtbrpg.h"

using namespace std;

int main()
{
	string cmd;

	RPG_Room* testRoom = new RPG_Room();

	cout << "Enter name: ";
	getline(cin, cmd);

	cout << "Hello, " << cmd << endl;

	return 0;
}
