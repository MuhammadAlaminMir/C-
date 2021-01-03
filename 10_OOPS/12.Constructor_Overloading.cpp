/* In C++, We can have more than one constructor in a class with same name,
 as long as each has a different list of arguments.This concept is known as Constructor Overloading and is quite similar to function overloading. */

#include <iostream>
using namespace std;

class X
{
    int a, b;

public:
    X(int x, int y)
    {
        a = x;
        b = y;
    }
    X(int x)
    {
        a = x;
        b = 0;
    }
    void printNumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    X a1(4, 2);
    a1.printNumber();
    X a2(4);
    a2.printNumber();

    return 0;
}