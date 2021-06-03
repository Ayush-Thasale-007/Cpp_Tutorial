#include <iostream>
using namespace std;

// Primes
int main()
{
    int flag;
    for (int i = 1; i < 100; i++)
    {
        // flag Should Be Initialized Here Only /-
        flag = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag++;
                break;
            }
        }

        if (flag == 0)
        {
            if (i != 1)
            {
                cout << i << " ";
            }
        }
    }

    return 0;
}