#include <iostream>
#include <string>
using namespace std;

// Input/Output functions

string GetHindi(string english)
{
	if (english == "cat")
	{
		return "billee";
	}
	else if (english == "dog")
	{
		return "kutta";
	}
	else if (english == "frog")
	{
		return "medhak";
	}
	else if (english == "rabbit")
	{
		return "khargosh";
	}
	else
		return "Word not found.";
}

string GetEnglish(string hindi)
{
	if (hindi == "billee")
	{
		return "cat";
	}
	else if (hindi == "kutta")
	{
		return "dog";
	}
	else if (hindi == "medhak")
	{
		return "frog";
	}
	else if (hindi == "khargosh")
	{
		return "rabbit";
	}
	else
		return "Word not found.";
}

// Menu functions

void DisplayMenu()
{
	cout << "1. English to Hindi" << endl
		<< "2. Hindi to English" << endl
		<< "3. Quit" << endl;
}

void EnglishToHindi()
{
	string word;
	cout << endl << "English: ";
	cin >> word;
	cout << "Hindi Translation: " << GetHindi(word) << endl
		<< endl;
}

void HindiToEnglish()
{
	string word;
	cout << endl << "Hindi: ";
	cin >> word;
	cout << "English Translation: " << GetEnglish(word) << endl
		<< endl;
}

int main()
{
	int choice;
	bool exit = false;
	while (exit == false)
	{
		DisplayMenu();
		cin >> choice;
		if (choice == 1)
		{
			EnglishToHindi();
		}
		else if (choice == 2)
		{
			HindiToEnglish();
		}
		else
		{
			exit = true;
		}
	}
	return 0;
}