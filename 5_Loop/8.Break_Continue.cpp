#include <iostream>
using namespace std;

int main(void)
{
    int i;

    // for (i = 0; i < 100; i++)
    // {
    //     if (i == 5)
    //     {
    //         break;
    //     }
    //     cout <<"I = "<< i);
    // }

    for (i = 0; i < 100; i++)
    {
        // find odd number
        if (i % 2 == 0)
        {
            continue;
        }
        cout << "I = " << i;
    }

    return 0;
}