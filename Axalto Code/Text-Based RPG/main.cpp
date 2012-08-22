#include <iostream>
#include <string>

#include "libtbrpg/libtbrpg.h"
#include "clearscreen.h"

using namespace std;

int main()
{
	ClearScreen();
	cout << "Loading LIBTBRPG Demo Game..." << endl;
	
	// String for general console input
	string cmd;
	
	// Loading Room Data
	cout << " Initializing Room Data... ";
	RPG_Room* testRoom = new RPG_Room();
	cout << "Done!" << endl;
	
	// Loading Player Data
	cout << " Initializing Player Data... ";
	RPG_Player player;
	cout << "Done!" << endl;
	
	//--------------------------//
	// Actual start of the game //
	//--------------------------//
	
	// Input Name
	ClearScreen();
	
	while(true)
	{
		cout << "Enter name: ";
		getline(cin, cmd);
		
		player.name = cmd;
		if(player.isNameValid())
			break;
		
		ClearScreen();
		cout << "Name Invalid." << endl
			 << "Maximum size: 25 characters." << endl
			 << "Accepted Characters: a-z, A-Z and Space" << endl << endl;
	}
	cout << endl << "Name \"" << cmd << "\" accepted." << endl;
	
	return 0;
}
