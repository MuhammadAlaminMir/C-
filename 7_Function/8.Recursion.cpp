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
int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}

int main()
{
    int n;
    cout << "Give us the chosen Number ";
    cin >> n;
    // cout << "The factorial of " << n << " is " << factorial(n) << endl;
    cout << "The fibonacci at prosition " << n << " is " << fib(n) << endl;

    return 0;
}