#include <iostream>
using namespace std;

// Mini Project to Uppercase strings
// Return Palindrome if palindrome else write reverse in Upper Case

int main()
{
    string str;
    cout << "Enter a word : ";
    cin >> str;
    string reverse;
    reverse.resize(str.length());

    for (int i = 0, j = str.length() - 1; i <= str.length() - 1, j >= 0; i++, j--)
    {
        reverse[j] = str[i];
    }

    if (reverse == str)
    {
        cout << "Palindrome" << endl;
    }

    else
    {
        for (int i = 0; i <= reverse.length() - 1; i++)
        {
            if (reverse[i] >= 97 && reverse[i <= 122])
            {
                reverse[i] -= 32;
            }
        }
        cout << "Reverse in UpperCase : " << reverse << endl;
    }

    return 0;
}