#include <iostream>
using namespace std;

class student // base class
{
protected:
    int roll_number; // can be inherit

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void student ::set_roll_number(int r)
{
    roll_number = r;
}
void student ::get_roll_number()
{
    cout << "roll number is " << roll_number << endl;
}

class exam : public student // first level derived class
{
protected:
    float maths;
    float physics;

public:
    void Setmarks(int, int);
    void getmarks();
};
void exam ::Setmarks(int m1, int m2)
{
    maths = m1;
    physics = m2;
}
void exam ::getmarks()
{
    cout << "marks in maths are " << maths << endl
         << "marks in physics are " << physics << endl;
}

class result : public exam // second level derived class
{
    float percantage;

public:
    void display_result()
    {
        get_roll_number(); // inherited from base class
        getmarks();        // inherited from first derived class
        cout << "the result is : " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{
    /*
        Notes :
           If we are inheriting B from A and C from B : [A --> B --> C]
          1. A is the base class for B and B is the base class for C
          2. A --> B --> C is inheritance path

    */

    result tanisha;
    tanisha.set_roll_number(46); // object of second level derived class calling function of base class
    tanisha.Setmarks(91, 95);
    tanisha.display_result();

    return 0;
}