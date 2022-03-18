#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class SetofStacks
{
protected:
    stack <int> stacke;
    int i = 0;
    const int stackSize = 10;
public:
    void fillStack()
    {
        int i = 0;
        while (i < stackSize)
        {
            stacke.push(i);
            i++;
            cout << "+Element added: " << stacke.top() << endl;
        }
    }
    bool IsEmpty()
    {
        if (stacke.empty())
        {
            cout << "\nStack already empty!" << endl;
        }
        else
        {
            int j = stackSize;
            while (j > 0)
            {
                cout << "-Element deleted: " << stacke.top() << endl;
                stacke.pop();
                j--;
            }
            cout << "\nStack empty!" << endl;
        }
    }
    void IsFull()
    {
        if (stacke.empty())
        {
            cout << "\nStack already empty!" << endl;
        }
        else
        {
            cout << "\nStack is full!" << endl;
        }
    }
    void InsertWithPriority(int value)
    {
        stacke.push(value);
    }
    void PullHighestPriotityElement()
    {
        stacke.pop();
    }
};

int main()
{
    SetofStacks stk;

    stk.fillStack();
    cout << endl;

    stk.IsFull();
    cout << endl;

    stk.InsertWithPriority(2);
    cout << endl;

    stk.PullHighestPriotityElement();
    cout << endl;

    stk.IsEmpty();
    cout << endl;
}