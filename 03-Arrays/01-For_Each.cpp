#include <iostream>
using namespace std;

// For Each -> Special type of For-Loop for iterative Data Types
// Eg : Array

int main()
{
    char arr[5] = {'A', 'Y', 'U', 'S', 'H'};

    // So let us analyze For-Each loop
    /*
        Syntax ->
        for (data_type temp_var : Array)
        {
            code
        }
    */

    /*
        So it basically means for each chacter of the array
        a loop-scoped temporary variable is assigned
    */

    for (char A : arr)
    {
        cout << A;
    }

    cout << endl;

    // You can even use auto instead of data_type to
    // automatically assigning variablein the same way you
    // assigned it at the beginning

    for (auto i : arr)
    {
        cout << i;
    }

    return 0;
}