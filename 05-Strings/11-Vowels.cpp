#include <iostream>
using namespace std;

// This program counts the total number of non-unique vowels present in given string str.

int main()
{
    string vowels = "aeiou";
    string str = "Hello World";
    int count = 0;

    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < vowels.length(); j++)
        {
            if (vowels[j] == str[i])
            {
                count++;
            }
        }
    }

    // Make it even advanced adding consonants
    cout << count << endl;

    return 0;
}
