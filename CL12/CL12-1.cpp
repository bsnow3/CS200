#include <iostream>
#include <string>
using namespace std;

struct college
{
	string name;
	string state;
};

struct student
{
	string name;
	college* ptrSchool;
	string schoolinfo;

};

int main()
{
	college colleges[3];
	colleges[0].name = "JCCC";
	colleges[1].name = "KCKCC";
	colleges[2].name = "MCCKC";
	colleges[0].state = "KS";
	colleges[1].state = "KS";
	colleges[2].state = "MO";

	int i = 1;
	student you[5];
	while (i != 6)
	{
		cout << "Enter name for student " << i << ":";
		cin >> you[i-1].name;
		cout << endl;
		cout << "Which college for " << you[i-1].name << "?" << endl << endl
			<< "1. JCCC" << endl
			<< "2. MCCKC" << endl
			<< "3. KCKCC" << endl;
		int school;
		cin >> school;
		cout << endl;
		you[i-1].ptrSchool = &colleges[school-1];
		i++;
		
	}
	cout << "All students:" << endl << endl <<
		"1. " << you[0].name << "    " << you[0].ptrSchool->name << "  " << you[0].ptrSchool->state << endl <<
		"2. " << you[1].name << "    " << you[1].ptrSchool->name << "  " << you[1].ptrSchool->state << endl <<
		"3. " << you[2].name << "    " << you[2].ptrSchool->name << "  " << you[2].ptrSchool->state << endl <<
		"4. " << you[3].name << "    " << you[3].ptrSchool->name << "  " << you[3].ptrSchool->state << endl <<
		"5. " << you[4].name << "    " << you[4].ptrSchool->name << "  " << you[4].ptrSchool->state << endl;
	while(true)
	{ }
	return 0;

}