#include <iostream>
using namespace std;

// floting data
// floting data didn't have any signed or unsigned formula. hare all signed.

int main(void)
{

    // float
    // we have to add f or F at last of the float data so that compiler understand this a float data

    float f = 489.123f;
    cout << "I am float data - "
         << f << "\n";

    // Double
    double d = 3434234.34;
    cout << "I am double - "
         << d << "\n";

    // long Double
    long double ld = 23424234234234.33;
    cout << "I am long double - "
         << ld << "\n";

    return 0;
}