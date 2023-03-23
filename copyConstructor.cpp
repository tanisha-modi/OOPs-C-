#include <iostream>
using namespace std;

class number
{
    int num;

public:
    number()
    {
        num = 0;
    }
    number(int a)
    {
        num = a;
    }
    //when no copy constructor is found ..compiler suppies its own copy constructor
    number(number &obj) // address operator lgaya
    {
        cout << "copy constructor called " << endl; // after commenting out it ..code will run ..this line would not be get printed
        num = obj.num;
    }
    void display()
    {
        cout << "Value of number is : " << num << endl;
    }
};
int main()
{
    number x, y, z(65);
    x.display();
    y.display();
    z.display();

    // z1 should exactly resemble z or x or y

    number z1(z); // copy constructor invoked
    z1.display();

    number z2;
    z2 = x; //copy constructor not invoked
    z2.display();

    number z3 = y; // copy constructor invoked
    z3.display();

    return 0;
}