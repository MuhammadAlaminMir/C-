#include <iostream>
using namespace std;

int main()
{

    // We can make pointer to a pointer or how much pointer we need we can make it
    int a = 10;
    int *p = &a;
    cout << *p << endl;

    int **q = &p;

    // (*q) that its gives us the value of q pointer that is the location of a;
    cout << *q << endl;
    cout << **q << endl;
    // (**q) that its gives us the value of a;

    return 0;
}