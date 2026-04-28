#include <iostream>
using namespace std;
class Circle {
private:
    double radius;

public:
    // Constructor
    Circle(double r) {
        radius = r;
    }

    // Member function to calculate the circle's area
    double calculateArea() {
        return 3.14159 * radius * radius;
    }

    // Member function to calculate the circle's circumference
    double calculateCircumference() {
        return 2 * 3.14159 * radius;
    }
};

int main() {
    // Create an instance of the Circle class with radius 5
    Circle circle(5);

    // Calculate and print the area of the circle
    cout << "Area of the circle: " << circle.calculateArea() << endl;

    // Calculate and print the circumference of the circle
    cout << "Circumference of the circle: " << circle.calculateCircumference() << endl;

    return 0;
}
