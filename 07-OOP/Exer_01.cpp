#include <iostream>
using namespace std;

/*
    Data Members
        Roll No.
        Name
        Marks in 3 Subjects
    Functions For 
        Total Marks
        Grade

*/

class Student
{
private:
    int rollNo;
    string name;
    int *marks = new int[3];

public:
    int size = sizeof(marks) / sizeof(int);
    Student(int roll, string name, int score[]);
    int getRoll();
    string getName();
    int getMarks();
    void setRoll(int roll);
    void setName(string name);
    void setMarks(int scores[]);
    int totalMarks();
    int grade();
};
Student::Student(int roll = 0, string name = " ", int score[] = 0)
{
    setRoll(roll);
    setName(name);
    setMarks(score);
}

void Student::setRoll(int roll)
{
    if (roll >= 0)
    {
        this->rollNo = roll;
    }
    else
        cout << "Invalid Roll No.";
}

void Student::setName(string name)
{
    this->name = name;
}

void Student::setMarks(int scores[])
{
    this->marks = scores;
}

string Student::getName()
{
    return name;
}

int Student::getRoll()
{
    return rollNo;
}

int Student::grade()
{
    for (int i = 0; i <= size; i++)
    {
        cout << "Marks : " << marks[i] << endl;
    }
    return 0;
}

int Student::totalMarks()
{
    int sum = 0;
    for (int i = 0; i <= size; i++)
    {
        sum += marks[i];
    }
    return sum;
}
int main()
{
    string stud = "John";
    Student john;
    int scores[] = {88, 70, 52};
    john.setMarks(scores);
    john.setName(stud);
    john.setRoll(7);
    // cout << john.grade();
    // cout << john.getName() << endl;
    // cout << john.getRoll() << endl;
    cout << john.totalMarks() << endl;
    // delete marks[3];
    return 0;
}
