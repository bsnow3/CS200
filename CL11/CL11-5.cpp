#include <iostream>
#include <string>
using namespace std;

int main()
{
	float priceHamburger = 1.00;
	float priceFries = 2.00;
	float priceSalad = 3.00;
	float* ptrPrice;
	float taxamt;
	string choice;
	cout << "[Hamburger], [Fries], or [Salad]?" << endl;
	cin >> choice;
	if (choice == "Hamburger")
	{
		ptrPrice = &priceHamburger;
		cout << "Hamburger price: " << *ptrPrice << endl;
		taxamt = *ptrPrice * .065;
		*ptrPrice = taxamt + *ptrPrice;
		cout << "Hamburger price with tax: " << *ptrPrice << endl;
	}
	else if (choice == "Fries")
	{
		ptrPrice = &priceFries;
		cout << "Fries price: " << *ptrPrice << endl;
		taxamt = *ptrPrice * .065;
		*ptrPrice = taxamt + *ptrPrice;
		cout << "Fries price with tax: " << *ptrPrice << endl;
	}
	else if (choice == "Salad")
	{
		ptrPrice = &priceSalad;
		cout << "Salad price: " << *ptrPrice << endl;
		taxamt = *ptrPrice * .065;
		*ptrPrice = taxamt + *ptrPrice;
		cout << "Salad price with tax: " << *ptrPrice << endl;
	}
	while (true)
	{

	}
	return 0;
}