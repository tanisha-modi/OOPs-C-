#include<iostream>
using namespace std;

   class employee
    {
       private :  
        int  a, b, c;

       public:
        int d, e;

       void Setdata(int a1, int b1, int c1);
       void Getdata(){
            cout<<"the value of a is "<<a<<endl;
            cout<<"the value of b is "<<b<<endl;
            cout<<"the value of c is "<<c<<endl;
            cout<<"the value of d is "<<d<<endl;
            cout<<"the value of e is "<<e<<endl;
       }
     };
       void employee :: Setdata(int a1, int b1, int c1)
       {
          a = a1;
          b = b1;
          c = c1;
       }

int main()
{
   employee tanisha;
   tanisha.d = 49;
   tanisha.e = 23;
   // tanisha.a = 10       //it is illegal as a is declared in private class 
   tanisha.Setdata(2,4,5);
   tanisha.Getdata();

   return 0;
} 