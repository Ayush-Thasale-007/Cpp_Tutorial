#include <iostream>
#include <cstring>
using namespace std;

// Find USername from email

int main()
{
    string str = "johndoe@gmail.com";
    // find() function returns the index of the 1st occurance of the character('@') passed in our given string.
    // ref: https://www.geeksforgeeks.org/std-find-in-cpp/
    int index = str.find('@');
    string username = "";
    // resize function will trim the string from the supplied index.
    // ref: https://www.geeksforgeeks.org/stdstringresize-in-c/
    username.resize(index);
    username = str.substr(0, index);
    
    // for (int i = 0; i < index; i++)
    // {
    //     username[i] = str[i];
    // }

    cout << "Username : " << username;

    return 0;
}
