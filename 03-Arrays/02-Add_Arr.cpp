#include <iostream>
using namespace std;

// Adding elements of an Array

int main()
{
    int arr[] = {1, 6, 7, 8};
    int sum;

    // Using For-Each loop
    for (int x : arr)
    {
        sum += x;
    }

    cout << sum << endl;

    sum = 0;

    // A method to find size of an Array using sizeof()
    int size_arr = sizeof(arr) / sizeof(int);

    // Using For-Loop
    for (int i = 0; i < size_arr; i++)
    {
        sum += arr[i];
    }

    cout << sum << endl;

    /*
        So the basic difference in For-Loop and For-Each is
        For-Loop -> Counter can give access to index
        For-Each -> Variable 'x' gives direct access to element
    */

    /*
        Note : Here x is not the element itself but rather copy
        of the element
        Altering x wont alter the original value
    */
    return 0;
}