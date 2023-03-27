#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setDataBySum(complex o1, complex o2) //o1 = c1 = a + ib
    {
        a = o1.a + o2.a; //o1.a can be seen as c1.a and o2.a = c2.a
        b = o1.b + o2.b; //o1.b = c1.b and o2.b = c2.b
    }
    void printData()
    {
        cout << "the first complex no. is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setData(1, 2); //c1.a = 1, c1.b = 2
    c1.printData();

    c2.setData(3, 4); //c2.b = 3, c2.b = 4
    c2.printData();

    c3.setDataBySum(c1, c2); //c1 and c2 are objects //objects are given as arguments to function setDataBySum
    c3.printData();
    return 0;
}