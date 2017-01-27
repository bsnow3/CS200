#include <iostream>
#include <string>
using namespace std;

int main()
{
	float battery;
	string star;
	cout << "What is your current battery charge? %";
	cin >> battery;
	if (battery >= 75)
	{
		star = "****";
	}
	else if (battery >= 50)
	{
		star = "*** ";
	}
	else if (battery >= 25)
	{
		star = "**  ";
	}
	else
		star = "*   ";
	cout << "[" << star << "]";
	while (true);
	return 0;
}