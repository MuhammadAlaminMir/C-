#include <iostream>
using namespace std;

int main()
{

    int my_array[] = {89, 82, 83, 84, 85, 86, 87};
    // cout <<sizeof(int);
    // cout <<sizeof(long);
    // cout <<sizeof(long long);
    // cout <<sizeof(short);
    // cout <<sizeof(float);

    cout << "sizeof my_array : " << sizeof(my_array);
    cout << "sizeof my_array first element : " << sizeof(my_array[0]);

    short array_length = sizeof(my_array) / 4;
    cout << "array length " << array_length;

    return 0;
}