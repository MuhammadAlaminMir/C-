#include <iostream>
using namespace std;

// Class: Collection of objects is called class. It is a logical entity.
// Class work almost like structure. But in class we get some benefits like: (data hiding). In classes we can declare functions

class Employee
{
    // in class we have two specifiers (Public & Private)
private:
    // if we declare any variables & methods into private we can't use in outside of the class.
    // private is default in class
    int a, b, c;

public:
    // if we want to access any variables or methods outside of the class we have to declare them in the class

    int d, e;                            //Object Propertice
    void setData(int a1, int b1, int c1) // Object Method
    {
        a = a1;
        b = b1;
        c = c1;
    }
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
} rakib;

int main()
{
    Employee alamin; //Object
    // alamin.a = 21.1 * It will give us an error Because a is private variable
    alamin.d = 132;
    alamin.e = 23;
    alamin.setData(1, 2, 3);
    alamin.getData();
    rakib.d = 142;
    rakib.e = 26;
    rakib.setData(1, 9, 3);
    rakib.getData();
    return 0;
}