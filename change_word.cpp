#include <iostream>
#include <vector>
using namespace std;

int main()
{
	string line = "abcvc.fdsfr.sdfs";
	string key = ".";
	string newKey = "!";
	for (int i = 0; i < line.size(); i++)
	{
		if (line[i] == key[0])
		{
			line[i] = newKey[0];
		}
	}

	cout << line << endl;
}