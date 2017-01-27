#include <iostream>
using namespace std;

int main()
{
	float x1, x2;
	x1 = 5.00;
	cout << "x1 = " << x1 << endl;
	cout << "Where is x2?" << endl;
	cin >> x2;
	if ((x1 - 5) <= x2 || x2 <= (x1 + 5))
	{
		cout << "Within 5 units of x1!";
	}
	else
		cout << "Too far away";
	while (true);
	return 0;
}