/* 
  * In normal terms Encapsulation is defined as wrapping up of data and information under a single unit. 
    In Object Oriented Programming, Encapsulation is defined as binding together the data and the functions that manipulates them.

  * Encapsulation also lead to data abstraction or hiding. As using encapsulation also hides the data. 

  * Benefits of Encapsulation
       >> Encapsulated classes reduce complexity.
       >> Help protect our data. A client cannot change an Account's balance if we encapsulate it.
       >> Encapsulated classes are easier to change. 
       >> We can change the privacy of the data according to the requirement without changing the whole program by using access modifiers (public, private, protected).

  * Role of access specifiers in encapsulation
     access specifiers plays an important role in implementing encapsulation in C++.
       >> public - members are accessible from outside the class
       >> private - members cannot be accessed (or viewed) from outside the class
       >> protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. 

    Public mode: If we derive a sub class from a public base class. Then the public member of the base class will become public in the derived class and protected members of the base class will become protected in derived class.
    Protected mode: If we derive a sub class from a Protected base class. Then both public member and protected members of the base class will become protected in derived class.
    Private mode: If we derive a sub class from a Private base class. Then both public member and protected members of the base class will become Private in derived class.
    Note : The private members in the base class cannot be directly accessed in the derived class, while protected members can be directly accessed.
       
 */

#include <iostream>
using namespace std;

class A
{
public:
    int a;
    void funcA()
    {
        cout << "Func a \n";
    }

private:
    int b;
    void funcB()
    {
        cout << "Func b \n";
    }

protected:
    int c;
    void funcC()
    {
        cout << "Func c \n";
    }
};

int main()
{
    A obj;
    obj.funcA();

    // obj.funcB(); it will give an error because we can't access private data outsite the class
    // obj.funcC(); it will give an error because we can't access protected data outsite the class

    return 0;
}