#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base = 23;
    // Virtual functions override default behavior of class
    virtual void display()
    {
        cout << "Desplaying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived = 12;
    void display()
    {
        cout << "Desplaying Base class variable var_base " << var_base << endl;
        cout << "Desplaying Derived class variable var_Derived " << var_derived << endl;
    }
};

int main()
{

    BaseClass *base_class_ptr;

    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_ptr = &obj_derived;
    base_class_ptr->var_base = 34;

    base_class_ptr->display();

    return 0;
}

/*  Rules for virtual functions
1. They cannot be static 
2. They are accessed by object pointers
3. Virtual functions can be a friend of another class
4. A virtual function in base class might not be used. 
5. If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class. 
*/
