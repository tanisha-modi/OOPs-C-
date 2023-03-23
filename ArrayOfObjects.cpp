#include <iostream>
using namespace std;

class Employee
{
    int Id;
    int salary;

public:
    void setData(void)
    {
        salary = 10000;
        cout << "enter the Id of Employee " << endl;
        cin >> Id;
    }
    void getData(void)
    {
        cout << "Id of Employee : " << Id << endl;
    }
};

int main()
{
    //Employee tanisha, manisha, anusha;
    //tanisha.setData();  //what if there are thousands of employees
    //manisha.SetData();

    Employee E[5]; //objects made as array

    //E[0].setData();

    for (int i = 0; i < 5; i++)
    {
        E[i].setData(); //loop for calling function for every member of array
        E[i].getData();
    }

    return 0;
}