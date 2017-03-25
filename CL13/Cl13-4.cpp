#include <iostream>
#include <string>
using namespace std;

struct Employee
{
	string name;
};
struct Manager
{
	string name;
	Employee* employees;
	int employeeCount;
};
int main()
{
	string names[16] = {
		"John", "Johnny", "Johnathan", "Jon",
		"Jonny", "Jonathan", "Jonnie", "Johnnie",
		"Jouni", "Ray", "Rodger", "Rosmunda",
		"Bree", "Blee", "Tree", "Dee"
	};
	cout << "How many managers?" << endl;
	int managercount = 0;
	cin >> managercount;
	int i = 0;
	Manager* managers;
	int* mgrcount;
	mgrcount = new int[managercount];
	while (i != managercount)
	{
		managers[i].name = names[rand() % 16];
		cout << "Manager: " << managers[i].name << endl;
		managers[i].employeeCount = rand() * 3;
		cout << "Underlings: " << managers[i].employeeCount << endl;
		i++;
	}
	return 0;
}
