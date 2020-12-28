#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Compare two strings
    string a, b;
    a = "abc";
    b = "def";
    // if our output greater or less than zero its means a and b are not equal
    // if we get 0 then its means a and b are equal.
    cout << b.compare(a) << endl;
    b = "abc";
    cout << b.compare(a) << endl;
    // we can create a condition statement hare
    if (b.compare(a) == 0)
    {
        cout << "a and b are equal" << endl;
    }

    return 0;
}