#include <iostream>
using namespace std;
int count = 0;

//destructor neither takes any argument nor return any value
class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object no. " << count << endl;
    }
    ~num()
    {
        cout << "This is the time when destructor is called for object no. " << count << endl;
        count--;
    }
};
int main()
{
    cout << "inside the main" << endl
         << "creating first object " << endl;

    num n1;
    {
        cout << "creating two more objects" << endl;
        cout << "entering the block " << endl;
        num n2, n3;
        cout << "exiting the block " << endl;
    }
    cout << "back to main" << endl;

    return 0;
}