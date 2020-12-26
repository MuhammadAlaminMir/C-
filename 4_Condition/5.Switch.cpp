#include <iostream>
using namespace std;

int main(void)
{
    int day_Number;
    cout << "Enter Day Number " << endl;
    cin >>" %d", &day_Number);

    switch (day_Number)
    {
    case 0:
        cout << "Today is Saturday" << endl;
        break;
    case 1:
        cout << "Today is Sunday" << endl;
        break;
    case 2:
        cout << "Today is Monday" << endl;
        break;
    case 3:
        cout << "Today is Tuesday" << endl;
        break;
    case 4:
        cout << "Today is Wednesday" << endl;
        break;
    case 5:
        cout << "Today is thursday" << endl;
        break;

    case 6:
        cout << "Today is Friday" << endl;
        break;

    default:
        cout << "Invalid Code" << endl;
        break;
    }

    return 0;
}