#include <iostream>
#include <string>
using namespace std;

int main()
{
	string ar[4];
	ar[0] = "JCCC";
	ar[1] = "UMKC";
	ar[2] = "KU";
	ar[3] = "MS&T";
	cout << "Array address: " << ar << endl
		<< "Item 0 address: " << &ar[0] << "     value: " << ar[0] << endl
		<< "Item 1 address: " << &ar[1] << "     value: " << ar[1] << endl
		<< "Item 2 address: " << &ar[2] << "     value: " << ar[2] << endl
		<< "Item 3 address: " << &ar[3] << "     value: " << ar[3] << endl;
	while(true)
	{ }
	return 0;
}