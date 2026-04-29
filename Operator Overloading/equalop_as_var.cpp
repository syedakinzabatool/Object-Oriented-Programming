#include <iostream>
using namespace std;
class Employee
{    private:
		int idNum;
		double salary;
public:
	  void setValues ( int idN , double sal )
	  {
	      salary = sal;
	      idNum  = idN;
      }
       int getSalary()
    {
        return salary;
    }
	  void operator = (double sal)
	  {
	      salary = sal;
      }
       bool operator>(Employee &e)
    {
        return (salary > e.salary);
    }

      void display()
      {
                //cout << "Employee Id: " <<<< ", Seniority: " << seniority << " years" << endl;
          cout<<"Salary is : "<<salary<<endl;
      }
};
int main ( )
{
	Employee emp1;
	emp1.setValues(10,33.5);
	Employee emp2;
	emp2 = 44.6;
    emp1.display();
    emp2.display();
    if(emp1>emp2)
	{
        cout << emp1.getSalary() << " > " << emp2.getSalary() << endl;
        cout << "Emp1 has more salary than Emp2." << endl;
    }
    else{
         cout << emp1.getSalary() << " < " << emp2.getSalary() << endl;
        cout << "Emp2 has more salary than Emp1." << endl;
    }
}
