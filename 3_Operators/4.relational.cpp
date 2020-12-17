#include <iostream>
using namespace std;

int main(void)
{

    // In C++ 0 means false and 1 means true
    int a = 35;
    int b = 30;

    bool a_is_greater = a > b;
    cout << "A is greater then B - " << a_is_greater << "\n"; //1 or true

    bool a_is_smaller = a < b;
    cout << "A is smaller then B - " << a_is_smaller << "\n"; //0 or false

    bool a_is_b = a == b;
    cout << "A is B - " << a_is_b << "\n"; // 0 or false

    bool a_is_not_b = a != b;
    cout << "A is not = B - " << a_is_not_b << "\n"; // 1 or true

    int c = 10;
    int d = 10;

    bool c_is_greater = c > d;
    cout << "C is greater then D - " << c_is_greater << "\n"; // 0

    bool c_is_greater_equal = c >= d;
    cout << "C is greater then D - " << c_is_greater_equal << "\n"; // 1

    bool d_is_greater = d > c;
    cout << "D is greater then c - " << d_is_greater << "\n"; // 0

    bool d_is_greater_equal = d >= c;
    cout << "D is greater then c - " << d_is_greater_equal << "\n"; // 1

    return 0;
}