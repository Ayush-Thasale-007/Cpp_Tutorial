#include <iostream>
using namespace std;

// Lower Triangle

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 5; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }


    for (int p = 0; p < 5; p++)
    {
        for (int m = 0; m < 5; m++)
        {
            if (p > m)
            {
                cout << " ";
            }
            else
                cout << "#";
        }
        cout << endl;
    }

    return 0;
}