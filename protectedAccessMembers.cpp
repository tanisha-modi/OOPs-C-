#include <iostream>
using namespace std;

class Base
{
protected: // its private type but can be inherited
    int a;

private: // can't be inherited
    int b;
};

class derived : public Base
{
};

/*                  public derivation      private derivation      protected derivation
private members       not inherited           not inherited           not inherited
protected members      protected               private                   protected
public members         public                  private                   protected
*/
int main()
{
    Base b;
    derived d;
    // cout<<d.a;  //will not work since a is protected in both base as well as derived class

    return 0;
}