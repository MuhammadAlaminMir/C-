#include <iostream>
using namespace std;

/* 
    Templates with Multiple parameters
    syntax:
    template <class T1, class T2>
    class nameofclass{
        body
    }

 */
template <class T1, class T2>

class myClass
{
public:
    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << endl
             << this->data2 << endl;
    }
};

int main()
{

    // myClass<int, float> obj(1, 2.3);
    myClass<char, float> obj('c', 2.3);
    obj.display();

    return 0;
}