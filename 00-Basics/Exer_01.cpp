#include <iostream>
using namespace std;
#define PI 3.142

// Area Of Circle Problem

int main()
{
    float radius, area;

    cout << "Enter Radius" << endl;
    cin >> radius;

    area = PI * (radius * radius);

    cout << "Area Is : " << area << endl;

    return 0;
}
