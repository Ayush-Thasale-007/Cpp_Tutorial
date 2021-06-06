#include <iostream>
using namespace std;

// All the code we have learned before this can only access
// stack memory to access heap memory pointer can be uses

int main()
{
    // Gets created in stack
    int A[5] = {1, 2, 3, 4, 5};
    // Pointer gets created in stack
    int *p;
    // Now this pointer p has access to an array of 5 elements in Heap
    // new means memory allocated in Heap
    p = new int[5];

    cout << "Address of A : " << A << endl;
    cout << "Address of p : " << &p << endl;
    cout << "Value of p   : " << p << endl;

    // After use of the heap you must delete it if not required later
    // Deletes p from  heap memory
    // It may cause Memory Leak
    delete[] p;
    p = nullptr;

    return 0;
}