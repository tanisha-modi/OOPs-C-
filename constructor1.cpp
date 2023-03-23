#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    // creating a constructor
    // Constructor is a special member function with the same name as of the class
    // It is used to inintialize the objects of its class
    // It is automatically invoked whenever an object is created

    complex(void); // Constructor declaration
    void printData()
    {
        cout << "the first complex no. is " << a << " + " << b << "i" << endl;
    }
};

//Constructor defination //It is a default constructor ..accepts no parameter

/*void*/ complex ::complex(void) //constructor has no specified return data type // it we write void there , it throws error
{
    a = 10; // if this values are not initialized , then a and b would be initialized with garbage value
    b = 0;
    //hello world! //sb chije execute hogi
}

int main()
{
    complex comp;
    comp.printData();

    return 0;
}
// Characterictics of constructor
// 1. the constructor which does not take any parameter is known as default constructor
// 2. It should be declared in the public section of the class
// 3. They are automatically invoked whenever object is created
// 4. They can not return values and Do not have return types
// 5. It can have default arguments
// 6. We can not refer to their address
