#include <iostream>
using namespace std;

// 2D Arrays

/*
    Syntax -> array_name[rows][columns]
*/

int main()
{
    int a[2][3];
    // Or can be initialized as
    int b[3][3] = {{3, 9, 1}, {6, 2, 9}, {8, 3, 6}};
    // This will create an array like :
    /*
        [00][01][02]
        [10][11][12]
    */
    // You can fill array using for-loop Like This
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "A[" << i << "]"
                 << "[" << j << "] = ";
            cin >> a[i][j];
        }
    }
    // Same way you can display array
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
            if (j == 2)
            {
                cout << endl;
            }
        }
    }

    return 0;
}