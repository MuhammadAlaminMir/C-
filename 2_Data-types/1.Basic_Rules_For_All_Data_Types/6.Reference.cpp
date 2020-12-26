// Sometimes we have to use same value in two different variables
//  that time we can use reference variable.
// This is like we calling the same person in diffrent names.

#include <iostream>

using namespace std;

int main()
{
    int x = 55;
    int &y = x;
    cout << x << endl;
    cout << y << endl;

    return 0;
}