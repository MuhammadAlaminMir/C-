
#include <iostream>
using namespace std;

int main()
{

    int my_array[30];
    my_array[0] = 10;
    my_array[1] = 11;
    my_array[2] = 12;
    my_array[3] = 13;
    my_array[4] = 14;

    cout << (unsigned int)&my_array;
    cout << (unsigned int)&my_array[0];
    cout << (unsigned int)&my_array[1];
    cout << (unsigned int)&my_array[2];
    cout << (unsigned int)&my_array[3];
    cout << (unsigned int)&my_array[4];
}