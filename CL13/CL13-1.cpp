#include <iostream>
#include <string>
using namespace std;

int main()
{
	int* myint = new int;
	string* mystr = new string;
	float* myfloat = new float;
	*myint = 20;
	*mystr = "Bradly";
	*myfloat = 199.99;
	cout << *myint << " " << *mystr << " " << *myfloat << endl;
	delete myint, mystr, myfloat;
	while(true)
	{ }

	return 0;
}