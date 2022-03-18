#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Dictionary
{
protected:
	string incName;
	string incOwner;
	long int incNumber;
	string incAdress;
	string incWork;

public:
	Dictionary() : incName(NULL), incOwner(NULL), incNumber(NULL), incAdress(NULL), incWork(NULL)
	{

	}
	Dictionary(string sName, string sOwner, int sNumber, string sAdress, string sWork) : incName(sName), incOwner(sOwner), incNumber(sNumber), incAdress(sAdress), incWork(sWork)
	{

	}

	string foundName()
	{
		return incName;
	}
	string foundOwner()
	{
		return incOwner;
	}
	int foundNumber()
	{
		return incNumber;
	}
	string foundWork()
	{
		return incWork;
	}
};

int main() 
{
	std::ofstream out;
	out.open("d://TEXT.txt", std::ios::app);
	if (out.is_open())
	{
		cout << "File open" << endl;
	}
	else {
		cout << "File isn`t open";
		return -1;
	}

	Dictionary incApple("Apple", "Jobs", 52374410, "Selikon Valley", "IT company");

	out << "Inc Name: " << incApple.foundName() << endl;
	out << "Inc Owner: " << incApple.foundOwner() << endl;
	out << "Inc Number: " << incApple.foundNumber() << endl;
	out << "Inc Work: " << incApple.foundWork() << endl;

	out.close();
}