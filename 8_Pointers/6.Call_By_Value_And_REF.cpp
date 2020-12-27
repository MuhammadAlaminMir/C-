#include <iostream>
using namespace std;

void swap_pointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swap_ref(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 4, b = 5;
    // Call by value
    cout << "The value of a is " << a << " The value of b is " << b << endl;
    swap(a, b);
    cout << "The value of a is " << a << " The value of b is " << b << endl;
    // Call by reference
    cout << "The value of a is " << a << " The value of b is " << b << endl;
    swap_pointer(&a, &b);
    cout << "The value of a is " << a << " The value of b is " << b << endl;

    // swap using reference variable
    cout << "The value of a is " << a << " The value of b is " << b << endl;
    swap_ref(a, b);
    cout << "The value of a is " << a << " The value of b is " << b << endl;
    return 0;
}