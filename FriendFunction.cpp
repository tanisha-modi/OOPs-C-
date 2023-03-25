#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    friend complex SumComplex(complex o1, complex o2); //declaration of frinend function
                                                       //through it SumComplex can access the private Data of class Complex
    void displayData(void)
    {
        cout << "tne complex no. is : " << a << " + " << b << "i" << endl;
    }
};
complex SumComplex(complex o1, complex o2) //it is friend function //it is not the part of class complex
{
    complex c3;
    c3.setData((o1.a + o2.a), (o1.b + o2.b));
    return c3;
}

int main()
{
    complex c1, c2, sum;
    c1.setData(3, 5);
    c1.displayData();

    //c1.SumComplex(); //throws error bcoz SumComplex is omly a friend function and objects of class complex can't access it

    c2.setData(7, 4);
    c2.displayData();

    sum = SumComplex(c1, c2);
    sum.displayData();

    return 0;
}
/* properties of friend function
1. Not in the scope of class
2. Since it is not in the scope of class, it can not be called be the object of the class
3. Can be invoked without the help of any object 
4. Usually contains  objects as arguments
5. Can be declared inside public or private section of the class
6. It can not access the members for directly by their names  and need object_name.member-name to access any member.
*/
