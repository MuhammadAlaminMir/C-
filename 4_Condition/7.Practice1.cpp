#include <iostream>
using namespace std;

int main(void)
{
    int a, b, c;
    cout << "Enter value A " << endl;
    cin >> a;
    cout << "Enter value B " << endl;
    cin >> b;
    cout << "Enter value C " << endl;
    cin >> c;

    if (a > b || a > c)
    {
        cout << "A is greter then b & c" << endl;
    }
    else if (b > c)
    {
        cout << "B is greter then c & c" << endl;
    }

    else
    {
        cout << "C is greter then a & b" << endl;
    }

    return 0;
}