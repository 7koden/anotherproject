#ifndef LIBTBRPG_H
#define LIBTBRPG_H

#include <string>

#define RPG_DIR_NORTH 0
#define RPG_DIR_EAST 1
#define RPG_DIR_SOUTH 2
#define RPG_DIR_WEST 3

using namespace std;

class RPG_Room
{
public:
	string name;
	string desc;
	string firstVisitDescAddition;
	RPG_Room* dirRooms[3];

	RPG_Room();
	~RPG_Room();
};

class RPG_Player
{
public:
	string name;
	
	bool isNameValid();
};

#endif
