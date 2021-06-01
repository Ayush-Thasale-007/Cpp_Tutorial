#include <iostream>
using namespace std;

// Net Salary Problem
// Net Salary = Basic Sal + Bas Sal * % Of All + Bas Sal * % Of Ded

int main()
{
    double net_sal, bas_sal, all_per, ded_per;
    cout << "Enter Basic Salary, Allowance Perc, Deduction Per Resp :)" << endl;
    // endl; Not Needed In cin
    cin >> bas_sal >> all_per >> ded_per;

    net_sal = bas_sal + bas_sal * (all_per / 100) + bas_sal * (ded_per / 100);

    cout << "Net Salary : " << net_sal << endl;

    return 0;
}
