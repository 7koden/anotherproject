#include <iostream>
#include <string>

#include "libtbrpg/libtbrpg.h"

using namespace std;

int main()
{
	cout << "Loading LIBTBRPG Demo Game..." << endl;
	
	// String for general console input
	string cmd;
	
	// Loading Room Data
	cout << " Initializing Room Data... ";
	RPG_Room* testRoom = new RPG_Room();
	cout << "Done!" << endl;
	
	//--------------------------//
	// Actual start of the game //
	//--------------------------//
	
	cout << "Enter name: ";
	getline(cin, cmd);
	
	cout << "Hello, " << cmd << endl;
	
	return 0;
}
