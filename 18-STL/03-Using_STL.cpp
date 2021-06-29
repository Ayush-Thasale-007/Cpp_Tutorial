#include <vector>
#include <list>
#include <iostream>
using namespace std;

int main()
{
    // Creating a Vector
    vector<int> v = {10, 20, 40};
    v.push_back(25);
    v.push_back(55);
    v.pop_back();

    // To create an iterator
    vector<int>::iterator itr = v.begin();

    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout << ++*itr << endl;
    }

    // for (int x : v)
    // {
    //     cout << x << " ";
    // }

    return 0;
}