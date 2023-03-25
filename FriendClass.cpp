#include <iostream>
using namespace std;

class complex; //forward declaration

class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int SumRealComplex(complex, complex); //function can't be defined here

    int SumImgComplex(complex o1, complex o2); //function can't be defined here
};

class complex
{
    int a, b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    //friend int calculator ::SumRealComplex(complex, complex); //Friend functions from different class
    //friend int calculator ::SumImgComplex(complex, complex);
    //what if there are 100 function like these ??

    //so we can declare entire class as friend class
    friend class calculator;

    void displayData(void)
    {
        cout << "tne complex no. is : " << a << "+ i" << b << endl;
    }
};
int calculator ::SumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::SumImgComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setData(5, 11);
    o2.setData(4, 3);

    calculator calc;
    int result = calc.SumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << result << endl;
    int res = calc.SumImgComplex(o1, o2);
    cout << "the sum of imaginary part of o1 and o2 is " << res << endl;

    return 0;
}