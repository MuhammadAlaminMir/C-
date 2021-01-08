/*
    ***** Task ****
  Crate 2 classes: 
    1. SimpleCalculator - Takes input of 2 numbers using a utilty function and performs +, -, *, / and
    displays the result using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utilty function and performs any four scientific
    operation of your choice and diplays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1, What type of Inheritance ane you using?                 Ans: Multiple inheritance
    Q2, Which mode of Inheritance are you using?                Ans: Public
    Create an object of HybridCalculator and display results of simple and scientific calculator.   

 */

#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
    int a, b;

public:
    void getDataSimple()
    {
        cout << "Enter the value of a" << endl;
        cin >> a;
        cout << "Enter the value of b" << endl;
        cin >> b;
    }
    void performOperationsSimple()
    {
        cout << "The value of a + b is " << a + b << endl;
        cout << "The value of a - b is " << a - b << endl;
        cout << "The value of a * b is " << a * b << endl;
        cout << "The value of a / b is " << a / b << endl;
    }
};

class ScientificCalculator
{
    int a, b;

public:
    void getDataScientific()
    {
        cout << "Enter the value of a" << endl;
        cin >> a;
        cout << "Enter the value of b" << endl;
        cin >> b;
    }
    void performOperationsScientific()
    {
        cout << "The value of sin(a) & sin(b) is " << sin(a) << sin(b) << endl;
        cout << "The value of exp(a) & exp(b) is " << exp(a) << exp(b) << endl;
        cout << "The value of cos(a) & cos(b) is " << cos(a) << cos(b) << endl;
        cout << "The value of tan(a) & tan(b) is " << tan(a) << tan(b) << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};

int main()
{
    // SimpleCalculator calC;
    // calC.getData();
    // calC.performOperations();
    // ScientificCalculator sCal;
    // sCal.getDataScientific();
    // sCal.sPerformOperationsScientific();

    HybridCalculator calC;
    calC.getDataSimple();
    calC.performOperationsSimple();
    calC.getDataScientific();
    calC.performOperationsScientific();

    return 0;
}