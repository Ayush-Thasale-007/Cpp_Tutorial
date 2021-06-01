#include <iostream>
using namespace std;

int main()
{
    // Data Type String
    string name;
    cout << "Enter Your Name" << endl;
    // It Wont Read Full Sentence So To Resolve This
    // cin >> name;

    // getline(input_stream, Variable)
    // This Will Assign Entire Line To name
    getline(cin, name);

    cout << "Name Is " << name << endl;
    return 0;
}
