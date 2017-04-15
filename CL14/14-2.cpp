#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	cout << "Word to look for: ";
	string in;
	string out;
	string buffer;
	cin >> in;
	cout << "Word to replace with: ";
	cin >> out;

	ifstream input("text.txt");
	ofstream output("text1.txt");
	while (input >> buffer)
	{
		if (buffer == in)
		{
			output << out << " ";
		}
		else
		{
			output << buffer << " ";
		}
	}
	input.close();
	output.close();
	return 0;
}