// Type Casting means data type chenging
// Sometimes we have to change the data type of the variable or value
// that time we use type Casting.
// It help us to code very efficiently.

#include <iostream>

using namespace std;

int main()
{
    int a = 23;
    float b = 32.23f;
    // converting int to float
    cout << float(a) << endl;
    // same thing
    cout << (float)a << endl;

    // converting float to int
    cout << int(a) << endl;
    // same thing
    cout << (int)a << endl;

    // banifits of type castings

    cout << "The expression is " << a + b << endl;
    cout << "The expression is " << a + (int)b << endl;

    return 0;
}