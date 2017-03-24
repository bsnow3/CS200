#include <iostream>
#include <string>
#include <cstdlib>      // to use rand()
#include <ctime>        // to use time()
using namespace std;

int main()
{
	srand(time(NULL)); // (At the beginning of main())
	cout << "How many lotto balls? ";
	int size;
	cin >> size;
	int* lottonumbers;
	lottonumbers = new int[size];
	cout << "Lotto number count: " << size << endl;
	int i = 1;
	while (i <= size)
	{
		int random = rand();
		if (random < 100)
		{
			cout << random << "   ";
			i++;
		}
	}
	while (true)
	{ }
	return 0;
}