#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    // *** Check Armstrong number

    /* An Armstrong number is a number such that the sum ! of its digits raised to the third power is equal to the number ! itself.
     For example, 371 is an Armstrong number, since !
    hare:
    3  * 3 * 3= 27;
    7  * 7 * 7= 343;
    1 * 1 * 1= 1;
    total = 343 + 27 +1 = 371
     */
    int n;
    cin >> n;

    int sum = 0;
    int originalN = n;
    while (n > 0)
    {
        int lastdigit = n % 10;
        sum += pow(lastdigit, 3);
        n = n / 10;
    }

    if (sum == originalN)
    {
        cout << "Armstrong Number" << endl;
    }
    else
    {
        cout << "No an armstrong Number" << endl;
    }

    return 0;
}