#include <iostream>
using namespace std;
class c2;

class c1
{
    int o1;
    friend void exchange(c1 &, c2 &);

public:
    void indata(int a)
    {
        o1 = a;
    }
    void display()
    {
        cout << o1 << endl;
    }
};
class c2
{
    int o2;
    friend void exchange(c1 &, c2 &);

public:
    void indata(int a)
    {
        o2 = a;
    }
    void display()
    {
        cout << o2 << endl;
    }
};
void exchange(c1 &a, c2 &b)
{
    int temp = a.o1;
    a.o1 = b.o2;
    b.o2 = temp;
}

int main()
{
    c1 oc1;
    oc1.indata(4);
    c2 oc2;
    oc2.indata(10);

    exchange(oc1, oc2);
    cout << "the value of c1 after exchanging become ";
    oc1.display();
    cout << "the value of c2 after exchanging become ";
    oc2.display();
    return 0;
}