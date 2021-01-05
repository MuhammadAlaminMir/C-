
/* Multiple inheritance occurs when a class inherits from more than one base class.
 So the class can inherit features from multiple base classes using multiple inheritance.
  This is an important feature of object oriented programming languages such as C++. */

#include <iostream>
using namespace std;

/* Syntax for inheriting in multiple inheritance  
    class DerivedClass : visibility_mode base1, visibility-mode base2 
    {
        class body of class "DerivedClass"
    }
 */

class Base1
{
protected:
    int base1int;

public:
    void set_base1Int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2Int(int a)
    {
        base2int = a;
    }
};

class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "The value of base 1 is " << base1int << endl;
        cout << "The value of base 1 is " << base2int << endl;
        cout << "The sum of these values is " << base1int + base2int << endl;
    }
};

int main()
{
    Derived alamin;
    alamin.set_base1Int(23);
    alamin.set_base2Int(13);
    alamin.show();

    return 0;
}