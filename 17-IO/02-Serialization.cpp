#include <iostream>
#include <fstream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    string branch;
    friend ofstream &operator<<(ofstream &ofs, Student &s);
};

ofstream &operator<<(ofstream &ofs, Student &s)
{
    ofs << s.name << endl;
    ofs << s.roll << endl;
    ofs << s.branch << endl;
    return ofs;
}

int main()
{
    Student stud;
    stud.name = "Gilbert";
    stud.roll = 7;
    stud.branch = "IT";

    ofstream ofs("student.txt", ios::trunc);
    // Now instead of doing this individually you can make it happen in one line using operator overloading
    // ofs << stud.roll << endl;
    // ofs << stud.name << endl;
    // ofs << stud.branch << endl;

    ofs << stud;
    ofs.close();
    return 0;
}