#include <iostream>
using namespace std;

struct Person
{
    int age;
    float salary;
};
int main()
{

    struct Person person[4];

    for (short i = 0; i < 4; i++)
    {

        cout << "Enter age: " << endl;
        cin >> person[i].age;
        cout << "Enter salary: " << endl;
        cin >> person[i].salary;
        cout << "The name of the person: " << i << " is " << person[i].age << endl;
        cout << "The salary of the person: " << i << " is " << person[i].salary << endl;
    }

    return 0;
}