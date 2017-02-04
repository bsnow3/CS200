#include <iostream>
#include <string>
using namespace std;

int main()
{
	int feet = 0;
	while (true)
	{
		cout << "Enter the number of feet: ";
		cin >> feet;
		for (int i = 0; i <= feet * 12; i++)
		{
			if (i % 12 == 0)
			{
				cout << "|";
			}
			else
			{
				cout << "-";
			}
		}
		cout << endl;
		cout << endl;
	}
	return 0;
}