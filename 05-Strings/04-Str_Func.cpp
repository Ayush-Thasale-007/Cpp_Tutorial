#include <iostream>
#include <string>
using namespace std;

// Illustrating String Functions

int main()
{
    string name = "Ayush";
    cout << "Length       : " << name.length() << endl;
    cout << "Size         : " << name.size() << endl;
    // Gives capacity of the string
    cout << "Capacity     : " << name.capacity() << endl;
    // Increase the capacity
    name.resize(22);
    cout << "New Capacity : " << name.capacity() << endl;
    // Gives maximum size
    cout << "Maximun Size : " << name.max_size() << endl;
    // Clears the Content
    name.clear();
    cout << "Cleared Str  : " << name << endl;
    // Check whether a string is empty
    cout << "Empty        : " << name.empty() << endl;

    return 0;
}