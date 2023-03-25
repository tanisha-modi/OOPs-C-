#include <iostream>
using namespace std;

class BankDeposite
{
    int principal;
    int time;
    float interestRate;
    float ReturnValue;

public:
    BankDeposite(){}; //it is important for compilation //default constructor
    BankDeposite(int, int, float);
    BankDeposite(int, int, int);
    void show()
    {
        cout << "principal amount was " << principal << ". Return Value after " << time << " years "
             << " is " << ReturnValue << endl;
    }
};
/* 1 */ BankDeposite ::BankDeposite(int p, int t, float r) // r value would like 0.04(floating-point)
{
    principal = p;
    time = t;
    interestRate = r;
    ReturnValue = principal; // ReturnValue = principal
    for (int i = 0; i < t; i++)
    {
        ReturnValue = ReturnValue * (1 + interestRate); // ReturnValue = ReturnValue + (ReturnValue*interestRate)
    }
}
/* 2 */ BankDeposite ::BankDeposite(int p, int t, int r) // r value would like 4(integer value in percent)
{
    principal = p;
    time = t;
    interestRate = (float)r / 100;
    ReturnValue = principal;
    for (int i = 0; i < t; i++)
    {
        ReturnValue = ReturnValue * (1 + interestRate);
    }
}

int main()
{
    int p, t, r;
    float R;
    cout << "Enter the value of principal, time(years) and rate of interest repectively :" << endl;
    cin >> p >> t >> r;
    BankDeposite bd1(p, t, r); // constructor 2 would be inkoved bcoz r is integer
    bd1.show();

    cout << "Enter the value of principal, time(years) and rate of interest repectively :" << endl;
    cin >> p >> t >> R;
    BankDeposite bd2(p, t, R); //constructor 1 would be invoked bcoz R is float
    bd2.show();

    // BankDeposite bd3; // it gives garbage values
    // bd3.show();

    return 0;
}