#include <iostream>
using namespace std;

// Creating a Array in Heap

// Return type is Pointer
int *array(int size)
{
    // Allocating a identifier in Heap as Function main cannot grab 
    // ant other variable from other functions application memory in stack
    int *p = new int[size];
    for (int i = 0; i < size; i++)
    {
        p[i] = i + 1;
    }
    return p;
}

int main()
{
    int *ptr = array(5);

    for (int i = 0; i < 5; i++)
    {
        cout << ptr[i] << endl;
    }

    return 0;
}