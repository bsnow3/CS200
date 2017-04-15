#include <iostream>
#include <string>
#include <fstream>
using namespace std;
struct option
{
	string title;
	int count;
};
struct poll
{
	string question;
	option options[4];
};

int main()
{
	poll mypoll;
	mypoll.question = "What is the best food?";
	mypoll.options[0].title = "Pizza";
	mypoll.options[0].count = 0;

	mypoll.options[1].title = "Veggie Taco";
	mypoll.options[1].count = 0;

	mypoll.options[2].title = "Samosas";
	mypoll.options[2].count = 0;

	mypoll.options[3].title = "Sushi";
	mypoll.options[3].count = 0;
	bool done = false;
	while (!done)
	{
		cout << mypoll.question << endl
			<< "0. " << mypoll.options[0].title << endl
			<< "1. " << mypoll.options[1].title << endl
			<< "2. " << mypoll.options[2].title << endl
			<< "3. " << mypoll.options[3].title << endl
			<< "4. EXIT" << endl;
		int choice;
		cin >> choice;
		if (choice != 4)
		{
			mypoll.options[choice].count++;
		}
		else
		{
			done = true;
		}
	}
	ofstream output;
	output.open("results.txt");
	output << "Question" << endl
		<< mypoll.question << endl
		<< endl
		<< "Results" << endl
		<< "0. " << mypoll.options[0].title << "\t" << mypoll.options[0].count << endl
		<< "1. " << mypoll.options[1].title << "\t" << mypoll.options[1].count << endl
		<< "2. " << mypoll.options[2].title << "\t" << mypoll.options[2].count << endl
		<< "3. " << mypoll.options[3].title << "\t" << mypoll.options[3].count << endl;
	output.close();
	return 0;
}