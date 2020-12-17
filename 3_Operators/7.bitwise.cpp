#include <iostream>
using namespace std;

int main(void)
{
    char a = 12;
    char b = 25;
    /* 
    Bitwise And Operator
    12 -> 0 0 0 0 1 1 0 0
    25 -> 0 0 0 1 1 0 0 1
    & ->  0 0 0 0 1 0 0 0 = (8)dec
*/

    char c = a & b;
    cout << "AND Operation - " << c << "\n";

    /* 
    Bitwise Or Operator
    12 -> 0 0 0 0 1 1 0 0
    25 -> 0 0 0 1 1 0 0 1
    |  -> 0 0 0 1 1 1 0 1 = (29)dec
    */
    char d = a | b;
    cout << "OR Operation - " << d << "\n";

    /*
    Bitwise XOR Operator
    12 -> 0 0 0 0 1 1 0 0
    25 -> 0 0 0 1 1 0 0 1
    ^  -> 0 0 0 1 0 1 0 1 = (21)dec
    */
    char e = a ^ b;
    cout << "XOR Operation - " << e << "\n";

    /* 
    Bitwise Complement Operator
    
    25 -> 0 0 0 1 1 0 0 1
    ~  -> 1 1 1 0 0 0 1 0 = (230)dec
    */
    char f = ~b;
    cout << "Complement Operation - " << f << "\n";

    /* 
    Right Shift 
    212 -> 1 1 0 1 0 1 0 0
    >>1 -> 0 1 1 0 1 0 1 0  (106)dec
    >>2 -> 0 0 1 1 0 1 0 1  (53)dec
    >>3 => 0 0 0 1 1 0 1 0  (26)dec
     */

    char rs1 = 212 >> 1;
    char rs2 = 212 >> 2;
    char rs3 = 212 >> 3;
    cout << "Right Shift 1 - " << rs1 << "\n";
    cout << "Right Shift 2 - " << rs2 << "\n";
    cout << "Right Shift 3 - " << rs3 << "\n";

    /* 
    Left Shift 
    212 -> 1 1 0 1 0 1 0 0
    <<1 -> 1 1 0 1 0 1 0 0 (168)dec
    <<2 -> 1 1 0 1 0 1 0 0 (80)dec
    <<3 => 1 1 0 1 0 0 0 0 (160)dec
     */

    char ls1 = 212 << 1;
    char ls2 = 212 << 2;
    char ls3 = 212 << 3;
    cout << "Left Shift 1 - " << ls1 << "\n";
    cout << "Left Shift 2 - " << ls2 << "\n";
    cout << "Left Shift 3 - " << ls3 << "\n";

    return 0;
}