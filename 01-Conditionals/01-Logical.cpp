#include <iostream>
using namespace std;

int main()
{
    bool t, f;
    t = true;
    f = false;

    // Lets Illustrate && Operator
    cout << "-------AND Operator-------" << endl;
    bool t_and_f = t && f;
    cout << "True AND False   :  " << t_and_f << endl;
    bool t_and_t = t && t;
    cout << "True AND True    :  " << t_and_t << endl;
    bool f_and_f = f && f;
    cout << "False AND False  :  " << f_and_f << endl;

    // Lets Illustrate || Operator
    cout << "-------OR Operator-------" << endl;
    bool t_or_f = t || f;
    cout << "True OR False    :  " << t_or_f << endl;
    bool t_or_t = t || t;
    cout << "True OR True     :  " << t_or_t << endl;
    bool f_or_f = f || f;
    cout << "False OR False   :  " << f_or_f << endl;

    // Lets Illustrate ! Operator
    cout << "-------NOT Operator-------" << endl;
    bool neg_t = !t;
    cout << "NOT Of True      :  " << neg_t << endl;
    bool neg_f = !f;
    cout << "NOT Of False     :  " << neg_f << endl;

    return 0;
}