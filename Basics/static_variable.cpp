#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
    static int r;//the variable to be static ,initialised outside the class mean it's value is setted outside the class.
    int roll_no,marks;
    char name[50];
public:
 Student(){
    r++;
    roll_no=r;
 }
Student input(){
    cout<<"Enter your name:";
    cin>>name;
    cout<<"Enter your marks:";
    cin>>marks;
}
Student show(){
    cout<<"Roll No is:"<<roll_no<<endl;
    cout<<"Name is:"<<name<<"\n";
    cout<<"Marks are:"<<marks<<endl;
}
};
int Student::r =0;
int main(){
Student s1,s2,s3;
s1.input();
cout<<"The data of 1st student is:\n";
s1.show();

s2.input();
cout<<"The data of 2nd student is:\n";
s2.show();

s3.input();
cout<<"The data of 3rd student is:\n";
s3.show();
return 0;
}