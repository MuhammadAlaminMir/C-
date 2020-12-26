// Constants means fixed.
// Sometimes we didn't want that are variable value can be change
// that time we use constant, so that our variable can be fixed everywhere

#include <iostream>
using namespace std;

int main()
{
    // normal variable
    // This time we can change our variable
    int a = 23;
    cout << "The value of a was " << a << endl;
    a = 24;
    cout << "The value of a is " << a << endl;

    // Constant variable
    const int c = 23;
    cout << "The value of c was " << c << endl;
    // if we try to change the constant variable its gives us error
    // c = 24;
    cout << "The value of c is " << c << endl;

    return 0;
}