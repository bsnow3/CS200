#include <iostream>
#include <string>
using namespace std;

int main()
{
	string items[3];
	float prices[3];
	int arraySize = 3;
	int itemCount = 0;
	while (itemCount < arraySize)
	{
		cout << "Enter item name: ";
		cin >> items[itemCount];
		cout << "Enter item price: ";
		cin >> prices[itemCount];
		itemCount++;
	}
	int counter = 0;
	while (counter < itemCount)
	{
		cout << "Item #";
		cout << counter + 1 << ". " << items[counter] << ", Price: " << prices[counter] << endl;
		counter++;
	}
	while (true)
	{

	}
}