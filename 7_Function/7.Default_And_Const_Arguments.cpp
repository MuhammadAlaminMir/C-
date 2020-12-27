// We can set Default value of a parameter or argument
// so that if we forget to give any value its didn't give us an error
// And also we can set constant argument so that our variable value can't be change

#include <iostream>
using namespace std;

int product(const int a, // constant argument
            int b = 5)   // default value
{
    return a + b;
}
int main()
{

    int a, b;
    a = 5;
    b = 10;
    cout << "The produnct of a and b is " << product(a) << endl;
    cout << "The produnct of a and b is " << product(a + 2) << endl;
    cout << "The produnct of a and b is " << product(a, b + 2) << endl;
    cout << "The produnct of a and b is " << product(a, b) << endl;
    cout << "The produnct of a and b is " << product(a + 2, b) << endl;

    return 0;
}