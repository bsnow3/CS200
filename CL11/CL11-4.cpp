#include <iostream>
#include <string>
using namespace std;

int main()
{
	int in = 20;
	float fl = 9.99;
	double dou = 4.20;
	bool bo = true;
	int* pin = &in;
	float* pfl = &fl;
	double* pdou = &dou;
	bool* pbo = &bo;
	char choice = 0;
	cout << "[i]nt, [f]loat, [b]oolean, or [d]ouble?" << endl;
	cin >> choice;
	if (choice == 'i')
	{
		cout << "Integer Size: " << sizeof(in) << ", address: " << pin << endl;
	}
	else if (choice == 'f')
	{
		cout << "Float Size: " << sizeof(fl) << ", address: " << pfl << endl;
	}
	else if (choice == 'b')
	{
		cout << "Bool Size: " << sizeof(bo) << ", address: " << pbo << endl;
	}
	else if (choice == 'd')
	{
		cout << "Double Size: " << sizeof(dou) << ", address: " << pdou << endl;
	}
	while (true)
	{

	}
	return 0;
}