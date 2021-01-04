/*  The double curly brackets are not HTML but scripting code. The term inside, 
    interest, is a placeholder, sort of like the name and address in a form letter.
     The string {{interest}} will be replaced when the HTML template is converted into straight HTML that is sent over the network to the user. */
#include <iostream>
using namespace std;

// Base Class
class Employee

{
public:
    int id;
    float salary;
    Employee() {}
    Employee(int inpId)
    {

        id = inpId;
        salary = 34.5;
    }
};

/* Derived Class syntax:
  >>  {{class derived-class}} : {{visibility-mode}} {{base-class-name}}
  {
      class member/methods/etc.
  }

    >> Creating a Programmer derived class from employee base class
    >> We can't inherit private members/methods from base classes
    >> visibility mode decide that the members/methods we inherit from base class they became private or protected or public members/methods in the Derived class. thats means:
    >> Public Visibility mode: Public members of the base class becomes Public members of the derived class 
    >> Private Visibility mode: Public members of the base class becomes Private members of the derived class 
    >> Protected Visibility mode: If we derive a subclass from a Protected base class. Then both public member and protected members of the base class will become protected in the derived class.
    >> In derived class the Default visibility mode will be private
*/
class Programmer : Employee
{
public:
    int languageCode = 3;
    Programmer(int pid)
    {
        id = pid;
    }
    void get()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee alamin(2), rakib(1);
    cout << alamin.salary << endl;
    cout << rakib.salary << endl;
    Programmer akib(2);
    akib.get();

    return 0;
}