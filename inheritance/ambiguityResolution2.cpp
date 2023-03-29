#include <iostream>
using namespace std;

class B1
{
    int a;

public:
    void say()
    {
        cout << "hello world " << endl;
    }
};

class D : public B1
{
public:
    // D's new say() method will overwrite base class say()
    void say()
    {
        cout << "hello beautiful people " << endl;
    }
};
int main()
{
    B1 b;
    b.say();

    D d;
    d.say();

    return 0;
}