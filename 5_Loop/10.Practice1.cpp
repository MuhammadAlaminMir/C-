#include <iostream>
using namespace std;

int main(void)
{
    // Convert Name into capital letter

    char name[30];

    short i = 0;
    cout << "Enter A string: ";
    fgets(name, 30, stdin);

    while (name[i])
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] = name[i] - 32;
        }

        i++;
    }

    cout << "Output: " << name;
    return 0;
}