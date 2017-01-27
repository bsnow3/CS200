#include <iostream>
#include <string>
using namespace std;

int main()
{
	int countUp = 0;
	while (countUp <= 20)
	{
		cout << countUp << " ";
		countUp = countUp + 5;
	}
	cout << endl << "Done!";
	while (true);
	return 0;

}