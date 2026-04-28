//Lecture 03 Example
#include <iostream>
using namespace std;
class circle
{
private:
    double radius;

public:
    void store(double);
    double area(void); // could be empty.not necessary to write data type i.e;void
    void display(void);
};
// member function definitions

void circle::store(double r)
{
    radius = r;
}

double circle::area()
{
    return 3.14 * radius * radius;
}

void circle::display(void)
{
    cout << "Radius(r)= " << radius << endl;
}
int main(void)
{
    circle c; // an object of circle class
    c.store(5.0);
    cout << "The area of circle c is " << c.area() << endl;
    c.display();
}
