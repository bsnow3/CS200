#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "What is your favorite fruit?" << endl;
	cout << "1. Apple" << endl;
	cout << "2. Banana" << endl;
	cout << "3. Pear" << endl;
	cout << "4. Strawberry" << endl;
	cout << endl << "Your Selection:";
	int choice;
	cin >> choice;
	if (choice >= 1 && choice <= 4)
	{
		cout << "Good Choice!";
	}
	else
		cout << "Invalid Selection!";
	while (true);
	return 0;
}