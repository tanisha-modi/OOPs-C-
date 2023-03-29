#include <iostream>
using namespace std;

class base1
{
   int a;

public:
   void greet()
   {
      cout << "how are you ??" << endl;
   }
};
class base2
{
   int a;

public:
   void greet()
   {
      cout << "kaise ho aap ??" << endl;
   }
};

class derived : public base1, public base2
{
   int a;

public:
   void greet()
   {
      base2 ::greet(); // through this ambiguity can be resolved ...greet method of base 1 would be invoked
   }
};

int main()
{
   /*
   base1 b1;
   b1.greet();

   base2 b2;
   b2.greet();
   */

   derived hi;
   hi.greet(); // ambiguity is that ...which methods should be invoked ...of base1 class or basse2 class
               // this gives an error

   return 0;
}