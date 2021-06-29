#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream infile;
    infile.open("My.txt");
    // To check whether the file is open or not
    if (!infile)
    {
        cout << "Not Open" << endl;
    }
    // Another way
    // if (!infile.is_open())
    // {
    //     cout << "Not Open" << endl;
    // }

    string str;
    int x;
    // This means inserting the data from infile to str
    infile >> str;
    infile >> x;
    cout << str << endl;
    cout << x << endl;

    return 0;
}