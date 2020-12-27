#include <iostream>
using namespace std;

// inline function helps us make our program very efficient
// But when function recursion hepends or we are using static variables that time we don't  use it.
inline int product(int a, int b)
{
    return a + b;
}
int main()
{

    int a, b;
    cout << "Enter the value of a and b ";
    cin >> a >> b;
    cout << "The produnct of a and b is " << product(a, b) << endl;
    cout << "The produnct of a and b is " << product(a + 2, b) << endl;
    cout << "The produnct of a and b is " << product(a, b + 2) << endl;
    cout << "The produnct of a and b is " << product(a, b) << endl;
    cout << "The produnct of a and b is " << product(a + 2, b) << endl;

    return 0;
}