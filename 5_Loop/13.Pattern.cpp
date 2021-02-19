#include <iostream>
using namespace std;

int main()
{

    // simple rectangle pettern

    int row, col;

    // cin >> row >> col;

    // for (int i = 0; i < row; i++)
    // {
    //     for (short J = 0; J < col; J++)
    //     {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }

    // Hollow rectangle pattern

    /* 
        1st row and last row get all stars
        1st col and last col get all stars
     */

    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j <= col; j++)
    //     {
    //         if (i == 1 || i == row)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             if (j == 1 || j == col)
    //             {
    //                 cout << "* ";
    //                             }
    //             else
    //             {
    //                 cout << "  ";
    //             }
    //         }
    //     }

    //     cout << endl;
    // }

    // Inverted Half Pyramid

    // int n;
    // cin >> n;

    // for (short i = n; i > 0; i--)
    // {
    //     for (short j = 0; j < i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // Half Pyramid After 180 degree Rotation

    // int n;
    // cin >> n;

    // for (short i = 0; i < n; i++)
    // {
    //     // for (short j = i + 1; j < n; j++)
    //     // {
    //     //     cout << " ";
    //     // }

    //     // for (short q = 0; q <= i; q++)
    //     // {
    //     //     cout << "*";
    //     // }

    //     // OR

    //     for (short j = 1; j <= n; j++)
    //     {
    //         if (j < n - i)
    //         {
    //             cout << " ";
    //         }
    //         else
    //         {
    //             cout << "*";
    //         }
    //     }

    //     cout << endl;
    // }

    // Half Pyramid Using numbers

    // int n;
    // cin >> n;
    // for (short i = 1; i <= n; i++)
    // {
    //     for (short j = 1; j <= i; j++)
    //     {
    //         cout << i;
    //     }
    //     cout << endl;
    // }

    // Floyd's Triangle

    // int n, num = 1;
    // cin >> n;
    // for (short i = 1; i <= n; i++)
    // {
    //     for (short j = 1; j <= i; j++)
    //     {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }

    // Butterfly Pattern

    int n, num = 1;
    cin >> n;

    for (short i = 1; i <= n; i++)
    {
        for (short j = 1; j <= i; j++)
        {

            cout << "* ";
        }
        int space = 2 * n - 2 * i;
        for (short j = 1; j <= space; j++)
        {

            cout << "  ";
        }
        for (short j = 1; j <= i; j++)
        {

            cout << "* ";
        }

        cout << endl;
    }

    for (short i = n; i >= 1; i--)
    {

        for (short j = 1; j <= i; j++)
        {

            cout << "* ";
        }
        int space = 2 * n - 2 * i;
        for (short j = 1; j <= space; j++)
        {

            cout << "  ";
        }
        for (short j = 1; j <= i; j++)
        {

            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}