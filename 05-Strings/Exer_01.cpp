#include <iostream>
using namespace std;

// Find length of a string

int main()
{
    /*
        string str;
        cout << "Enter a string : ";
        getline(cin, str);
        cout << "String Length is : " << str.length() << endl;
    */

    // Using for loop and iterator
    string wel = "Welcome";
    int count;

    for (int i = 0; wel[i] != '\0'; i++)
    {
        count++;
    }
    cout << count << endl;

    string tue = "Tuesday";
    string::iterator it;
    int counter = 0;
    for (it = tue.begin(); it != tue.end(); it++)
    {
        counter++;
    }

    cout << counter << endl;

    return 0;
}