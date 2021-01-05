/* In C++ programming, not only you can derive a class from the base class but you can also derive a class from the derived class. This form of inheritance is known as multilevel inheritance. 
The C++ object model implementation is such that the further derived class will contain all ancestors within its body.
 Deriving classes in the multilevel inheritance way increases the number of arguments to be passed to the constructor. It makes the program less readable makes program complexable.

 */

#include <iostream>
using namespace std;

class Students
{
protected:
    int roll_number;

public:
    void set_roll_number(int a)
    {
        roll_number = a;
    }
    void get_roll_number()
    {
        cout << "The Roll number is " << roll_number << endl;
    }
};

class Exams : public Students
{
protected:
    float maths;
    float physics;

public:
    void set_marks(int a, int b)
    {
        maths = a;
        physics = b;
    }
    void get_marks()
    {
        cout << "The ontain number in maths are: " << maths << endl;
        cout << "The ontain number in physics are: " << physics << endl;
    }
};

class Result : public Exams
{

    float percentange;

public:
    void display_percentange()
    {
        get_roll_number();
        get_marks();
        cout << "Your percentange is : " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{
    Result akib;
    akib.set_roll_number(1);
    akib.set_marks(97, 89);
    akib.display_percentange();

    return 0;
}