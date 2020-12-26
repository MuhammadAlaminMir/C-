#include <iostream>
using namespace std;

int main(void)
{
    short row, colum;
    cin >> row, colum;
    for (short i = 1; i <= row; i++)
    {
        cout << "\n";
        for (short j = 1; j <= colum; j++)
        {
            cout << "* ";
        }
    }

    return 0;
}
