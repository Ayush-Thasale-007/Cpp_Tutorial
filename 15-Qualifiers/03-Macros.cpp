#include <iostream>
using namespace std;
// Define
#define PI 3.14
#define c cout
// Define Functions
// This will be evaluvate before compilation
#define SQR(x) (x * x)
// For Strings
// means define m as string
#define MSG(m) #m
// If not defined then only defined
#ifndef KO
#define KO "Knock Out"
#endif

int main()
{
    cout << PI << endl;
    c << "Hello" << endl;
    // Will be evaluvated as 5*5 beforehand
    c << SQR(5) << endl;
    c << MSG(Hello) << endl;
    return 0;
}