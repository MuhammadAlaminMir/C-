#include <iostream>
using namespace std;

struct Person
{
    int age;
    float salary;
};
int main()
{

    struct Person alamin;

    cout << "Enter age: " << endl;
    cin >> alamin.age;
    cout << "Enter salary: " << endl;
    cin >> alamin.salary;

    cout << "The name of the person: " << alamin.age << endl;
    cout << "The salary of the person: " << alamin.salary << endl;

    return 0;
}