/* 
    C++ comes with libraries which helps us in performing input/ output.
    In C++ sequence of bytes corresponding to input and output are commonly known as streams.

    . Input Stream: Direction of flow of bytes takes place from input 
    device (for ex keyboard) to the main memory.

    . Output Stream: Direction of flow of bytes place from main memory to the output device(for ex Display)

    
 */
#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    // << insertion operator
    cout << "Enter the value of num1:\n";
    // >> Entraction operator
    cin >> num1;

    cout << "Enter the value of num2:\n";

    cin >> num2;

    cout << "the sum is " << num1 + num2;

    return 0;
}