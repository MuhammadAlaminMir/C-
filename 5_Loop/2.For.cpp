#include <iostream>
using namespace std;

int main(void)
{
    // For Loop have some step to start
    // 1. initialization: At first we need a variable to start. ex: (int i = 0)
    // 2. condition: then we need a condition to stop the loop. ex: (i < 10)
    // 3. updateStatement: we need updateStatement. so that this statement changes the value of the initializer
    // so that condition will be false and the loop stop.

    // Ex:
    for (short i = 0; i <= 10; i++)
    {
        cout << "Alamin " << i + 1;
    }

    // Find Event Number

    for (short j = 0; j <= 100; j++)
    {
        if (j % 2 == 0)
        {
            cout << " is even" << j;
        }
    }

    return 0;
}