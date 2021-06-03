#include <iostream>
using namespace std;

// Illustrates Dynamic Declaration And Scope
int main()
{
    {
        int c = 3;
    }

    // Cant Print c Here
    // cout << c << endl;
    return 0;
}