#include <iostream>
using namespace std;


int main()
{
    int x = 10;
    int &y = x;
    // Reference doesnt take any memory
    // Here y is reference or alias of x

    // Both holds same value but...
    cout << "x = " << x << " y = " << y << endl;

  
    x++;
    cout << "x = " << x << " y = " << y << endl;
    return 0;
}