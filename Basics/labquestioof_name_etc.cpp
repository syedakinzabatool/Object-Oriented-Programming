#include <iostream>
using namespace std;

// Class definition for Student
class Student
{
private:
    string name;
    int age;

public:
    // Default constructor
    Student()
    {
    }
    // Parameterized constructor
    Student(string n, int a)
    {
        name = n;
        age = a;
    }
    // Member function to display name and age
    void showAll()
    {
        cout << "Your name is: " << name << endl;
        cout << "Your age is: " << age << endl;
    }
    // Copy constructor
    Student(Student &s) // Student is the class name.
    {
        name = s.name;
        age = s.age;
    }
};

// Main function
int main()
{
    // Creating an object of Student class using parameterized constructor
    Student obj1("Kinza", 19);
    // Creating an object of Student class using copy constructor and passing another object
    Student obj2(obj1);
    // Displaying the details using showAll() function
    obj2.showAll();

    return 0;
}
