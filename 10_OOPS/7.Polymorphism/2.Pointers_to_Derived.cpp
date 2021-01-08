#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Desplaying Base class variable var_base" << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Desplaying Base class variable var_base" << var_base << endl;
        cout << "Desplaying Derived class variable var_Derived" << var_derived << endl;
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

    DerivedClass *derived_class_ptr;

    obj_derived;

    base_class_ptr = &obj_derived;

    base_class_ptr->var_base = 34;
    base_class_ptr->display();

    return 0;
}