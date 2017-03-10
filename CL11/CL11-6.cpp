#include <iostream>
#include <string>
using namespace std;

int main()
{
	string students[3];
	students[0] = "Ashley";
	students[1] = "Ashlee";
	students[2] = "Ashlie";
	string* ptrStudent;
	int choice;
	cout << "Enter an index from 0 to 2" << endl;
	cin >> choice;
	ptrStudent = &students[choice];
	cout << "Enter a new name for student at index " << choice << "." << endl;
	cin >> *ptrStudent;
	for (int i = 0; i < 3; i++)
	{
		cout << "student " << i << " = " << students[i] << endl;
	}
	while(true)
	{ }
	return 0;
}