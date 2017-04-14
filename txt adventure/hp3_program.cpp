/*
MODIFY THIS FILE
*/

#include "hp3_program.hpp"

#include <iostream>
using namespace std;

/* Setup() - 	Create the list of locations
 *              Allocate needed memory
 * */
void Program::Setup()
{
	locationList = new Location[6];
	locationList[0].name = "Treasure Room";
	locationList[1].name = "Castle Entrance";
	locationList[2].name = "Main Hall";
	locationList[3].name = "Kitchen";
	locationList[4].name = "Armory";
	locationList[5].name = "Stock Room";
	locationList[0].description = "Gold everywhere!";
	locationList[1].description = "Everything is beat up.";
	locationList[2].description = "There is a moldy rug on the floor.";
	locationList[3].description = "A suit of armor is piled in the corner.";
	locationList[4].description = "A ransacked kitchen.";
	locationList[5].description = "A closet with empty shelves.";
	for (int i = 0; i < 5, i++;)
	{
		locationList[i].ptrToNorth = nullptr;
	}
	for (int i = 0; i < 5, i++;)
	{
		locationList[i].ptrToEast = nullptr;
	}
	for (int i = 0; i < 5, i++;)
	{
		locationList[i].ptrToSouth = nullptr;
	}
	for (int i = 0; i < 5, i++;)
	{
		locationList[i].ptrToWest = nullptr;
	}
	locationList[1].ptrToEast = &locationList[2];
	locationList[4].ptrToEast = &locationList[5];
	locationList[2].ptrToWest = &locationList[1];
	locationList[3].ptrToWest = &locationList[2];
	locationList[5].ptrToWest = &locationList[4];
	locationList[2].ptrToSouth = &locationList[4];
	locationList[3].ptrToSouth = &locationList[5];
	locationList[3].ptrToNorth = &locationList[0];
	locationList[4].ptrToNorth = &locationList[2];
	locationList[5].ptrToNorth = &locationList[3];
	
}



/* Cleanup() - 	Clean up memory allocated
 * */
void Program::Cleanup()
{
	delete locationList;
}



/* Main() - Main program loop
 * */
void Program::Main()
{
	ptrCurrentLocation = &locationList[1];
	bool done = false;
	while (!done)
	{
		DisplayCurrentLocation();
		if (ptrCurrentLocation == &locationList[0])
		{
			done = true;
			cout << "You win!" << endl;
		}
		else
		{
			string userinput = GetUserInput();
			if (userinput == "n" && ptrCurrentLocation->ptrToNorth != nullptr)
			{
				ptrCurrentLocation = ptrCurrentLocation->ptrToNorth;
			}
			else if (userinput == "s" && ptrCurrentLocation->ptrToSouth != nullptr)
			{
				ptrCurrentLocation = ptrCurrentLocation->ptrToSouth;
			}
			else if (userinput == "e" && ptrCurrentLocation->ptrToEast != nullptr)
			{
				ptrCurrentLocation = ptrCurrentLocation->ptrToEast;
			}
			else if (userinput == "w" && ptrCurrentLocation->ptrToWest != nullptr)
			{
				ptrCurrentLocation = ptrCurrentLocation->ptrToWest;
			}
			else if (userinput == "q")
			{
				done = true;
			}
			else
			{
				cout << "Invalid choice!" << endl;
			}
		}
	}
	cout << endl << "GOOD BYE!" << endl;
}



/* DisplayCurrentLocation() - Use the current location
 *              pointer to display the location's name
 *              and description, as well as which
 *              directions the player can move next.
 * */
void Program::DisplayCurrentLocation()
{
	cout << ptrCurrentLocation->name << endl;
	cout << ptrCurrentLocation->description << endl;
	cout << "You can move: ";
	if(ptrCurrentLocation->ptrToEast != nullptr)
	{
		cout << "East ";
	}
	if (ptrCurrentLocation->ptrToWest != nullptr)
	{
		cout << "West ";
	}
	if (ptrCurrentLocation->ptrToNorth != nullptr)
	{
		cout << "North ";
	}
	if (ptrCurrentLocation->ptrToSouth != nullptr)
	{
		cout << "South ";
	}
	cout << endl;
}



/* GetUserInput() - Display the list of options to the
 *                  user, then get their input and return
 *                  their choice.
 * */
string Program::GetUserInput()
{
	cout << "Options: (n)orth, (s)outh, (e)ast, (w)est, (q)uit" << endl;
	string option;
	cin >> option;
	return option;
}



/************************************/
/* Don't modify *********************/
/************************************/

Program::Program()
{
    locationList = nullptr;
    ptrCurrentLocation = nullptr;
    Setup();
}

Program::~Program()
{
    Cleanup();
}