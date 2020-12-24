#include <iostream>
using namespace std;

int main(void)
{
    char c = 'c';
    short s = 10;
    int i = 20;
    long l = 12323;

    cout << "Size of char = " << (int)sizeof(c) << " byte\n";
    ;
    cout << "Size of short = " << (int)sizeof(s) << " byte\n";

    cout << "Size of int = " << (int)sizeof(i) << " byte\n";

    cout << "Size of long = " << (int)sizeof(l) << " byte\n";

    return 0;
}