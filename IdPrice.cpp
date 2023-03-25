#include <iostream>
using namespace std;

class shop //class
{

    int itemId[10]; //array
    int itemPrice[10];
    int counter;
    string objname;

    static int no_of_objects; //static variable initial value is 0 //can't define it but can chnge value later  //static variable can be passed from one object to another(it is common for all)
                              //its takes memory only once for the class ..declarated outside the class  //not the property of objects ..it is propeerty of class
public:
    void initcounter(int *n, string *objname) //n is pointer N(no. of items) //objname is string input for every object //calling by pointer
    {
        counter = 0; //counter is initially 0 for every object
        cout << "enter the name of shop" << endl;
        cin >> *objname;
        cout << "enter total no. of item" << endl;
        cin >> *n;
        no_of_objects++; //incrrementing value of static variable
    }
    void displayPrice(string); //declaration
    void setPrice(void);

    static void getNo_of_objects(void) //static function //it can only access static members(variable or methods)
    {
        cout << "the total no. of shops is " << no_of_objects << endl;
        //cout<<counter; //throws error //variable is not static
    };
};

void shop ::setPrice(void) //sets data of items //called in a loop for different items
{
    cout << "enter Id of your item no. " << counter + 1 << endl;
    cin >> itemId[counter]; //values will be stored in array
    cout << "enter Price of your item no. " << counter + 1 << endl;
    cin >> itemPrice[counter];
    counter++;
}
void shop ::displayPrice(string shopname) //display the data //taking string input
{
    cout << shopname << endl;
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int shop ::no_of_objects; //static variable
int main()
{
    shop dukaan, stationary; //objects

    int N;
    string objname;
    dukaan.initcounter(&N, &objname);
    for (int i = 1; i <= N; i++) //loop runs N(no. of items) number of times
    {
        dukaan.setPrice();
    }
    dukaan.displayPrice(objname);

    stationary.initcounter(&N, &objname); //again calling funtions for different objects
    for (int i = 1; i <= N; i++)
    {
        stationary.setPrice();
    }
    stationary.displayPrice(objname);

    shop ::getNo_of_objects(); //static function can be called by only class name

    return 0;
}