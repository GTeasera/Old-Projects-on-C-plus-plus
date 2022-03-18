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

class Circle
{
private:
    double r;
public:
    Circle(int setR) : r(setR)
    { }

    void print()
    {
        cout << "Radius: " << r << endl;
    }

    friend Circle operator-(const Circle& obj, const Circle& obj2);
    friend Circle operator-(Circle& obj, double n);
    friend Circle operator+(Circle& obj, double n);
    friend bool operator >(Circle& obj, Circle& obj2);
    friend bool operator ==(Circle& obj, Circle& obj2);
};
Circle operator-(Circle& obj, double n)
{
    return Circle(obj.r - n);
}

Circle operator+(Circle& obj, double n)
{
    return Circle(obj.r + n);
}

bool operator >(Circle& obj, Circle& obj2)
{
    return (obj.r > obj2.r);
}
bool operator ==(Circle& obj, Circle& obj2)
{
    return (obj.r == obj2.r);
}

int main()
{
    Circle c1(6.00);
    c1.print();

    Circle c2(13.00);
    c2.print();

    if (c2 > c1)
    {
        cout << "Circle 2 bigger" << endl;
    }
    else if (c1 > c2)
    {
        cout << "Circle 1 bigger" << endl;
    }
    else
    {
        cout << "Simmilar" << endl;
    }

    Circle c3 = c1 + 5; 
    c3.print();

    Circle c4 = c2 + 1;
    c4.print();

}