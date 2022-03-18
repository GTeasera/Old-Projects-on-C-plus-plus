#include <iostream>

const int size = 5;

namespace gna {
	void FillArr(int arr[5][5], const int size)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				arr[i][j] = rand() % 30 + 30;
			}
		}
	}
	void Max(int arr[5][5], const int size)
	{
		int n = 0;

		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (n <= arr[i][j]);
				n = arr[i][j];
			}
		}
		std::cout << "Bigger one: " << n << std::endl;
	}
	void Min(int arr[5][5], const int size)
	{
		int m = 61;

		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (m >= arr[i][j]);
				m = arr[i][j];
			}
		}
		std::cout << "Smaller one: " << m << std::endl;
	}
	void Print(int arr[5][5], const int size)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				std::cout << arr[i][j] << " ";
			}
			std::cout << std::endl;
		}
	}
}
int main()
{
	
	gna::int arr[size][size];

	FillArr(arr, size);
	Print(arr, size);

	Max(arr, size);
	Min(arr, size);
}