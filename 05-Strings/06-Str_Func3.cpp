#include <iostream>
#include <string>
using namespace std;

// More string functions

int main()
{
    char c[50];
    string str = "welcome";

    // Copy string to character array
    // Syntax -> string.(char_arr, no_of_char_toCopy)
    str.copy(c, str.length());
    cout << c << endl;

    // finds index of string
    cout << str.find("come") << endl;
    string hello = "Hello World";

    // first and last occurences
    cout << str.find_first_of('l') << endl;
    cout << str.find_last_of('l') << endl;

    return 0;
}