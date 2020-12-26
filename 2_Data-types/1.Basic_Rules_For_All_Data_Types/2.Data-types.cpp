// in c++ programming when we declare a variable we have to give it a data type or else we get error
// every data type has its size

// basic data type:
// 1. Number
// 2. Text
// 3. Boolean = true, false;
// 4. Custom type

// 1. Number has many data type:
// Integer (23), Float(23.23), short, double, long.

// 2. text
// C++ support only character & and we have to use  single cotes('') for difine this
// in character type we can give just one character

#include <iostream>
using namespace std;

int main()
{
    int num = 23;
    float num2 = 23.34f;
    char chareacter = 'a';

    cout << num << "\n";
    cout << num2 << "\n";
    cout << chareacter << "\n";
    return 0;
}