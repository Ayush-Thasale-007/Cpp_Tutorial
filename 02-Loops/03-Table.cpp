#include <iostream>
using namespace std;

// Illustrating Inner For Loop

int main()
{
    /*
        So What Is Happening Here Is Lets Analyse First Round
        So The i Stays 1 Till j Becomes 11 And So On 
    */

    for (int i = 1; i < 11; i++)
    {
        for (int j = 1; j < 11; j++)
        {
            cout << i << " * " << j << " = " << i * j << endl;
        }
    }

    return 0;
}