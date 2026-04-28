#include <iostream>
#include <cstring> // Include the <cstring> header for strcpy
using namespace std;

class Person {
private:
    char name[50];
    int age;
    char country[50];
public:
    // Constructor to initialize age, name, and country
    Person() {
        age = 0;
        strcpy(name, ""); // Initialize name and country with empty strings
        strcpy(country, "");
    }

    // Function to get values from the user
   Person get_value() {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your age: ";
        cin >> age;
        cout << "Enter the name of your country: ";
        cin >> country;
    }

    // Function to set values
    Person set_values(int a, const char n[], const char c[]) {
        age = a;
        strcpy(name, n);
        strcpy(country, c);
    }

    // Function to display person's information
    Person display() {
        cout << "Age is: " << age << endl;
        cout << "Name is: " << name << endl;
        cout << "Country name is: " << country << endl;
    }
};

int main() {
    Person obj1, obj2;

    // For the values of input.
    obj1.get_value();
    obj1.display();

    // For showing values of passing by variables' values.
    obj1.set_values(19, "Kinza", "Pakistan");
    obj1.display();

    return 0;
}
