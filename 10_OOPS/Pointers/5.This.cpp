/* Every object in C++ has access to its own address through an important pointer called this pointer. 
 The this pointer is an implicit parameter to all member functions. 
 Therefore, inside a member function, this may be used to refer to the invoking object. */

#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void setData(int a)
    {
        this->a = a;
    }
    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    //  This is a keyword which is a pointer. Which points to the object which invokes the member function.
    A obj;
    obj.setData(4);
    obj.getData();

    return 0;
}