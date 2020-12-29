#include <iostream>
#include <cstring>
using namespace std;

struct Person
{
    char name[20];
    int age;
    float salary;
};
void display(struct Person p)
{
    cout << p.name << endl;
    cout << p.age << endl;
    cout << p.salary << endl;
}
int main()
{

    struct Person alamin;
    strcpy(alamin.name, "alamin");
    alamin.age = 18;
    alamin.salary = 12.4;

    display(alamin);

    return 0;
}