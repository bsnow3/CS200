// For displaying text with cout and getting input with cin.
#include <iostream>
using namespace std;
// For making string variables
#include <string> 
int main()
{
	int age;
	float ticketprice;
	cout << "Age? ";
	cin >> age;
	if (age < 13)
	{
		ticketprice = 5;
	}
	else
	{
		ticketprice = 7;
	}
	cout << "Ticket Price: " << ticketprice;
	while (true);
	return 0;
}