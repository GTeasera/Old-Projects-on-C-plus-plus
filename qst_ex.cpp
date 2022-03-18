#include <iostream>
using namespace std;

int countRight;

void Qestion1(string fillArea)
{
	cout << "#1 8*8 = ?" << endl;
	cout << "	A) 11" << endl;
	cout << "	B) 22" << endl;
	cout << "	C) 33" << endl;
	cout << "	D) 64" << endl;

	cout << "\nChoose answer: \n>" << endl;
	cin >> fillArea;
	if (fillArea == "D")
	{
		countRight = countRight + 2;
	}
	else
	{
		cout << "\n!Wrong!" << endl;
	}
}
void Qestion2(string fillArea)
{
	cout << "#1 7*7 = ?" << endl;
	cout << "	A) 11" << endl;
	cout << "	B) 22" << endl;
	cout << "	C) 33" << endl;
	cout << "	D) 49" << endl;

	cout << "\nChoose answer: \n>" << endl;
	cin >> fillArea;
	if (fillArea == "D")
	{
		countRight = countRight + 2;
	}
	else
	{
		cout << "\n!Wrong!" << endl;
	}
}
void Qestion3(string fillArea)
{
	cout << "#1 11*11 = ?" << endl;
	cout << "	A) 11" << endl;
	cout << "	B) 22" << endl;
	cout << "	C) 33" << endl;
	cout << "	D) 121" << endl;

	cout << "\nChoose answer: \n>" << endl;
	cin >> fillArea;
	if (fillArea == "D")
	{
		countRight = countRight + 2;
	}
	else
	{
		cout << "\n!Wrong!" << endl;
	}
}
void Qestion4(string fillArea)
{
	cout << "#1 12*12 = ?" << endl;
	cout << "	A) 11" << endl;
	cout << "	B) 22" << endl;
	cout << "	C) 33" << endl;
	cout << "	D) 144" << endl;

	cout << "\nChoose answer: \n>" << endl;
	cin >> fillArea;
	if (fillArea == "D")
	{
		countRight = countRight + 2;
	}
	else
	{
		cout << "\n!Wrong!" << endl;
	}
}
void Qestion5(string fillArea)
{
	cout << "#1 1*1 = ?" << endl;
	cout << "	A) 11" << endl;
	cout << "	B) 22" << endl;
	cout << "	C) 33" << endl;
	cout << "	D) 1" << endl;

	cout << "\nChoose answer: \n>" << endl;
	cin >> fillArea;
	if (fillArea == "D")
	{
		countRight = countRight + 2;
	}
	else
	{
		cout << "\n!Wrong!" << endl;
	}
}
void Qestion6(string fillArea)
{
	cout << "#1 2*2 = ?" << endl;
	cout << "	A) 11" << endl;
	cout << "	B) 22" << endl;
	cout << "	C) 33" << endl;
	cout << "	D) 4" << endl;

	cout << "\nChoose answer: \n>" << endl;
	cin >> fillArea;
	if (fillArea == "D")
	{
		countRight = countRight + 2;
	}
	else
	{
		cout << "\n!Wrong!" << endl;
	}
}

int main()
{
	// Я делал по математике, потому что плохо знаю биологию


	int countQustion = 0;
	int qs;

	Start:
	string fillArea;
	cout << "Do you want to start? : "; cin >> fillArea;
	if (fillArea == "yes")
	{
		while (countQustion < 6)
		{
			countQustion++;
			qs = rand() % 6;
			if (qs == 1)
			{
				Qestion1(fillArea);
			}
			else if (qs == 2)
			{
				Qestion2(fillArea);
			}
			else if (qs == 3)
			{
				Qestion3(fillArea);
			}
			else if (qs == 4)
			{
				Qestion4(fillArea);
			}
			else if (qs == 5)
			{
				Qestion5(fillArea);
			}
			else if (qs == 6)
			{
				Qestion6(fillArea);
			}
			else
			{
				cout << "Error" << endl;
			}
		}
	}
	else
	{
		goto Start;
	}
	cout << "Your mark: " << countRight << endl;

	return 0;
}