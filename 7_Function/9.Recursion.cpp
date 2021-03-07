// When a function call its self to make the problem smaller and didn't stop until the end point comes
// that time its call recursive function.

#include <iostream>
using namespace std;

//  factorial using recursive function
// int factorial(int n)
// {
//     if (n <= 1)
//     {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }

// Fibonacci sequence using recursive function
// int fib(int n)
// {
//     if (n < 2)
//     {
//         return 1;
//     }
//     return fib(n - 2) + fib(n - 1);
// }

// Replace Pi
void replacePi(string s)
{

    if (s.length() == 0)
    {
        return;
    }

    if (s[0] == 'p' && s[1] == 'i')
    {
        cout << "3.14";
        replacePi(s.substr(2));
    }
    else
    {
        cout << s[0];
        replacePi(s.substr(1));
    }
}

int main()
{
    int n;
    cout << "Give us the chosen Number ";
    cin >> n;
    // cout << "The factorial of " << n << " is " << factorial(n) << endl;
    // co t << "The fibonacci at prosition " << n << " is " << fib(n) << endl;

    // Replace Pi:
    replacePi("pppidsepidwe");

    return 0;
}