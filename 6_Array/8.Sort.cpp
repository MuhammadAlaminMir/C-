// Array Sorting

#include <iostream>
using namespace std;

int main()
{
    int numbers[] = {0, 4, 5, 6, 11, 12, 1, 2, 3, 7, 8, 9, 10, 13};
    // Accending Order Sorting
    // Selection Sort
    int length, i, temp, j;
    length = sizeof(numbers) / sizeof(numbers[0]);

    for (i = 0; i < length - 1; i++)
    {
        for (j = i + 1; j <= length; j++)
        {
            if (numbers[i] > numbers[j])
            {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    for (i = 0; i < length; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << "\n";
    // Decending Order Sorting
    for (i = 0; i < length; i++)
    {
        for (j = 0; j < length; j++)
        {
            if (numbers[i] > numbers[j])
            {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    for (i = 0; i < length; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << "\n";

    return 0;
}