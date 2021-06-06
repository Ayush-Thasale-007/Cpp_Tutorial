#include <iostream>
using namespace std;

void fun(int *r)
{
    delete r;
}

int main()
{
    // Unitialized Pointer as It hasnt ben assigned
    // to any address
    int *p;

    int *q = new int[5];

    // Now without deletinh q if i assign it to null
    // It will cause memory leak as it is pointing to Heap
    // And not in Stack
    delete q;
    q = nullptr;

    // Dangling Pointer -> Creates ptr which has been deleted
    // but still we are trying to access it

    int *r = new int;
    *r = 7;

    fun(r);

    cout << *r;

    return 0;
}