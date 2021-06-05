#include <iostream>
using namespace std;

// Displaying Matrix using For-Each loop

int main()
{
    int A[2][3] = {{3, 7, 8}, {1, 3, 5}};
    // Let us analyse this

    // Here Actually rows of Matrix A is assigned to Variable X
    // So x will take references of rows of A
    /*
        Like This x = A[0] A[1] 
    */
    for (auto &x : A)
    {
        // In this line y will take reference of x
        /*
            Like This y = x[0] == A[0][0] and so on..
        */
        for (auto &y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }

    // Note : You can use int or any other keyword in place of auto
    // in above example

    return 0;
}