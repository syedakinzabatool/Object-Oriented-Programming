#include <iostream>
using namespace std;
class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Constructor to initialize data to 0
    Time()  {
        hours=0;
        minutes=0;
        seconds=0;
    }

    Time(int h, int m, int s) {
    hours=h;
    minutes=m;
    seconds=s; 
    }

    // Display the time in 11:59:59 format
    void display() const {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    // Add two Time objects and return the result
    Time add(const Time& t) const {
        Time result;
        result.seconds = seconds + t.seconds;
        result.minutes = minutes + t.minutes + result.seconds / 60;
        result.hours = hours + t.hours + result.minutes / 60;
        result.minutes %= 60;
        result.seconds %= 60;
        return result;
    }
};

int main() {
    // Create two initialized time objects
    const Time t1(10, 30, 45);
    const Time t2(2, 15, 10);

    // Create one uninitialized time object
    Time t3;

    // Add the two initialized values together
    t3 = t1.add(t2);

    // Display the value of the third variable
    t3.display();

    return 0;
}
