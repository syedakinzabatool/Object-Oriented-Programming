//Multiple Inheritance
#include <iostream>
using namespace std;
class Student
{
private:
    char name[20];
    int mo;

public:
    void getStudent()
    {
        cout << "Enter your name : " << endl;
        cin >> name;
        cout << "Enter your roll number : " << endl;
        cin >> mo;
    }
    void displayStudent()
    {
        cout << "Name of the Student : " << name << endl;
        cout << "Roll Number of the Student : " << mo << endl;
    }
};

class address
{
private:
    char city[20];

public:
    void getAddress()
    {
        cout << "Enter city : ";
        cin >> city;
    }
    void displayAddress()
    {
        cout << "City : " << city << endl;
    }
};

class Account : public Student, public address
{
private:
    int tfee, submit, balance;

public:
    void getAccount()
    {
        getStudent();
        getAddress();
        cout<<"Enter total fee : ";
        cin>>tfee;
        cout<<"Enter submit fee : ";
        cin>>submit;
    }
    void displayAccount()
    {
        displayStudent();
        displayAddress();
        cout<<"Total fee :" << tfee;
        cout<<"Submit fee :" << submit;
        balance = tfee - submit;
        cout<<"Balance :" << balance;
    }
};

int main()
{
    
}