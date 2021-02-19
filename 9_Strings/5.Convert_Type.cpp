#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;

int main()
{

    // convert string into integer
    string str = "790";
    cout << typeid(str).name() << "\t" << str << endl;
    int x = stoi(str);
    cout << typeid(x).name() << "\t" << x << endl;

    // convert string into float
    string str2 = "790";
    float y = stof(str);
    cout << typeid(y).name() << "\t" << y << endl;

    // convert int into string
    str = to_string(x) + "2";
    cout << str << endl;
    string str3 = "790";
    cout << typeid(str3).name() << "\t" << str3 << endl;

    return 0;
}