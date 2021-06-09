#include <iostream>
#include <string>
using namespace std;

int main()
{
    /*
        string name;
        cout << "Enter first name : ";
        cin >> name;
        cout << name << endl;
    */
    // Unlike character array string allocates more
    // memory than designated
    /*
        string full_name;
        cout << "Enter full name : ";
        getline(cin, full_name);
        cout << full_name << endl;
    */

    string neme;
    cout << "Enter a string : " << endl;
    cin >> neme;
    cout << neme << endl;
    cin >> neme;
    cout << neme << endl;
    return 0;
}