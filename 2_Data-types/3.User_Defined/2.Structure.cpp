/* 
    Structure is a collection of variables of different types under a single name.
    The structure is a feature in c++ that enables us to define a user-defined data type.
    Structures  are group of dissimilar data that are related to each other.

    // Banefits of structure:: 
    It is user friendly and easy to understand.
    * Similar to English vocabulary of words and symbols.
    * It is easier to learn.
    * They require less time to write.
    * They are easier to maintain.
    * These are mainly problem oriented rather than machine based.
    * Program written in a higher level language can be translated into many machine languages and therefore can run on any computer for which there exists an appropriate translator.
    * It is independent of machine on which it is used i.e. programs developed in high level languages can be run on any computer.

 */

#include <iostream>
#include <string>
using namespace std;

struct Person
{
    string name;
    int age;
    float salary;
};

int main()
{
    struct Person alamin;
    // element wise assignment
    alamin.name = "alamin";
    alamin.age = 18;
    alamin.salary = 12.4;
    cout << alamin.name << endl;

    cout << alamin.age << endl;
    cout << alamin.salary << endl;

    struct Person rakib = {"rakib", 17, 5.23};
    cout << rakib.age << endl;
    cout << rakib.salary << endl;
    // variable wise assignment
    struct Person sihab = rakib;
    cout << sihab.age << endl;
    cout << sihab.salary << endl;
    return 0;
}