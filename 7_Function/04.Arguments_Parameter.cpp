#include <iostream>
using namespace std;

// Parameter and Arguments they are the some things but
// Different places its called differently. like:
// when we receive a value into the function that time its called Parameter
void sum(int a, int b)
{

    cout << a + b << endl;
}
int main()
{
    // when we call a function and give that a value.
    // that time the value called argument. like:
    sum(4, 5);
    // there Some people say the opposite. It's not a problem
    return 0;
}