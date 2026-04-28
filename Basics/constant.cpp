/* Write a program to model a car dealership where a class `Car` represents available cars. Implement a constant member function named `getModel()` to retrieve the model of the car.*/ 
#include <iostream>
#include <cstring>

class Car {
private:
    char model[100];

public:
    Car() : model{""} {} // Initialize model with an empty string

    void setModel(const char m[]) {
        strcpy(model, m);
    }

    const char* getModel() const { // Constant member function to retrieve the model
        return model;
    }

    bool isAvailable() const {
        return strcmp(model, "Audi") == 0; // Check if the model is "Audi"
    }
};

int main() {
    Car c;
    c.setModel("Audi");
    if (c.isAvailable()) {
        std::cout << "Car is available" << std::endl;
    } else {
        std::cout << "Not available." << std::endl;
    }
    return 0;
}