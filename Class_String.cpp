#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Object
{
protected:
	string line;
public:
	Object(string setLine) : line(setLine)
	{
	}

	int getSize()
	{
		return line.size();
	}

	void switchLine()
	{
		for (int i = line.size() - 1; i >= 0; i--)
		{
			cout << line[i] << " ";
		}
		cout << endl;
	}

	void print()
	{
		cout << line << endl;
	}
};

int main()
{
	Object obj("1234567890");
	cout << obj.getSize() << endl;

	obj.print();

	obj.switchLine();
	obj.print();
}