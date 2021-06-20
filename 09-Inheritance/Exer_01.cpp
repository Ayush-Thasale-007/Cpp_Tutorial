#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    int id;

public:
    Employee(int id = 0, string name = " ")
    {
        this->id = id;
        this->name = name;
    }

    int getEmployeeID() { return id; }
    string getEmployeeName() { return name; }
};

class FullTimeEmployee : public Employee
{
private:
    int salary;

public:
    FullTimeEmployee(int id, string name, int sal) : Employee(id, name)
    {
        salary = sal;
    }
    int getSalary() { return salary; }
};

class PartTimeEmployee : public Employee
{
private:
    int wage;

public:
    PartTimeEmployee(int id = 0, string name = " ", int wage = 0) : Employee(id, name)
    {
        this->wage = wage;
    }
    int getWage() { return wage; }
};

int main()
{
    PartTimeEmployee test3((int)7, "Gilbert", 700);
    FullTimeEmployee testran((int)70, "Brendon", 70000);

    cout << "Salary       = " << testran.getSalary() << endl;
    cout << "ID Full Time = " << testran.getEmployeeID() << endl;
    cout << "Wage         = " << test3.getWage() << endl;
    cout << "ID Part Time = " << test3.getEmployeeID() << endl;
    // test3;
    return 0;
}