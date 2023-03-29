#include <iostream>
using namespace std;

// base class
class Employee
{
    int Empcode; // this private can not be inherited
public:
    int EmpId;
    float salary;
    Employee() {} // derived class bnane pr default constructor bnana pdega
    Employee(int Id)
    {
        EmpId = Id;
        salary = 15000;
    }
};

// derived class syntax
/*
class {{derived_class_name}} : {{visibility}} {{base_class_name}} //visibility mode can be public or private  ..or might be protected
{
    class methods, members, etc..
}
Note :
1. Deflaut visibility mode is private
2. Private visibility mode : public members of base class becomes private members of derived class
3. Public visibility mode : public members of base class becomes public members of derived class
4. private members of base class can not be inherited
*/
// creating a  derived programmer class from Employee base class
class programmer : private Employee
{
public:
    int languageCode; // it is public
    programmer(int id)
    {
        EmpId = id;
        salary = 20000; // this are private members of derived class as the visibility is private
        languageCode = 9;
    }
    void Getdata()
    {
        cout << "programmer Id : " << EmpId << endl;
    }
};

int main()
{
    Employee tanu(1), tanisha(2);
    cout << tanu.salary << endl
         << tanisha.salary << endl;
    programmer tanusha(001);
    cout << tanusha.languageCode << endl;
    tanusha.Getdata();
    // cout << tanusha.EmpId << endl; //executed smoothly if visibility is public

    return 0;
}