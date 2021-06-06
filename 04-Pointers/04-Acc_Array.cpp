#include <iostream>
using namespace std;

// Accessing Arrays

int main()
{
    int A[5] = {2, 4, 6, 8, 10};
    int *p = A;

    cout << "A[3] :" << A[3] << endl;
    cout << "3[A] :" << 3 [A] << endl;
    cout << "*(A + 2): " << *(A + 2) << endl;
    cout << "*(p + 2): " << *(p + 2) << endl;
    cout << "p[3] :" << p[3] << endl;
    cout << "3[p] :" << 3 [p] << endl;

    return 0;
}