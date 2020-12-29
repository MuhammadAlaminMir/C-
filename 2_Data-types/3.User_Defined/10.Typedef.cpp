/* typedef is a reserved keyword in the programming languages C and C++. 
It is used to create an additional name (alias) for another data type, but does not create a new type[1], 
except in the obscure case of a qualified typedef of an array type where the typedef qualifiers are transferred to the array element type[2]. 
As such, it is often used to simplify the syntax of declaring complex data structures consisting of struct and union types,
 but is just as common in providing specific descriptive type names for integer data types of varying lengths. [WikiPedia] */

#include <iostream>
using namespace std;

typedef struct Person
{
    int age;
    float salary;
} sp;

int main()
{

    char ch;
    typedef char letter;
    ch = 'A';
    letter a = 'B';
    cout << ch << endl;
    cout << a << endl;

    struct Person alamin;
    alamin.age = 18;
    alamin.salary = 12.4;
    cout << alamin.age << endl;
    cout << alamin.salary << endl;

    sp rakib;
    rakib.age = 17;
    rakib.salary = 2.4;
    cout << rakib.age << endl;
    cout << rakib.salary << endl;

    return 0;
}
