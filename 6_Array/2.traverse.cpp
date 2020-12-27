// We can print or traverse all the element in an array with the help of loop
#include <iostream>
using namespace std;

int main()
{
    // Array Declaration:
    int my_array[5];
    my_array[0] = 10;
    my_array[1] = 11;
    my_array[2] = 12;
    my_array[3] = 13;
    my_array[4] = 14;
    // cout << my_array[0];
    // cout << my_array[1];
    // cout << my_array[2];
    for (short i = 0; i <= 4; i++)
    {
        cout << my_array[i];
    }

    return 0;
}