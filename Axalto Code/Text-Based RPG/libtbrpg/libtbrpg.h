#ifndef LIBTBRPG_H
#define LIBTBRPG_H

#include <string>

using namespace std;

class RPG_Room
{
public:
	string desc;
	RPG_Room* dirRooms[3];

	RPG_Room();
	~RPG_Room();
};

#include "rpg_room.cpp" // I know, dirty but I had no time to tell the linker where it was

#endif