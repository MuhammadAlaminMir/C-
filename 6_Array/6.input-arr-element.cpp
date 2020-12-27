#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    cin >> size;

    int nums[size];
    int i, sum, avg, max;

    cout << "Input \n";

    for (i = 0; i <= size; i++)
    {
        cin >> nums[i];
    }
    cout << "Output \n";
    sum = 0;
    max = nums[0];
    for (i = 0; i <= size; i++)
    {
        sum += nums[i];
        if (max < nums[i])
        {
            max = nums[i];
        }
    }
    avg = sum / sizeof(nums) / 4;
    cout << "Sum : " << sum;
    cout << "Max Number : " << max;
    cout << "Avarage  : " << avg;

    return 0;
}