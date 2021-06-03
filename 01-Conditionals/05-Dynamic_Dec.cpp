#include <iostream>
using namespace std;

int main()
{
    // Now U Should Know About Scope That
    // A Variable Is Visible Inside The Scope In Which It Is Declared
    /*
        Now Suppose We Need This k Inside If Statement Only But This Will
        Be In Memory Till End To Avoid This
    */
    // int k = 4;
    // Only Available In C++ 17
    if (int k = 4; k < 10)
    {
        cout << "Hi" << endl;
    }

    return 0;
}