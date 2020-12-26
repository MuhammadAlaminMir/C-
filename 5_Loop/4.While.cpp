#include <iostream>
using namespace std;
// when we didn't have any specific number to replete that time we use while loop

int main(void)
{

    // int a = 0;

    // while (a < 10)
    // {
    //     cout <<"a = " <<a;
    //     a++;
    // }

    // While loop usecase ex:

    short a, b;
    char ch = 'c';

    while (ch != 'q')
    {
        cout << "Enter Two Number: ";
        cin >> a, b;
        cout << "Result = %hi\n", a + b;

        cout << "Type c to run again. Type q to quit: ";
        cin >> ch;
    }

    return 0;
}