#include <iostream>
using namespace std;
#include <string>
int main()
{
	char answer;
	int number;
	int sum = 0;
	bool isdone = false;
	while (!isdone)
	{
		cout << "Enter a number: ";
		cin >> number;
		sum = sum + number;
		cout << endl;
		cout << "Type (Q) to quit, or (A) to enter another." << endl;
		cout << "Choice: ";
		cin >> answer;
		if (answer == 'Q' || answer == 'q')
		{
			isdone = true;
		}
	}
	cout << endl;
	cout << "The sum is " << sum;
	while (true)
	{

	}
	return 0;
}