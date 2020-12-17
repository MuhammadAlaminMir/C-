#include <iostream>
using namespace std;

int main(void)
{
    int a = 23;
    a++;
    cout << "PostIncrement a = " << a << '\n'; // a = 24
    ++a;
    cout << "PreIncrement a = " << a << '\n'; // a = 25

    a--;
    cout << "PostDecrement a = " << a << '\n'; // a = 24
    --a;
    cout << "PreDecrement a = " << a << '\n'; // a = 23

    return 0;
}