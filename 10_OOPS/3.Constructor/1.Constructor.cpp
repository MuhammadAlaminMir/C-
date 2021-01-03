#include <iostream>
using namespace std;

/* 
    * Constructor is a special member function with same name as of the class.
    * Its is used to initialize the objects of its class
    * It should be declared in the public section of the class.
    * They are automatically invoked whenever the object is created.
    * They cannot return values and do not have return types
    * We cannot refer to their address
    * We have three types of constructor (Default, Parametrized, Copy)

 */

class Complex
{
    int a, b;

public:
    // Creating a constructor
    Complex(void) // default constructor
    {
        a = 0;
        b = 10;
    }
    void printNumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{

    Complex A, B;
    A.printNumber();
    B.printNumber();

    return 0;
}