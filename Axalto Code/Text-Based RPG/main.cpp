#include <iostream>
#include <string>
#include <windows.h>

#include "libtbrpg/libtbrpg.h"

using namespace std;

void ClearScreen()
{
  HANDLE                     hStdOut;
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  DWORD                      count;
  DWORD                      cellCount;
  COORD                      homeCoords = { 0, 0 };

  hStdOut = GetStdHandle( STD_OUTPUT_HANDLE );
  if (hStdOut == INVALID_HANDLE_VALUE) return;

  /* Get the number of cells in the current buffer */
  if (!GetConsoleScreenBufferInfo( hStdOut, &csbi )) return;
  cellCount = csbi.dwSize.X *csbi.dwSize.Y;

  /* Fill the entire buffer with spaces */
  if (!FillConsoleOutputCharacter(
    hStdOut,
    (TCHAR) ' ',
    cellCount,
    homeCoords,
    &count
    )) return;

  /* Fill the entire buffer with the current colors and attributes */
  if (!FillConsoleOutputAttribute(
    hStdOut,
    csbi.wAttributes,
    cellCount,
    homeCoords,
    &count
    )) return;

  /* Move the cursor home */
  SetConsoleCursorPosition( hStdOut, homeCoords );
}

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
			 << "Maximum size: 50 characters." << endl
			 << "Accepted Characters: a-z, A-Z and Space" << endl << endl;
	}
	cout << "Hello, " << cmd << endl;
	
	return 0;
}
