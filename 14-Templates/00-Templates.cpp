#include <iostream>
using namespace std;
template <class Temp>

Temp maximum(Temp x, Temp y)
{
    return x > y ? x : y;
}

int main()
{
    cout << maximum('a', 'S') << endl;
    return 0;
}

// Honestly i didnt understand anything since last 2 sections so no Explanations here