#include <iostream>
using namespace std;
// We know that if we try to use any variables or functions before declaration C++ compiler
// gives us an error. To Prevent that we can use function prototype

//A function prototype is a declaration of the function that tells the program about the type of the value returned by the function and the number and type of arguments.
//Function prototyping is one very useful feature of C++ function.
void sum(int, int);
void sub(int, int);
int main()
{

    sum(4, 5);
    sub(6, 5);

    return 0;
}
void sum(int a, int b)
{

    cout << a + b << endl;
}
void sub(int a, int b)
{

    cout << a - b << endl;
}