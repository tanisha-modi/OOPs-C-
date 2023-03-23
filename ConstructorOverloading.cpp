#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex()
    {
        a = 0;
        b = 0;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    void print()
    {
        cout << a << " + " << b << "i" << endl;
    }
};
int main()
{
    complex oo;
    oo.print();

    complex o1(15, 2);
    o1.print();

    complex o2(3);
    o2.print();

    return 0;
}