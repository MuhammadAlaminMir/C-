#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cin >> n;

    //******* Inverted Pattern

    // for (short i = 1; i <= n; i++)
    // {
    //     for (short j = 1; j <= n + 1 - i; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    //******* 0 - 1 Pattern

    // for (i = 1; i <= n; i++)
    // {
    //     for (j = 1; j <= i; j++)
    //     {
    //         if ((i + j) % 2 == 0)
    //         {
    //             cout << "1 ";
    //         }
    //         else
    //         {
    //             cout << "0 ";
    //         }
    //     }
    //     cout << endl;
    // }

    //******* Rhombus Pattern

    // for (i = 1; i <= n; i++)

    // {

    //     for (j = 1; j <= n - i; j++)
    //     {
    //         cout << " ";
    //     }

    //     for (j = 1; j <= n; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    //******* Number Pattern

    for (i = 1; i <= n; i++)

    {

        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}