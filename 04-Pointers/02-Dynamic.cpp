#include <iostream>
using namespace std;

// Cpp Allows dynamic array size

int main()
{
    int size;
    cout << "Enter Size : ";
    cin >> size;
    int A[size]; // Allowed in C++
    // If u still want to change the size u cant
    // U will have to use Heap memory
    size = 33;

    int *p = new int[size];
    p[35]; // Allowed in C++ w help of Heap

    return 0;
}