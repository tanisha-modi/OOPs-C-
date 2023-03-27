// #include <iostream>
// using namespace std;

// class complex
// {
//     int a, b;

// public:
//     complex(int, int); // Constructor declaration
//     void printData()
//     {
//         cout << "the first complex no. is " << a << " + " << b << "i" << endl;
//     }
// };

// //Constructor defination

// complex ::complex(int x, int y) //-->this is parameterized constructor
// {
//     a = x;
//     b = y;
// }

// int main()
// {
//     //Implicit call
//     complex a(9, 14);
//     a.printData();

//     //explicit call
//     complex b = complex(6, 2);
//     b.printData();

//     return 0;
// }

#include <iostream>
#include <math.h>
using namespace std;

class point
{
    int x, y;
    friend int distance(point, point);

public:
    point(int, int);
    void displayPoint(void)
    {
        cout << " x coordinate : " << x << "\n y coordinate : " << y << endl;
    }
};
point ::point(int a, int b)
{
    x = a;
    y = b;
}
int distance(point o1, point o2)
{
    int dis;
    dis = sqrt(pow((o1.x - o2.x), 2) + pow((o1.y - o2.y), 2));
    return dis;
}

int main()
{
    point p(1, 1);
    p.displayPoint();

    point q(1, 1);
    q.displayPoint();

    int distancep;
    distancep = distance(p, q);
    cout << "distance :" << distancep << " metres " << endl;
    return 0;
}
