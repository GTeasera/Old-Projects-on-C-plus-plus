#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    std::vector<std::string> stringarray;

    stringarray.push_back("3"); stringarray.push_back("1"); stringarray.push_back("2");
    
    for (int i = 0; i < stringarray.size(); i++)
        cout << stringarray[i] << " ";
    std::sort(stringarray.begin(), stringarray.end());
    cout << endl;
    for (int i = 0; i < stringarray.size(); i++)
        cout << stringarray[i] << " ";
}