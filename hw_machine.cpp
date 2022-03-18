#include <iostream>

// реалізуйте спадкування !


class Machine
{
private:
	int cost;
public:
	Machine(int set) : cost(set) { }

	void print()
	{
		std::cout << "Cost: " << cost << std::endl;
	}
};

class Car : public Machine
{

public:
	Car(int x) : Machine(x)
	{ }
	
};

class Velociped : public Machine
{

public:
	Velociped(int y) : Machine(y)
	{ }
};

class Povozka : public Machine
{

public:
	Povozka(int z) : Machine(z)
	{ }
};

int main()
{
	Car c1(5);
	Velociped c2(4);
	Povozka c3(3);

	c1.print();
	c2.print();
	c3.print();
}
