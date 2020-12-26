#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int value;
    int size = 0;
    int isFound = 0;

    while (1)
    {
        cout << "Enter a value : ";
        cin >> value;

        for (int i = 0; i < 10; i++)
        {
            if (arr[i] == value)
            {
                isFound = 1;
                break;
            }
        }
        if (!isFound)
        {
            arr[size] = value;
            size++;
        }
        else
        {
            cout << "value already exist ";
        }
        if (size == 10)
        {
            break;
        }
        isFound = 0;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i];
    }

    return 0;
}