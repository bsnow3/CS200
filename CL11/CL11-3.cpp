#include <iostream>
#include <string>
using namespace std;

int main()
{
	int in = 20;
	float fl = 9.99;
	string st = "Bob";
	int* ptrin = &in;
	float* ptrfl = &fl;
	string* ptrst = &st;
	cout << ptrin << " = " << in << endl
		<< ptrfl << " = " << fl << endl 
		<< ptrst << " = " << st << endl;
	while (true)
	{

	}
	return 0;
}