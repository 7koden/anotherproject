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
	RPG_Room* rooms[3] = {new RPG_Room(), new RPG_Room(), new RPG_Room()};

	rooms[0]->name = "Front Garden";
	rooms[0]->desc = "You are standing in a front garden. In front of you you see rosebeds.";
	rooms[0]->firstVisitDescAddition = "Behind you and under your feet, you see trampled roses. You wonder who trampeled them.";
	rooms[0]->dirRooms[RPG_DIR_NORTH] = rooms[1];
	rooms[0]->dirRooms[RPG_DIR_SOUTH] = rooms[2];

	rooms[1]->name = "House";
	rooms[1]->desc = "You are standing in a house. Mud has been smeared over the floor.";
	rooms[1]->firstVisitDescAddition = "Your boots are muddy, you wonder if this has anything to do with it.";
	rooms[1]->dirRooms[RPG_DIR_SOUTH] = rooms[0];

	rooms[2]->name = "Dark Pit";
	rooms[2]->desc = "You are in a pit. There is a door to your west.";
	rooms[2]->firstVisitDescAddition = "You fell in while you wheren't paying attention.";
	rooms[2]->dirRooms[RPG_DIR_WEST] = rooms[1];

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
