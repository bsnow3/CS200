#include <iostream>
#include <string>
using namespace std;

int main()
{
	int secret = 420;
	int guess;
	do
	{
		cout << "Enter your guess: ";
		cin >> guess;
		if (guess > secret)
		{
			cout << "Too High!";
		}
		else if (guess < secret)
		{
			cout << "Too Low!" << endl;
		}
		else
			cout << "You got it!";

	} while (guess != secret);
	cout << endl << "Great Job!";
	while (true);
	return 0;

}