/* In object-oriented programming, a friend function, 
that is a "friend" of a given class, is a function that is given the same access as methods to private and protected data. 
A friend function is declared by the class that is granting access, so friend functions are part of the class interface, like methods. 

>>>Properties of friend functions:

1. Not is the scope of class
2. since it is not in the scope of the class, it cannot be colled from the object of that class. c1.sumComples == Invalid
3. Can be invoked without the help of object 
4. Usually contains the objects as argument
5.Can be declared inside public or private section of the class 
6. It cannot access the members directly by their name and need Object_name.Mamber_name to access any member.

*/

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setNum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend Complex sumComplex(Complex a1, Complex a2);
    void printNumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex sumComplex(Complex a1, Complex a2)
{
    Complex a3;
    a3.setNum((a1.a + a2.a), (a1.b + a2.b));
    return a3;
}
int main()
{
    Complex c1, c2, sum;
    c1.setNum(1, 3);
    c1.printNumber();

    c2.setNum(2, 7);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}