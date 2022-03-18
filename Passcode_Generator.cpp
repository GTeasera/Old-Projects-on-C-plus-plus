#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	char pass_sym;
	string passcode;
	int choose;

PASSCHOOSE:
	cout << "\t\t\tEnter your level of passcode: \n\t\t\t> "; cin >> choose;
	if (choose == 1)
	{
		while (passcode.size() < 7)
		{
			pass_sym = rand() % 10 + 48;
			passcode.push_back(pass_sym);
		}
		cout << "\n\t\tYour passcode is: " << passcode << "\tLEVEL #" << choose << endl;
	}
	else if (choose == 2)
	{
		while (passcode.size() < 14)
		{
			pass_sym = rand() % 57 + 65;
			passcode.push_back(pass_sym);
		}
		cout << "\n\t\tYour passcode is: " << passcode << "\tLEVEL #" << choose << endl;
	}
	else if (choose == 3)
	{
		while (passcode.size() < 21)
		{
			pass_sym = rand() % 250 + 14;
			passcode.push_back(pass_sym);
		}
		cout << "\n\t\tYour passcode is: " << passcode << "\tLEVEL #" << choose << endl;
	}
}