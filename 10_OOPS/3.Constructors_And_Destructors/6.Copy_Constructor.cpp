#include <iostream>
using namespace std;

/* A copy constructor is a member function which initializes an object using another object of the same class.
When is copy constructor called?
In C++, a Copy Constructor may be called in following cases:
1. When an object of the class is returned by value.
2. When an object of the class is passed (to a function) by value as an argument.
3. When an object is constructed based on another object of the same class.
4. When the compiler generates a temporary object.*/
class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    };
    Number(int num)
    {
        a = num;
    }
    // When no copy constructor i found, compiler supplies its own copy constructor
    Number(Number &obj)
    {
        a = obj.a;
    }
    void display()
    {
        cout << "The Number for this object is " << a << endl;
    }
};

int main()
{

    Number x, y(23);
    x.display();
    y.display();
    Number z(y);
    z.display();

    return 0;
}