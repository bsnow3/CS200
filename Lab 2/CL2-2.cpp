#include <iostream>
#include <string>
using namespace std;

int main()
{
	float studentpoints, totalPoints, percent;
	string passfail;
	cout << "What was your score?" << endl;
	cin >> studentpoints;
	cout << "What was the total points?" << endl;
	cin >> totalPoints;
	percent = (studentpoints / totalPoints) * 100;
	if (percent > 70)
	{
		passfail = "Pass";
	}
	else
		passfail = "Fail";
	cout << "Score: " << percent << "%      " << passfail << endl;
	while (true);
	return 0;
}