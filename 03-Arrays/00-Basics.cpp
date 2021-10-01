#include <iostream>
using namespace std;

int main()
{
    // Arrays -> A Data Type to store data of same type
    // in a contiguous way in the memory
    // Integer Array
    /*
        Syntax ->
        identifier[No. of elements] = {Elements}
    */
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    /* 
        For accessing elements just use their index
        Note index in C++ Starts from 0 that means 
        in above array 1 is at 0th Position 2 is at
        1st and 3 is at 2nd and so on
    */
    // Will print 8
    cout << arr[7] << endl;

    cout << "All Elements : " << endl;
    // to print all elements of an array

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
// Would print the array that we just input above.
    return 0;
}
