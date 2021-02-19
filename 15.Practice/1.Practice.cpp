#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    // *** Check Prime Number

    bool flag;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "non-prime" << endl;
            flag = true;
            break;
        }
    }

    if (!flag)
    {
        cout << "Prime" << endl;
    }

    return 0;
}