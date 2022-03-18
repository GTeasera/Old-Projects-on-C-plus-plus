#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include <algorithm>
#include <array>
#include <iomanip>
#include <fstream>
using namespace std;

class IntArray 
{
private:
	int arr[6];
public:
	int fillArray()
	{
		for (int a = 0; a < 6; a++)
		{
			arr[0] = 6;
			arr[1] = 7;
			arr[2] = 3;
			arr[3] = 4;
			arr[4] = 5;
			arr[5] = 8;

			return arr[a];
		}

		
	}
	void showArray()
	{
		for (int a = 0; a < 6; a++)
		{
			cout << arr[a] << " ";
		}
		cout << endl;
	}
	
};
int main()
{
	IntArray a;
	a.fillArray();

	IntArray b;
	b.fillArray();
	a = a;
	b = a;

	a.showArray();
	b.showArray();

	return 0;
}