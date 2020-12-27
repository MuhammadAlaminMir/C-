#include <iostream>
using namespace std;

int main()
{

    int a = 3;
    // Pointer variable syntax
    int *b = &a;
    // * Dereference Operator
    // & Address of operator
    // every variable allocated a location in RAM (& addressof operator) give us that location
    cout << "The address of a is " << &a << endl;
    cout << "The address of b is " << b << endl;

    // * (value at) Dereference operator
    cout << "The value at address b is " << *b << endl;
    return 0;
}