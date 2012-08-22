#include "libtbrpg.h"

#include <iostream>
#include <string>

bool RPG_Player::isNameValid()
{
	if(name.size() > 25)
		return false;
	
	const string charWhitelist = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ";
	
	bool charCheck;
	for(unsigned int i = 0; i < name.size(); i++)
	{
		charCheck = false;
		for(unsigned int j = 0; j < charWhitelist.size(); j++)
		{
			if(charWhitelist[j] == name[i])
			{
				charCheck = true;
				break;
			}
		}
		
		if(!charCheck)
			return false;
	}
	
	return true;
}
