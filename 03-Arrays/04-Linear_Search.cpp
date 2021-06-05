#include <iostream>
using namespace std;

// Linear Search
// Seacrching -> Process of finding an element
/*
    Linear Search -> Process of searching elements one by one
*/

int main()
{
    int arr[7] = {1, 4, 8, 9, 4, 7, 6};
    int key = 7;

    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == key)
        {
            cout << "Success" << endl;
            cout << "Position = " << i << endl;
            return 0;
        }
    }
    cout << "Failure" << endl;
    return 0;
}