#include <iostream>
#include <cstring>
using namespace std;

//template<typename T>
class Array
{
protected:
	int size = 10;
	int arr[];
public:
	Array(int setSize, int element) : size(10)
	{
		for (int i = 0; i < size; i++)
		{
			element++;
			arr[i] = element;
		}
		cout << "Array()" << endl;
	}
	int GetSize()
	{
		return size;
	}
	int GetUpperBound()
	{
		return arr[-1];
	}
	bool IsEmpty()
	{
		for (int i = 0; i < size; i++)
		{
			if (arr[i] == 0)
				return true;
			else
				return false;
		}
	}
	void FreeExtra(int index)
	{
		for (int i = 0; i < size; i++)
		{
			if (arr[i] >= index)
			{
				arr[i] = 0;
			}
			for (int i = 0; i < size; i++)
			{
				cout << arr[i] << " ";
			}
			cout << endl;
		}

	}
	int GetAt(int index)
	{
		for (int i = 0; i < size; i++)
		{
			if (i == index)
			{
				return arr[i];
			}

		}

	}
	void SetAt(int index, int value)
	{
		for (int i = 0; i < size; i++)
		{
			if (i == index)
			{
				arr[i] = value;
			}
		}
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	~Array()
	{
		for (int i = 0; i < size; i++)
		{
			arr[i] = 0;
		}
		cout << "~Array()" << endl;
	}
};

//template<typename T>
int main()
{
	Array array(10, 1);
	cout << array.GetSize() << endl;
	cout << array.GetUpperBound() << endl;
	cout << array.IsEmpty() << endl;
	array.FreeExtra(4);
	array.GetAt(7);
	array.SetAt(3, 5);

}