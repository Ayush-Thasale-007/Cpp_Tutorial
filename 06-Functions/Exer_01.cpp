#include <iostream>
using namespace std;
#define key 7

// Linear Search

int lin_srch(int arr[], int code, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == code)
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    int arr[] = {1, 7, 5, 3, 8, 9, 2, 3, 5};
    int size = sizeof(arr) / sizeof(int);
    int index = lin_srch(arr, key, size);
    cout << "Index = " << index << endl;
    return 0;
}