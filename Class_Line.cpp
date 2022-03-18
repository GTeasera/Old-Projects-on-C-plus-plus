#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include <algorithm>
#include <array>
#include <iomanip>
#include <fstream>

#define mno(a, b) a * b;
using namespace std;

class String
{
private:
    string line;
    const int countLine;

public:
    String(string setLine, int setCount) : line(setLine), countLine(setCount)
    { }

    void putLine()
    {
        
    }

    void print()
    {
        cout << "# " << countLine << "\nLine: " << line << endl;
    }
    
    friend String operator+(const String& obj, const String& obj2);
    friend bool operator ==(String& obj, String& obj2);
};

String operator+(const String& obj, const String& obj2)
{
    return String(obj.line + obj2.line, obj.countLine + obj2.countLine);
}

bool operator ==(String& obj, String& obj2)
{
    return (obj.line == obj2.line);
}

int main()
{
    String l1("ABCD", 1);
    l1.print();

    String l2("abcd", 2);
    l2.print();

    String l3 = l1 + l2;
    l3.print();

    String l4("abcd", 4);

    if (l4 == l2)
    {
        cout << "\nLine was found;" << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    
}