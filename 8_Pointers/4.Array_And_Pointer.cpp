#include <iostream>
using namespace std;

int main()
{
    // Arrays behaves almost similar like pointers.
    // array names are allready sorted the first values location.
    //
    int arr[] = {1, 2, 3, 4, 5};
    cout << *arr << endl;

    int *ptr = arr;
    for (int i = 0; i < 4; i++)
    {
        // cout << *ptr << endl;
        // *ptr++;
        cout << *(arr + i) << endl;
    }

    return 0;
}