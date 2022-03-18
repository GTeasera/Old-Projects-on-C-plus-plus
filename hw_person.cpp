#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	string name; int age; int type;
public:
	Person(string setName)
	{
		int setAge = rand() % 20 + 20;
		int setType = rand() % 3;

		name = setName;
		age = setAge;
		type = setType;
	}
	string Name() { return name; }
	int Age() { return age; }
	int Type() { return type; }
	void Info() { cout << "My name is " << name << ". I`m " << age << " years old." << endl; }
};

void sayHello(string name, string name1, int age1, int age2, int type)
{
	if (type == 1) { cout << name1 << "(1): " << "Hello, " << name << endl; }
	else if (type == 2) { cout << name1 << "(2): " << "Hi, " << name << endl; }
	else if (type == 3)
	{
		if (age1 < age2) { swap(age1, age2); }
		else { }

		if (age1 - age2 > 5) { cout << name1 << "(3): " << "Hello, " << name << endl; }
		else if (age1 - age2 < 5) { cout << name1 << "(3): " << "Hi, " << name << endl; }
	}
}

int main()
{
	Person p1("Andrey");
	Person p2("Alex");
	Person p3("Nikita");
	Person p4("Sergey");
	Person p5("Pavel");

	sayHello(p1.Name(), p2.Name(), p1.Age(), p2.Age(), p2.Type());
	p2.Info();
	sayHello(p2.Name(), p1.Name(), p2.Age(), p1.Age(), p1.Type());
	p1.Info(); 
	cout << endl;

	sayHello(p4.Name(), p3.Name(), p4.Age(), p3.Age(), p3.Type());
	p3.Info();
	sayHello(p3.Name(), p4.Name(), p3.Age(), p4.Age(), p4.Type());
	p4.Info();
	cout << endl;

	sayHello(p5.Name(), p1.Name(), p5.Age(), p1.Age(), p1.Type());
	p1.Info();
	sayHello(p1.Name(), p5.Name(), p1.Age(), p5.Age(), p5.Type());
	p5.Info();
	cout << endl;

	return 0;
}