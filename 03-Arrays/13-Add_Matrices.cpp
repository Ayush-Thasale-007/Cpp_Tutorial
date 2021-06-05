#include <iostream>
using namespace std;

// Adding two matrices

int main()
{
    int A[3][3] = {{4, 7, 7},
                   {3, 7, 1},
                   {2, 5, 1}};
    int B[3][3] = {{9, 0, 4},
                   {8, 6, 3},
                   {3, 4, 7}};
    int res[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            res[i][j] = A[i][j] + B[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (res[i][j] >= 10)
            {
                cout << res[i][j] << " ";
            }
            else if (res[i][j] < 10)
            {
                cout << res[i][j] << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}