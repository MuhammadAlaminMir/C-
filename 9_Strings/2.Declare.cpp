#include <iostream>
// First of all we have to include string. Its helps us to work  with strings.
#include <string>
using namespace std;

int main()
{
    // Strings Declaration
    // simple way
    string str;
    // input string
    cin >> str;
    cout << str << endl;

    // Way to get specific type of string
    // string str1(5, 'n');
    // cin >> str;
    // cout << str << endl;

    // another way
    string str2 = "alamin";
    cout << str2 << endl;

    // input string with spaces
    string str3;
    getline(cin, str3);
    cout << str3 << endl;

    return 0;
}