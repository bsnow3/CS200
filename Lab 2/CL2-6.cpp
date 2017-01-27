#include <iostream>
#include <string>
using namespace std;

int main()
{
	float x, y, z;
	char op;
	cout << "Enter first number" << endl;
	cin >> x;
	cout << "enter second number" << endl;
	cin >> y;
	cout << "What operator do you want to use?(+,-,*,/)" << endl;
	cin >> op;
	switch (op)
		{

		case '+':
			{
				z = x + y;
			}
		break;

		case '-':
		{
			z = x - y;
		}
		break;

		case '*':
		{
			z = x * y;
		}
		break;

		case '/':
		{
			z = x / y;
		}
		break;
		default:
		cout << "Invalid Operator" << endl;
		}
	cout << "Answer = " << z;
	while (true);
	return 0;
}