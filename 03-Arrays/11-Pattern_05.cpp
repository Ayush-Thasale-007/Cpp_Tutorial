#include <iostream>
using namespace std;

// Cross Diagonal
// Remember if you have elements below cross diagonal
// Use x + y

int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i + j >= 3)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
i j   0  1  2  3
0    [ ][ ][ ][*]
1    [ ][ ][*][*]
2    [ ][*][*][*]
3    [*][*][*][*]
*/