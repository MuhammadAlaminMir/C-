#include <iostream>
using namespace std;

class Employee
{
    int id;
    // static variable or static data member
    static int count; // initial value of the a static variable is 0;

public:
    void employeeData(void)
    {
        cout << "Enter the id of the employee " << endl;
        cin >> id;
        cout << "the id of the employee is " << id << endl;
        count++;
    }

    // To access static variables or methods we have to create a static function or method
    static void getCount(void)
    {
        cout << "The value of the cout is " << count << endl;
    }
};

int Employee ::count; // This is variable is associated with Employee class

int main()
{
    Employee alamin, rakib, sihab;
    alamin.employeeData();
    Employee::getCount();

    rakib.employeeData();
    Employee::getCount();

    sihab.employeeData();
    Employee::getCount();

    return 0;
}