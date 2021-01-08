/* Pointers are variable that store othe variable memory location or address
    Pointers variable start with star sign. and with the help of address of operator
    we can store our variable address into a pointer variable.
 */
#include <iostream>
using namespace std;

int main()
{

    // Basic Example
    int a = 4;
    int *ptr = &a;

    cout << "the value of a is " << *ptr << endl;

    return 0;
}