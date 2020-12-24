#include <iostream>
using namespace std;

int main(void)
{
    int a = 23;
    // Pre-Increment
    a++;
    cout << "PostIncrement a = " << a << '\n'; // a = 24
    // Post-Increment
    ++a;
    cout << "PreIncrement a = " << a << '\n'; // a = 25
    // Pre-Decrement
    a--;
    cout << "PostDecrement a = " << a << '\n'; // a = 24
    // Post-Decrement
    --a;
    cout << "PreDecrement a = " << a << '\n'; // a = 23

    return 0;
}