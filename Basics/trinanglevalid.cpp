//Question Number #10
#include <iostream>
using namespace std;
class Triangle {
private:
    double side1, side2, side3;

public:

    void setSides(double s1, double s2, double s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    bool isEquilateral() {
        return (side1 == side2 && side2 == side3);
    }

    bool isIsosceles() {
        return (side1 == side2 || side1 == side3 || side2 == side3);
    }

    bool isScalene() {
        return (!isEquilateral() && !isIsosceles());
    }
};

int main() {
    double s1, s2, s3;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> s1 >> s2 >> s3;

    Triangle t;
    t.setSides(s1, s2, s3);

    if (t.isEquilateral())
        cout << "Triangle is equilateral.\n";
    else if (t.isIsosceles())
        cout << "Triangle is isosceles.\n";
    else if (t.isScalene())
        cout << "Triangle is scalene.\n";
    else
        cout << "Invalid triangle.\n";

    return 0;
}
