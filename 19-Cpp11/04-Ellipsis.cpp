#include <iostream>
#include <cstdarg>
using namespace std;

// To pass variable number of arguments

int sum(int n, ...)
{
    va_list list;
    va_start(list, n);
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res += va_arg(list, int);
    }
    va_end(list);
    return res;
}

int main()
{
    // Three elements
    int final_sum = sum(3, 43, 52, 61);
    cout << final_sum << endl;
    return 0;
}