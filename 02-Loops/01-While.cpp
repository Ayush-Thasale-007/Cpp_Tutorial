#include <iostream>
using namespace std;

// Demonstrating While Loop

int main()
{
    int i = 10;
    // Will Process Till Condition Becomes False
    while (i != 0)
    {
        if (i == 1)
        {
            cout << i;
        }
        else
            cout << i << ", ";

        // Dont Forget This If U Dont Want Infinite Loop
        i--;
    }

    return 0;
}