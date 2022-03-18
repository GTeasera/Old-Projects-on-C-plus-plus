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

class Datee
{
private:
    int day;
    int mon;
    int year;

public:
    Datee(int setDay, int setMounth, int setYear) : day(setDay), mon(setMounth), year(setYear)
    { }

    void print()
    {
        cout << day << "." << mon << "." << year << endl;
    }

    friend Datee operator-(const Datee& obj, const Datee& obj2);
    friend Datee operator+(Datee& obj, int n);
    friend bool operator >(Datee& obj, Datee& obj2);
};
Datee operator-(const Datee& obj, const Datee& obj2)
{
    return Datee(obj.day - obj2.day, obj.mon, obj.year);
}

Datee operator+(Datee& obj, int n)
{
    return Datee(obj.day + n, obj.mon, obj.year);
}

bool operator >(Datee& obj, Datee& obj2)
{
    return (obj.day > obj2.day);
}

int main()
{
    Datee d1(31, 10, 2021);
    d1.print();

    Datee d2(23, 7, 2021);
    d2.print();

    Datee d3 = d1 - d2;
    if (d1 > d2)
    {
        cout << "Date 1 bigger than date 2 on ";
        d3.print();
        cout << endl;

    }

    Datee d4 = d2 + 5;
    d4.print();
}