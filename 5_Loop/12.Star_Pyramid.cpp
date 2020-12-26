#include <iostream>
using namespace std;

int main(void)
{
    short i, j, rows = 5;
    cin >> rows;

    //  Half Pyramid

    // for (i = 0; i <= rows; i++)
    // {
    //     for (j = 0; j <= i; j++)
    //     {
    //         cout <<"* ";
    //     }
    //     cout <<" \n";
    // }
    // cout <<"\n";
    // Full Pyramid

    // for (i = 0; i < rows; i++)
    // {
    //     for (short space = i; space <= rows; space++)
    //     {
    //         cout <<" ";
    //     }
    //     for (j = 0; j <= i; j++)
    //     {
    //         cout <<"* ";
    //     }
    //     cout <<"\n";
    // }

    // Reverse full pyramid

    for (i = 0; i < rows; i++)
    {
        for (short space = 0; space <= i; space++)
        {
            cout << " ";
        }
        for (j = rows - 1; j >= i; j--)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}