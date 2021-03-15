
#include <iostream>
using namespace std;

// Linier Search

void linier_Search(int rolls[], int length, int search_key)
{
    int isFound = 0;

    // User Input Input
    cout << "Enter search_key: ";
    cin >> search_key;

    // Search

    for (int i = 0; i < length; i++)
    {
        if (rolls[i] == search_key)
        {
            cout << "Item Found at index " << i << endl;
            // return 0;
            isFound = 1;
            break;
        }
    }
    if (isFound == 0)
    {
        cout << "Item Not Found\n";
    }
}

// Binary Search:
void binarySearch(int arr[], int length, int search_key)
{
    int s = 0;
    int e = length;
    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == search_key)
        {
            cout << "Item Found at index " << mid << endl;
            return;
        }
        else if (arr[mid] > search_key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    cout << "Item Not Found\n";
}

int main()
{

    int rolls[] = {
        0,
        1,
        2,
        3,
        4,
        6,
        7,
        8,
        9,
    };
    int length = sizeof(rolls) / sizeof(rolls[0]);
    int search_key;
    // cout << "Please Enter search_key:"
    cin >> search_key;
    // linier_Search(rolls, length, search_key);

    binarySearch(rolls, length, search_key);

    return 0;
}