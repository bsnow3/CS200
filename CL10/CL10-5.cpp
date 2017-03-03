#include <iostream>
#include <string>
using namespace std;

int main()
{
	string items[3];
	float prices[3];
	int arraySize = 3;
	int itemCount = 0;
	for(itemCount = 0; itemCount < arraySize; itemCount++)
	{
		cout << "Enter item name: ";
		cin >> items[itemCount];
		cout << "Enter item price: ";
		cin >> prices[itemCount];
	}
	int counter = 0;
	for(counter = 0; counter < itemCount; counter++)
	{
		cout << "Item #";
		cout << counter + 1 << ". " << items[counter] << ", Price: " << prices[counter] << endl;
	}
	while (true)
	{

	}
}