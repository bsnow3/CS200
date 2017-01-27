#include <iostream>
#include <string>
using namespace std;

int main()
{
	int choice;
	cout << "Enter your number between 0 and 5: ";
	cin >> choice;
	do
	{

		if (choice > 5 || choice < 0)
		{
			cout << "Invalid Entry. Try again: " << endl;
			cin >> choice;
		}
	} while (choice > 5 || choice < 0);
	cout << "Thank you.";
	while (true);
	return 0;

}