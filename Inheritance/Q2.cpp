#include <iostream>
#include <string>
using namespace std;

class Teacher
{
protected:
    string name;
    int t_1;

public:
    void get_data()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> t_1
;
    }
    void put_data()
    {
        cout << "Name: " << name << ", Teacher ID: " << t_1
 << endl;
    }
};

class Student : public Teacher
{
private:
    int m1, m2, m3;

public:
    void getdata()
    {
        Teacher::get_data();
        cout << "Enter marks for 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }
    void putdata()
    {
        Teacher::putdata();
        cout << "Marks: " << m1 << ", " << m2 << ", " << m3 << endl;
    }
};

int main()
{
    Student student;
    student.getdata();
    student.putdata();
    return 0;
}
