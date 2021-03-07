#include <iostream>
using namespace std;

// string removeDup(string s)
// {

//     if (s.length() == 0)
//     {
//         return "";
//     }

//     char ch = s[0];
//     string ans = removeDup(s.substr(1));

//     if (ch == ans[0])
//     {
//         return ans;
//     }
//     return (ch + ans);
// }

// Move all x to the end of the stiring
string moveallX(string s)
{

    if (s.length() == 0)
    {
        return "";
    }

    char ch = s[0];
    string ans = moveallX(s.substr(1));

    if (ch == 'x')
    {
        return ans + ch;
    }
    return ch + ans;
}

int main()
{

    // Remove all duplicates:
    // string res = removeDup("aaabbbsddsseeff");
    // cout << res << endl;

    // Move all x to the end of the stiring
    cout << moveallX("asxxsasxxadx");

    return 0;
}