#include <iostream>
#include <string>
using namespace std;

int main()
{
	float price = 0;
	string city;
	float adjusted = 0;
	cout << "What is the item price? ";
	cin >> price;
	cout << "What city? ";
	cin >> city;
	if (city == "Olathe")
	{
		adjusted = price * .065 + price;
	}
	else if (city == "OverlandPark")
	{
		adjusted = price * .0935 + price;
	}
	else if (city == "Raytown")
	{
		adjusted = price * .08225 + price;
	}
	else if (city == "Independence")
	{
		adjusted = price * .07725 + price;
	}
	else
	{
		adjusted = price * .08 + price;
	}
	cout << "Total price is: $" << adjusted;
	while (true)
	{ }
	return 0;
}