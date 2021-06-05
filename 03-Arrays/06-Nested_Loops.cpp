#include <iostream>
using namespace std;

// For-Loop : Useful for dealing with 2d Arrays

int main()
{
    // So basically i acts as rows and j as columns
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "A[" << i << "]"
                 << "[" << j << "]" << endl;
        }
    }

    return 0;
}