// When we create 2 functions and named them same name that time our c++ compiler will confused.
// Because when we call a function compiler will didn't understand which function it has to execute
// But when we named them same but their parameter values are different that time its called function overloading
// And C++ compiler will understand it and execute our program correctly.

#include <iostream>
using namespace std;
int sum(int a, int b);
int sum(int a, int b, int c);

int main()
{

    cout << "The sum of 3 and 6 is " << sum(3, 6) << endl;
    cout << "The sum of 3, 5 and 6 is " << sum(3, 5, 6) << endl;

    return 0;
}
int sum(int a, int b)
{
    return a + b;
}
int sum(int a, int b, int c)
{
    return a + b + c;
}