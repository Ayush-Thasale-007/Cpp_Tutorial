#include <iostream>
using namespace std;

// Binary Search

/*
    Binary Search -> Suppose you are searching for Page No. 70 in a
    200 Pages book and you are randomly opening pages so suppose if u 
    landed on page no. 35 you will see a page no after that and the landed to
    88 in 2nd go then you will look at previous pages this is called as
    Binary Search
    Note : Only Works for sorted arrays
*/

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key = 7;
    int low = 0, high = 9, mid;
    int t = 0;
    while (low <= high)
    {

        mid = (low + high) / 2;
        if (key == a[mid])
        {
            cout << "Found at : " << mid << endl;
            return 0;
        }
        else if (key < a[mid])
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
        t++;
        cout << "Turns : " << t << endl;
    }

    return 0;
}

// First go
// 1L 2 3 4 [5] 6 7 8 9 10H Not Found
// 1 2 3 4 5 6L 7 [8] 9 10H Not Found
// 1 2 3 4 5 6L [7] 8 9H 10 Found