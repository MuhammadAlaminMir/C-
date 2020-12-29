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

    alamin.age = 18;
    alamin.salary = 12.4;

    cout << "The name of the alamin: " << alamin.age << endl;
    cout << "The salary of the alamin: " << alamin.salary << endl;

    struct Person rakib = alamin;

    if (alamin.age == rakib.age && alamin.salary == rakib.salary)
    {
        cout << "They are equal" << endl;
        cout << "The name of the rakib: " << rakib.age << endl;
        cout << "The salary of the rakib: " << rakib.salary << endl;
    }
    else
        cout << "They are not equal";

    return 0;
}