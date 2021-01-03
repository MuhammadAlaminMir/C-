#include <iostream>
using namespace std;

/* A destructor is a member function that is invoked automatically when the object goes out of scope or is explicitly destroyed by a call to delete .
     A destructor has the same name as the class, preceded by a tilde ( ~ ). For example, the destructor for class String is declared: ~String()  
     Declaring destructors
Destructors are functions with the same name as the class but preceded by a tilde (~)

Several rules govern the declaration of destructors. Destructors:

Do not accept arguments.

Do not return a value (or void).

Cannot be declared as const, volatile, or static. However, they can be invoked for the destruction of objects declared as const, volatile, or static.

Can be declared as virtual. Using virtual destructors, you can destroy objects without knowing their type — the correct destructor for the object is invoked using the virtual function mechanism. Note that destructors can also be declared as pure virtual functions for abstract classes.

Using destructors
Destructors are called when one of the following events occurs:

A local (automatic) object with block scope goes out of scope.

An object allocated using the new operator is explicitly deallocated using delete.

The lifetime of a temporary object ends.

A program ends and global or static objects exist.

The destructor is explicitly called using the destructor function's fully qualified name.

Destructors can freely call class member functions and access class member data.

There are two restrictions on the use of destructors:

You cannot take its address.

Derived classes do not inherit the destructor of their base class.
     */
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object number " << count << endl;
    }
    ~num()
    {
        count--;
        cout << "This is the time when destructor is called for object number " << count << endl;
    }
};

int main()
{
    cout << "WE are inside our main function" << endl;
    cout << "Creating first object n1";
    num n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main" << endl;

    return 0;
}