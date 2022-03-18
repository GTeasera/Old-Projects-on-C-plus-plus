#include <iostream>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

class CarShop
{
protected:
	string carName; int year; double engine; double price; int ID;
public:
	CarShop(string setName = "", int setYear = 0, double setEngine = 0, double setPrice = 0, int setID = 0) : 
		carName(setName), year(setYear), engine(setEngine), price(setPrice), ID(setID)
	{
		cout << "\nCarShop();" << "\n\t\t\tCar Name: " << carName << "\n\t\t\tYear:" << year << "\n\t\t\tEngine: " << engine
			<< "\n\t\t\tPrice: " << price <<" $" << "\n\t\t\tID: " << ID << endl; }
	~CarShop()
	{
		cout << "\n~CarShop()" << endl;
	}
	
};

int main()
{
	CarShop c1("Audi", 2021, 605, 3000, 0001);
	CarShop c2("Mersedes", 2022, 900, 5000, 0002);
}