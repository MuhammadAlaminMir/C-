#include <iostream>
using namespace std;

// global structure we can access it in any function
struct Person
{

    int age;
    float salary;
};
int main()
{
    // Local structure we can't access it in any function
    struct Person2
    {

        int age;
        float salary;
    };

    return 0;
}