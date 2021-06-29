#include <iostream>
// For file related operations
#include <fstream>
using namespace std;

int main()
{
    // So it means you have sort of created a connection between a file name My.txt
    // Now after exection a file will be created if u want to add to file
    // And want to add newline you can do this
    ofstream outfile("My.txt", ios::app);
    // Will write Hello World !!! in File
    outfile << "Hello World !!!" << endl;
    // This file must be closed to avoid problems
    outfile.close();
    return 0;
}