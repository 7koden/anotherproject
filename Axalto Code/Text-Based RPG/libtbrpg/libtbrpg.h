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

#endif
