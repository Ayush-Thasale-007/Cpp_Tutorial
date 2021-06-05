#include <iostream>
using namespace std;

// Printing Number Square

int main()
{
    int k = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3;j++)
        {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }

    return 0;
}