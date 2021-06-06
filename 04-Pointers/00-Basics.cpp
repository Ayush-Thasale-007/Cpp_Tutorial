#include <iostream>
using namespace std;

int main()
{
    // Here x is an integer whereas p is pointer to integer x
    // & is used to assign address
    int x = 10;

    // p basically holds address of x
    int *p = &x;

    cout << "Valueof x : " << x << endl;
    cout << "Address of x : " << &x << endl;
    cout << "Value of p : " << p << endl;
    cout << "Address of p : " << &p << endl;
    // dereferencing or accessing value pointed by pointer
    cout << "Pointer pointed to value : " << *p;

    return 0;
}

// So Basically suppose x address is 200 and value is 10 and p is at 400

// x[10] Address = 200 | p[200] Address = 400