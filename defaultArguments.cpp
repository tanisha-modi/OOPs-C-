#include <iostream>
using namespace std;

class simple
{
    int data1, data2, data3;

public:
    simple(int a, int b = 9, int c = 8)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void print();
};
void simple ::print()
{
    cout << "value of a : " << data1 << "\n b : " << data2 << "\n c : " << data3 << endl;
}
int main()
{
    simple s1(5);
    s1.print();

    simple s2(2, 5); //parameter gets preference above default arguments // the value of b would 5 instead of 9
    s2.print();

    return 0;
}