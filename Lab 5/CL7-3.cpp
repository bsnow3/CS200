#include <iostream>
#include <string>
using namespace std;

// Declare function here
float CountChange(int quartercount, int dimecount, int nickelcount, int pennycount)
{
	float money = quartercount * .25 + nickelcount * .05 + dimecount * .1 + pennycount * .01;
	return money;
}
int main()
{
	while (true)
	{
		int quarters, dimes, nickels, pennies;

		cout << "How many quarters? ";
		cin >> quarters;

		cout << "How many dimes? ";
		cin >> dimes;

		cout << "How many nickels? ";
		cin >> nickels;

		cout << "How many pennies? ";
		cin >> pennies;

		float money = CountChange(quarters, dimes, nickels, pennies);
		cout << "Money: $" << money << endl;

		cout << endl << endl;
	}
	while (true);
	return 0;
}