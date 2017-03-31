#include <iostream>
#include <string>
using namespace std;

// A person struct - by making a struct, we can then
// declare a variable whose data-type is Person.
// The Person data-type contains two internal variables:
// name, a string	&	home, a string pointer
struct Location
{
	string city;
	string state;
	int zip;
};
struct Person
{
	string name;
	Location* home;
};


void SetupLocations(Location* loc);
void SetupPeople(Person* personList, int personCount, Location* loc, int locationCount);

int main()
{
	Location loc[5];							// Create a string* pointer			// Use the pointer to create a dynamic array
	SetupLocations(loc);					// Call function to set up data


	Person personList[4];								// Create a Person* pointer					// Use the pointer to create a dynamic array
	SetupPeople(personList, 4, loc, 5);	// Call function to set up data


													// Display all people info
	for (int p = 0; p < 4; p++)
	{
		// Display each person's name and their home location's name.
		// Note that Person.home is a POINTER. You have to dereference
		// the pointer to get its value, otherwise it will just
		// give you a memory address.

		cout << personList[p].name << "\t" << personList[p].home->city << "\t" << personList[p].home->state << "\t" << personList[p].home->zip << endl;
	}


	// Make sure to free up the memory afterward!
	while (true)
	{

	}
	return 0;
}

void SetupLocations(Location* loc)
{
	loc[0].city = "Raytown";
	loc[1].city= "Grandview";
	loc[2].city = "Independence";
	loc[3].city = "Liberty";
	loc[4].city = "Belton";
	loc[0].state = "MO";
	loc[1].state = "MO";
	loc[2].state = "MO";
	loc[3].state = "MO";
	loc[4].state = "MO";
	loc[0].zip = 64100;
	loc[1].zip = 64101;
	loc[2].zip = 64102;
	loc[3].zip = 64103;
	loc[4].zip = 64104;
}

void SetupPeople(Person* personList, int personCount, Location* loc, int locationCount)
{
	for (int p = 0; p < personCount; p++)
	{
		cout << "Person " << p + 1 << "'s name: ";

		cin >> personList[p].name;

		cout << endl << "Locations:" << endl;
		for (int c = 0; c < locationCount; c++)
		{
			cout << c + 1 << ". " << loc[c].city << endl;
		}
		cout << personList[p].name << "'s home: ";

		int index;
		cin >> index;
		index--;
		personList[p].home = &loc[index];
	}
}