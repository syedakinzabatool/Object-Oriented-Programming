//ques 11
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    string class_name;
    int roll_number;
    int marks;

public:
    Student(string n,  string c, int r, int m) {
        name = n ;
        class_name=c;
        roll_number = r;
        marks = m;
    }

    // Function to calculate grade
    char calculate_grade() const {
        if (marks >= 90)
            return 'A';
        else if (marks >= 80)
            return 'B';
        else if (marks >= 70)
            return 'C';
        else if (marks >= 60)
            return 'D';
        else
            return 'F';
    }

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Class: " << class_name << endl;
        cout << "Roll Number: " << roll_number << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculate_grade() << endl;
    }
};

int main() {
    Student s("John Doe", "10th", 123, 85);
    s.display();

    return 0;
}