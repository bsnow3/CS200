#include <iostream>
using namespace std;
#include <string>
int main()
{
	int number;
	string roman;
	while (true)
	{
		cout << "Enter a number between 1 and 5: ";
		cin >> number;
		switch (number)
		{
		case 1: roman = "I";
			break;
		case 2: roman = "II";
			break;
		case 3: roman = "III";
			break;
		case 4: roman = "VI";
			break;
		case 5: roman = "V";
			break;
		}
		cout << "Roman numeral is: " << roman << endl;
	}
	return 0;
}