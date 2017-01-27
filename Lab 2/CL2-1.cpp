#include <iostream>
#include <string>
using namespace std;

int main()
{
	string homeTown, name;
	cout << "What is your home town?" << endl;
	cin >> homeTown;
	if (homeTown.size() > 6)
	{
		cout << endl << "That's a long name!" << endl;
	}

	cout << endl << "What is your name?" << endl;
	cin >> name;

	cout << endl << "Hello, " << name << " from " << homeTown << "!" << endl;
	while (true);
	return 0;
}