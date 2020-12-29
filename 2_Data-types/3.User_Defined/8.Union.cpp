/* 
    
    Union is a special data type available in C that allows to store different data types in the same memory location. 
    You can define a union with many members, but only one member can contain a value at any given time. 
    Unions provide an efficient way of using the same memory location for multiple-purpose.
 */

#include <iostream>
using namespace std;

union Person
{

    int x;
    float y;
};

int main()
{
    union Person p;
    p.x = 242;
    p.y = 232.343;
    // It will give us the garbage value
    cout << p.x << endl;
    cout << p.y << endl;
    // x and y are sharing the same memory location thats why Which one of them get the value last that will take the place and another one will deleted.

    return 0;
}
