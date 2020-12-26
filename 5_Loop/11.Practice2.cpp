#include <iostream>
using namespace std;

int main(void)
{
    char name[30];

    cout << "Enter A string: ";
    fgets(name, 30, stdin);

    for (short i = 0; name[i]; i++)
    {
        if (name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] = name[i] + 32;
        }
    }
    cout << "Output: " << name;

    return 0;
}