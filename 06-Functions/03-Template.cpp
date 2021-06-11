#include <iostream>
using namespace std;
template <class M>

// Instead of writing two functions which only differ in types
// we can create a template

// int max(int a, int b)
// {
//     if (a > b)
//     {
//         return a;
//     }
//     else
//         return b;
// }

// float max(float a, float b)
// {
//     if (a > b)
//     {
//         return a;
//     }
//     else
//         return b;
// }

// So u can use it if functions only differ in Return type
M maxim(M a, M b)
{
    if (a > b)
    {
        return a;
    }
    else
        return b;
}

int main()
{
    cout << maxim(10, 20) << endl;
    cout << maxim(10.8f, 9.765f) << endl;

    return 0;
}