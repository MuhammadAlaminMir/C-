
#include <iostream>
using namespace std;

// Function Structure
// when we create a function at first we have to give the return type of the function
// if we didn't have to return any type that time we use void. that means we didn't want to return anything.
// we can pass a value into the function like (a, b).
void my_Func(int a, int b)
{
    cout << a + b << endl;
}

// main also a function
int main()
{
    // when we want to use the function that time we have to call it. like:
    my_Func(5, 30);
    return 0;
}
