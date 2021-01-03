#include <iostream>
using namespace std;

class BankDeposit
{
    int principal, years;
    float interesRate, returnValue;

public:
    BankDeposit(){};
    BankDeposit(int P, int y, float r); // r can be value like 0.05
    BankDeposit(int P, int y, int r);   // r can be value like 12

    void show(void)
    {
        cout << "Principal amount was " << principal
             << ". Return value after " << years << " years is " << returnValue << endl;
    }
};

BankDeposit::BankDeposit(int P, int y, float r)
{
    principal = P;
    years = y;
    interesRate = r;

    returnValue = principal;
    for (short i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interesRate);
    }
}

BankDeposit::BankDeposit(int P, int y, int r)
{
    principal = P;
    years = y;
    interesRate = float(r) / 100;
    returnValue = principal;
    for (short i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interesRate);
    }
}

int main()
{

    BankDeposit bd1, bd2;

    int p, y;
    float r;
    cout << "Enter the value of P y and R " << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    int R;
    cout << "Enter the value of P y and R " << endl;
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
    return 0;
}