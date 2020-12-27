#include <iostream>
using namespace std;

int main()
{

    int score[] = {10, 11, 12, 13, 14};

    // calculate sum:
    int sum = 0;
    for (short i = 0; i <= 4; i++)
    {
        sum += score[i];
    }
    cout << "Sum: " << sum;

    //  Find Average score
    cout << "Average Score = " << sum / 5;

    // Find Highest Score
    int highest = score[0];
    for (short i = 1; i <= 4; i++)
    {
        if (highest < score[i])
        {
            highest = score[i];
        }
    }
    cout << "highest Number: " << highest;

    return 0;
}