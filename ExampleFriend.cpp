#include <iostream>
using namespace std;

class Y;

class X
{
    int data;
    friend void add(X, Y);

public:
    void setvalue(int value)
    {
        data = value;
    }
};

class Y
{
    int num;
    friend void add(X, Y);

public:
    void setvalue(int value)
    {
        num = value;
    }
};
void add(X o1, Y o2)
{
    int add = o1.data + o2.num;
    cout << "sum of data of X and Y is " << add << endl;
}

int main()
{
    X a1;
    Y b1;
    a1.setvalue(5);
    b1.setvalue(9);

    add(a1, b1);
    return 0;
}