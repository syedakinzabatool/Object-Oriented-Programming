#include <iostream>
using namespace std;
class Employee
{
private:
    string name;
    int seniority;

public:
    Employee(string empName, int empSeniority)
    {
        name = empName;
        seniority = empSeniority;
    }
    int getSeniority()
    {
        return seniority;
    }
    bool operator>(Employee &e)
    {
        return (seniority > e.seniority);
    }
    void display()
    {
        cout << "Employee Name: " << name << ", Seniority: " << seniority << " years" << endl;
    }
};

int main()
{
    Employee emp1("John Doe", 10);
    Employee emp2("Jane Smith", 5);
    emp1.display();
    emp2.display();
    if (emp1 > emp2)
    {
        cout << emp1.getSeniority() << " > " << emp2.getSeniority() << endl;
        cout << "Emp1 has more seniority than Emp2." << endl;
    }
    else
    {
        cout << emp2.getSeniority() << " > " << emp1.getSeniority() << endl;
        cout << "Emp2 has more seniority than Emp1." << endl;
    }
    return 0;
}