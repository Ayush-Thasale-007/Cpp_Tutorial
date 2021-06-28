#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 0, c;

    // So let us analyze

    // Here the blocks start so here in try block if any condition goes true
    // and Something is thrown the control is passed to catch block
    // without executing next statements
    try
    {
        if (b == 0)
            throw 7;
        c / b;
        cout << c;
    }
    // The e here is to sort of show what is thrown
    catch (int e)
    {
        cerr << "Division by Zero" << '\n'
             << "e = " << e;
    }

    return 0;
}