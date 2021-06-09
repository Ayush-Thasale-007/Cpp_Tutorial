#include <iostream>
using namespace std;

// String Inputs

int main()
{
    /*
    char s[20];
    cout << "Will only take one word of less than 19 characters : ";
    cin >> s;
    cout << s << endl;
    */
    char str[50];
    cout << sizeof(string);
    cout << "Will take a sentence of less than 49 characters : ";
    // cin.getline(char_arr, max_element)
    cin.getline(str, 50);
    cout << str << endl;
    // or cin.get(str, 50)
    // Browse problem with get() function
    return 0;
}