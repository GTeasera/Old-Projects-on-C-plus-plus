#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Matrix
{
private:
	vector<int> arr;
	int size;
public:
	Matrix(int setSize = 10) : size(setSize)
	{
		for (int i = 0; i < size; i++)
		{
			arr.push_back(rand() % 10);
		}
	}
	~Matrix()
	{
		arr.erase(arr.begin(), arr.end());
	}
	void Print()
	{
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	void KeyFound(int n)
	{
		for (int i = 0; i < size; i++)
		{
			if (n == arr[i])
			{
				cout << "> Key Found!" << endl;
			}
		}
	}
	void Sort()
	{
		sort(arr.begin(), arr.end());
	}

	void OperatorAdd(int n)
	{
		arr.push_back(n);
	}

	void OperatorRemove(int n)
	{
		arr.erase(arr.begin() + n);
	}

	Matrix& operator= (const Matrix& obj)
	{
		arr = obj.arr;
	}

	friend Matrix operator+(Matrix& obj, int n);
	friend Matrix operator-(Matrix& obj, int n);
	friend Matrix operator*(Matrix& obj, int n);
	friend Matrix operator/(Matrix& obj, int n);
	friend bool operator ==(Matrix& obj, Matrix& obj2);
	int& operator[] (const int index);
};

Matrix operator+(Matrix& obj, int n)
{
	for (int i = 0; i < 10; i++)
	{
		return Matrix(obj.arr[i] + n);
	}
}
Matrix operator-(Matrix& obj, int n)
{
	for (int i = 0; i < 10; i++)
	{
		return Matrix(obj.arr[i] - n);
	}
}
Matrix operator*(Matrix& obj, int n)
{
	for (int i = 0; i < 10; i++)
	{
		return Matrix(obj.arr[i] * n);
	}
}
Matrix operator/(Matrix& obj, int n)
{
	for (int i = 0; i < 10; i++)
	{
		return Matrix(obj.arr[i] / n);
	}
}

bool operator ==(Matrix& obj, Matrix& obj2)
{
	for (int i = 0; i < 10; i++)
	{
		return (obj.arr[i] == obj2.arr[i]);
	}
}



int main()
{
	Matrix arr1(4);
	Matrix arr2(6);

	arr1.Print();
	arr2.Print();

	arr1.KeyFound(4);
	arr1.Sort();
	arr1.Print();

	arr1.OperatorAdd(7);
	arr1.Print();

	arr1.OperatorRemove(10);
	arr1.Print();

	Matrix arr3 = arr1 + 5;
	Matrix arr4 = arr2 - 1;
	Matrix arr5 = arr3 * 2;
	Matrix arr6 = arr4 / 3;
	arr3.Print();
	arr4.Print();
	arr5.Print();
	arr6.Print();

	if (arr1[4] == arr2[4])
	{
		cout << "4th index simmilar" << endl;
	}

	cout << arr1[7] << endl;
}