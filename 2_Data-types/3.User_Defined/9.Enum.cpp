/* Enumeration is a user defined datatype in C/C++ language. 
It is used to assign names to the integral constants which makes a program easy to read and maintain. 
The keyword “enum” is used to declare an enumeration. */

#include <iostream>
using namespace std;

enum days_of_week
{
    Sun,
    Mon,
    Tue,
    Wed,
    Thu,
    Fri,
    Sat
};

int main()
{
    enum days_of_week day1, day2;
    day1 = Sun;
    day2 = Wed;
    int dif = day1 - day2;
    cout << day1 << endl;
    cout << dif << endl;

    return 0;
}