#include <iostream>
using namespace std;

class Figure
{
private:

public:
	Figure()
	{

	}
	virtual int P() = 0;
	virtual int S() = 0;
};

class Trikutnik : public Figure
{
private:
	double a, b, c, h;
public:
	Trikutnik(double a, double b, double c, double h) : a(a) , b(b) , c(c), h(h)
	{

	}
	virtual int P()
	{
		return a + b + c;
	}
	virtual int S()
	{
		return a*h;
	}
};

int main()
{
	Figure* ptr = new Trikutnik(5, 8, 6, 5);

	cout << "P: " << ptr->P();
	cout << "\nS: " << ptr->S();
}