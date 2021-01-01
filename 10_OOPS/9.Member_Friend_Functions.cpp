#include <iostream>
using namespace std;

// Forword Declaration
class Complex;

class Calculator
{

public:
    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex
{
    int a, b;

    // We can make class methods to our friend functions.
    // Individually declaring functions as friends
    friend int Calculator ::sumRealComplex(Complex, Complex);
    friend int Calculator ::sumCompComplex(Complex, Complex);

public:
    void setNum(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex O1, Complex O2)
{
    return (O1.a + O2.a);
}

int Calculator ::sumCompComplex(Complex O1, Complex O2)
{
    return (O1.b + O2.b);
}

int main()
{
    Complex O1, O2;
    O1.setNum(1, 3);
    O2.setNum(5, 2);
    Calculator calculator;
    int res = calculator.sumRealComplex(O1, O2);
    cout << "The sum of real part of O1 and O2 is " << res << endl;
    int resc = calculator.sumCompComplex(O1, O2);
    cout << "The sum of complex part of O1 and O2 is " << res << endl;

    return 0;
}