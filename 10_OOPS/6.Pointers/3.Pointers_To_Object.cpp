#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void setData(int x, int y)
    {
        real = x;
        imaginary = y;
    }

    void getData()
    {
        cout << "The real number is " << real << endl;
        cout << "The imaginary number is " << imaginary << endl;
    }
};

int main()
{
    Complex obj;

    // Complex *ptr = &obj; or
    Complex *ptr = new Complex;

    // (*ptr).setData(3, 6);
    // Arrow operator
    ptr->setData(3, 6);
    // (*ptr).getData(); is exactly same as
    ptr->getData();

    return 0;
}