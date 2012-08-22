#include "libtbrpg.h"

RPG_Room::RPG_Room()
{
	dirRooms[0] = NULL;
	dirRooms[1] = NULL;
	dirRooms[2] = NULL;
	dirRooms[3] = NULL;
}

RPG_Room::~RPG_Room()
{
	// Added in the likely case it's needed.
}
