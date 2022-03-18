#include <iostream>
using namespace std;

int sum;

class Array
{
private:
	int arr[10];
	const int size = 10;
public:
	Array(int n)
	{
		for (int i = 0; i < size; i++)
		{
			arr[i] = rand() % n;
		}
	}
	void print()
	{
		for (int i = 0; i < size; i++) { cout << arr[i] << " "; }
		cout << endl;
	}
	char IntToChar(int index)
	{
		int i = arr[index];
		char a = (int)i;

		return a;
	}

	int IntToInt()
	{
		int num;

		for (int i = 0; i < size; i++)
		{
			num = arr[i];
			sum += num;
		}
		return sum;
	}
	int operator() (int value) 
	{
		for (int index = 0; index < size; index++)
		{
			arr[index] += value;
		}
		for (int index = 0; index < size; index++)
		{
			return arr[index];
		}
	}
		

	int& operator[] (const int index);
};
int& Array::operator[] (const int index)
{
	return arr[index];
}

int main()
{
	Array a1(25);
	a1.print();

	a1(3);
	a1.print();

	cout << a1[5] << endl;

	cout << a1.IntToChar(7) << endl;

	cout << a1.IntToInt() << endl;
}