/* In C++, We can have more than one constructor in a class with same name,
 as long as each has a different list of arguments.This concept is known as Constructor Overloading and is quite similar to function overloading. */

// Class: Collection of objects is called class. It is a logical entity.
// Class work almost like structure. But in class we get some benefits like: (data hiding). In classes we can declare functions
#include <iostream>
using namespace std;

class Simple
{
    int a, b;

public:
    // We can set a Default argument in the constructor
    Simple(int x, int y = 10)
    {
        a = x;
        b = y;
    }

    void printNumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Simple a1(4, 2);
    a1.printNumber();
    Simple a2(4);
    a2.printNumber();

    return 0;
}