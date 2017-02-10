#include <iostream>
#include <string>
using namespace std;

float Average(float a, float b, float c)
{
	return (a + b + c) / 3;
}

void Test_Average()
{
	int ave = 2;
	int avetest = Average(3, 2, 1);
	if (ave != avetest)
	{
		cout << "Fail" << endl;
	}
	else
		cout << "Pass" << endl;
}

int Max(int a, int b, int c)
{
	if (a < b && c < b)
	{
		return b;
	}
	else 
	{
		return c;
	}
	return a;
}

void Test_Max()
{
	int max = 4;
	int maxtest = Max(2, 3, 4);
	if (max != maxtest)
	{
		cout << "Fail" << endl;
	}
	else
		cout << "Pass" << endl;
}

int Factorial(int n)
{
	int fac = n;
	int d = fac;
	for (int i = n; i > 1;)
	{
		i--;
		fac = fac * i;
	}
	return fac;
}

void Test_Factorial()
{
	int fac = 24;
	int factest = Factorial(4);
	if (fac != factest)
	{
		cout << "Fail " << factest << endl;
	}
	else
		cout << "Pass " << factest << endl;
}

string FormatName(string first, string last)
{
	return last + ", " + first;
}

void Test_FormatName()
{
	string form = "snow, bradly";
	string formtest = FormatName("bradly", "snow");
	if (form != formtest)
	{
		cout << "Fail " << endl;
	}
	else
		cout << "Pass " << endl;
	while (true);
}

int main()
{
	Test_Average();
	Test_Max();
	Test_Factorial();
	Test_FormatName();
	while(true)
	return 0;
}