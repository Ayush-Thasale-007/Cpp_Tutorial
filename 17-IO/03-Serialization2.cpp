#include <iostream>
#include <fstream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    string branch;
    // friend ofstream &operator<<(ofstream &ofs, Student &s);
    friend ofstream &operator>>(ofstream &ifs, Student &s);
};

ifstream &operator>>(ifstream &ifs, Student &s)
{
    ifs >> s.name >> s.roll >> s.branch;
    return ifs;
}

int main()
{
    Student stud;

    ifstream ifs("student.txt");
    ifs >> stud;
    cout << "Name : " << stud.name << endl;
    cout << "Roll No. : " << stud.roll << endl;
    cout << "Branch : " << stud.branch << endl;
    ifs.close();
    return 0;
}