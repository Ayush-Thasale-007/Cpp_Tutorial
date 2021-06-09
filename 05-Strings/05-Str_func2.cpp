#include <iostream>
using namespace std;

int main()
{
    string str = "";

    // Appends the passed string to the string
    str.append("Bye ");
    cout << str << endl;
    // Inserts string at given index
    // str.insert(index, string)
    str.insert(4, "C'ya");
    cout << str << endl;

    // replacing
    // str.replace(index, elements_from_there_on, string)
    str.replace(2, 2, " Messed ");
    cout << str << endl;

    // Will insert a string at the end
    str.push_back('z');
    cout << str << endl;

    // Removes last character
    str.pop_back();
    cout << str << endl;

    return 0;
}