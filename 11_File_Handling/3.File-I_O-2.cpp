#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out("test.txt");

    string name;
    cout << "Enter your name" << endl;
    cin >> name;

    // Writing a string to the file
    out << "My name is " + name;
    out.close();

    ifstream in("test.txt");
    string content;
    getline(in, content);
    cout << "the content of this file is: " << content << endl;
    in.close();
    return 0;
}