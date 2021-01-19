#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string st = "hi sihab ";
    string st2;
    // Opening files using constructor & writing it
    ofstream out("test.txt"); // write operation
    out << st;

    // Opening files using constructor & writing it
    ifstream in("test2.txt"); // Read operation
    // in>> st2;
    getline(in, st2);
    cout << st2 << endl;

    return 0;
}