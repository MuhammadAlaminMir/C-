
#include <iostream>
using namespace std;
int main(void)
{
    // when we use a condition into a condition that time its called nested condition.

    int age = 18;
    bool has_nid = true;
    bool has_pass = false;
    // cout <<"%d", (int)sizeof(has_pass));
    if (age >= 18)
    {
        if (has_nid || has_pass)
        {
            cout << "You are allowed" << endl;
        };
    }
    else
    {
        cout << "You are not allowed" << endl;
    }

    return 0;
}