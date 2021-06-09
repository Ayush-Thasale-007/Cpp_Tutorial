#include <iostream>
using namespace std;

// Initializing Strings using character arrays

int main()
{
    // Note it is stored in memory along with string terminator
    // [H][e][l][l][o][\0]
    // \0 -> String Terminator
    char c1 = 'a';
    char c2[10] = "Hello";
    char c3[] = "Hello";
    char c4[] = {'H', 'e', 'l', 'l', 'o'};
    // Forbids in C++ 11 and above
    // char *c5 = "Hello";

    cout << c1 << endl;
    cout << c2 << endl;
    cout << c3 << endl;
    cout << c4 << endl;

    return 0;
}