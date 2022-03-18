#include <iostream>
using namespace std;

class Product
{
protected:
	string name;
	int price;
	double weight;
public:
	Product(string m_name, int m_price, double m_weight) : name(m_name), price(m_price), weight(m_weight)
	{

	}
	string Name()
	{
		return name;
	}
	int Price()
	{
		return price;
	}
	double Weight()
	{
		return weight;
	}
	~Product()
	{
		cout << "~Product()" << endl;
	}
};

class Buy : public Product
{
protected:
public:
	Buy(string m_name, int m_price, double m_weight) : Product(m_name, m_price, m_weight)
	{

	}
	~Buy()
	{
		cout << "~Buy()" << endl;
	}
};

class Check : public Buy, public Product
{
protected:
public:
	Check(string m_name, int m_price, double m_weight) : Buy(m_name, m_price, m_weight), Product(m_name, m_price, m_weight)
	{
		cout << endl;
		cout << "Unit: " << m_name << endl;
		cout << "Price: " << m_price << "$" << endl;
		cout << "Weight: " << m_weight << "kg" << endl;
		cout << endl;
	}
	~Check()
	{
		cout << "~Check()" << endl;
	}
};

int main()
{
	Product p();
	Buy b("Display",10,50.5);
	Check c("Display", 10, 50.5);

	cout << b.Name() << endl;
	cout << b.Price() << endl;
	cout << b.Weight() << endl;

}