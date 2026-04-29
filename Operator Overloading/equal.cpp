#include <iostream>
using namespace std;
class Date
{
private:
    int month;
    int year;

public:
    Date(int m, int y)
    {
        month = m;
        year = y;
    }
    Date operator=(Date &d)
    {
        month = d.month;
        year = d.year;

        return *this;
    }
    void display()
    {
        cout << "Date: " << month << "/" << year << endl;
    }
};
int main()
{
    Date s1(4, 2024);
    Date s2(7, 2023);
    cout << "Original dates:" << endl;
    s1.display();
    s2.display();
    s1 = s2; // s1 is calling object
    /*The assignment operator is used to assign the values of s2 to s1,
    effectively copying the date from s2 to s1.*/
    cout << "Dates After Assignment: " << endl;
    s1.display();
    s2.display();
    return 0;
}
