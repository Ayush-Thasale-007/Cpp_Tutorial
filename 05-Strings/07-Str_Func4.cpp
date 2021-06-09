#include <iostream>
using namespace std;

int main()
{
    string str = "Programming";
    // str.substr(starting_index, no_of_elements)
    // Assigns sub string of a string to another string
    string new_str = str.substr(3, 4);
    cout << new_str << endl;
    // Same as strcmp()
    cout << str.compare(new_str) << endl;
    // Gives character at particular index
    cout << str.at(7) << endl;
    // You can access as well as modify character Using :
    str[7] = 'k';
    cout << str << endl;
    // Gives first letter of string
    cout << str.front() << endl;
    // Gives last letter of string
    cout << str.back() << endl;
    // Concatenating strings
    string hello = "Hello";
    string world = " World";
    string catenated = hello + world;
    cout << catenated << endl;
    // Assigning string
    world = hello;
    cout << world << endl;

    return 0;
}