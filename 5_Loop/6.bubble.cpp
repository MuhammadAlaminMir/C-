#include <iostream> using namespace std;

int main()
{
    int arr[10];
    int value;
    int size = 0;
    int isFound = 0;

    while (1)
    {
        cout <<"Enter a value : ");
        cin >>"%d", &value);

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
            cout <<"value already exist \n");
        }
        if (size == 10)
        {
            break;
        }
        isFound = 0;
    }
    cout <<"unsorted ");
    for (int i = 0; i < 10; i++)
    {
        cout <<"%d ", arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout <<"\n");

    cout <<"sorted ");
    for (int i = 0; i < 10; i++)
    {
        cout <<"%d ", arr[i]);
    }

    // int a[] = {33, 20, -10, -8, 23, 34};
    // int length = sizeof(a) / 4;
    // int temp;

    // for (int i = 0; i < length; i++)
    // {
    //     for (int j = i + 1; j < length; j++)
    //     {
    //         if (a[i] > a[j])
    //         {
    //             temp = a[i];
    //             a[i] = a[j];
    //             a[j] = temp;
    //         }
    //     }
    // }
    // for (int i = 0; i < length; i++)
    // {
    //     cout <<"%d ", a[i]);
    // }

    return 0;
}