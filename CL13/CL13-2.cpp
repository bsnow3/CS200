#include <iostream>
#include <string>
using namespace std;

int main()
{
	struct Person
	{
		string name;
		Person* ptrFriend;
	};
	Person* person1 = new Person;
	Person* personII = new Person;
	Person* personc = new Person;
	person1->name = "Ted";
	personII->name = "Don";
	personc->name = "Dan";
	person1->ptrFriend = personII;
	personII->ptrFriend = personc;
	personc->ptrFriend = person1;
	cout << "Person A: " << person1->name << ", friend: " << person1->ptrFriend->name << endl
		<< "Person B: " << personII->name << ", friend: " << personII->ptrFriend->name << endl
		<< "Person C: " << personc->name << ", friend: " << personc->ptrFriend->name << endl;
	delete person1, personII, personc;
	while(true)
	{ }
	return 0;
}