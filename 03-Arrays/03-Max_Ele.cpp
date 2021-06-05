#include <iostream>
using namespace std;

// Finding maximum element in an Array

int main()
{
    int arr[] = {4, 7, -5, 8, 5};
    // Assigns max to minimum 64-bit Integer
    int max = INT64_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max << endl;

    // Using For-Each
    max = 0;
    for (int x : arr)
    {
        if (x > max)
        {
            max = x;
        }
    }

    cout << max;

    return 0;
}