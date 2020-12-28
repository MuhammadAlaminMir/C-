#include <iostream>
#include <string>
using namespace std;

int main()
{

    // Append Strings
    string s1, s2;
    s1 = "fam";
    s2 = "ily";
    // simple way
    cout << s1 + s2 << endl;
    // another way
    s1.append(s2);
    cout << s1 << endl;

    // Select particular character in string
    cout << s1[1] << endl;

    // clear function
    s1.clear();
    cout << s1 << endl;

    // empty function
    string str = "";
    if (str.empty())
        cout << "str is empty" << endl;
    // Check not empty
    if (!str.empty())
        cout << "str is not empty" << endl;

    // Erase function
    str = "alaminMir";
    str.erase(6, 3);
    cout << str << endl;

    // Find function
    string str2 = "nanoCamp";
    cout << str2.find("Camp") << endl;

    // insert function
    string str3 = "";
    str3.insert(0, "Camp");
    cout << str3 << endl;

    // length or size function
    cout << str3.size() << endl;

    string s = str2.substr(0, 4);
    cout << s << endl;

    return 0;
}