#include <iostream>
using namespace std;

int main()
{

    // C++ use 0 or 1 to define a boolean data
    // we can use third party libary to work directly with boolean data

    cout << "\n";

    short is_logged_in = 0;
    // bool is_loggedIn = true;

    if (is_logged_in)
    {
        cout << "User logged In \n";
    }
    else
    {
        cout << "User Logged Out\n";
    };

    // if (is_loggedIn)
    // {
    //     cout << "User logged In \n";
    // }
    // else
    // {
    //     cout << "User Logged Out\n";
    // };

    return 0;
}