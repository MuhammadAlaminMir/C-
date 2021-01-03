#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Default Constructor
    // The default constructor is a constructor that the compiler automatically generates in the absence of any programmer-defined constructors.
    // Complex(void)
    // {
    //     a = 0;
    //     b = 10;
    // }

    // Parameterized Constructor
    // the parameterized constructor is a constructor that the programmer creates with one or more parameters to initialize the instance variables of a class.
    Complex(int x, int y);

    void printNumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y)
{

    a = x;
    b = y;
}

int main()
{
    // Implicit call
    Complex A(4, 5);

    // Explicit call
    Complex B = Complex(4, 6);

    A.printNumber();
    B.printNumber();

    return 0;
}