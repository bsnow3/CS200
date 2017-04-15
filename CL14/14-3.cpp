#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
struct PoemMaker
{
	string nouns[10];
	string adjs[10];
	void LoadNouns(string filename)
		{
			PoemMaker poem;
			ifstream input(filename);
			for (int i = 0; i < 10, i++;)
				{
					input >> poem.nouns[i];
				}
			input.close();
		}
	void LoadAdjectives(string filename)
	{
		PoemMaker poem;
		ifstream input(filename);
		for (int i = 0; i < 10, i++;)
		{
			input >> poem.adjs[i];
		}
		input.close();
	}
	string GetRandomNoun()
	{
		PoemMaker poem;
		int random = rand() % 10;
		return poem.nouns[random];
	}
	string GetRandomAdjective()
	{
		PoemMaker poem;
		int random = rand() % 10;
		return poem.adjs[random];
	}
	string GeneratePoem(int lines)
	{
		string poem = "";
		string are = " are ";
		for (int i = 0; i < lines, i++;)
		{
			poem = poem + GetRandomNoun() + are + GetRandomAdjective() + "\n";

		}
		return poem;
	}
};
int main()
{
	srand(time(NULL));
	PoemMaker poem;
	poem.LoadAdjectives("adj.txt");
	poem.LoadNouns("noun.txt");
	cout << poem.GeneratePoem(5);
	while (true)
	{

	}
	return 0;
}