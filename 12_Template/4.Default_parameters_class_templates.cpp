#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class Alamin
{
public:
    T1 a;
    T2 b;
    T3 c;
    Alamin(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
    }
};

int main()
{

    Alamin<> a(4, 3.3, 'c');
    a.display();
    cout << endl;

    Alamin<char, int, float> b('c', 3, 3.32);
    b.display();
    cout << endl;

    return 0;
}