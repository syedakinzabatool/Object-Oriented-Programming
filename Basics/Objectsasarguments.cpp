/*Write a program for a car dealership where a class `Car` represents available cars.
 Implement a function that takes a pointer to a `Car` object as an argument and displays the car's details.*/
 #include <iostream>
using namespace std;

// Car class definition
class Car {
public:
    string make;
    string model;
    int year;
    double price;

    // Constructor to initialize car details
    Car(string mk, string mdl, int yr, double pr) : make(mk), model(mdl), year(yr), price(pr) {}

    // Function to display car details
    void displayDetails() const {
        cout << "Car Details:" << endl;
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Price: $" << price << endl;
    }
};

// Function to display car details using a pointer to a Car object
void displayCarDetails(Car* car) {
    if (car != nullptr) {
        car->displayDetails();
    } else {
        cout << "Invalid car pointer!" << endl;
    }
}

int main() {
    // Creating Car objects
    Car car1("Toyota", "Camry", 2020, 24000);
    Car car2("Honda", "Accord", 2019, 22000);

    // Displaying details using pointers
    displayCarDetails(&car1);
    cout << endl;
    displayCarDetails(&car2);

    return 0;
}
