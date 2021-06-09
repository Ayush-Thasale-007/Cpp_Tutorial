#include <iostream>
#include <cstring>
using namespace std;

// Find USername from email

int main()
{
    string str = "johndoe@gmail.com";
    int index = str.find('@');
    string username = "";
    username.resize(index);
    username = str.substr(0, index);
    // for (int i = 0; i < index; i++)
    // {
    //     username[i] = str[i];
    // }

    cout << "Username : " << username;

    return 0;
}
