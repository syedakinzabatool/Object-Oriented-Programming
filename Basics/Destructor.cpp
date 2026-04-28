/*Create a class Student with attributes name and age.
Define a constructor that initializes these attributes.
Define a destructor that outputs a message when an object is destroyed*/
#include <iostream>
#include <cstring>
using namespace std;
class Student{
    private:
    char name[100];
    int age;
    public:
    Student(const char *n, int a){//can also declare 'n' as we did here ,btw the other way is char n[]
    strcpy(name, n);
    age=a;
}
void dispaly(){
    cout<<"Name: "<<name<<"\n";
    cout<<"Age: "<<age<<"\n";
}
~Student(){
cout<<"Destructor is called.";
}
};
int main(){
    Student s("John", 20);
    s.dispaly();
    return 0;
}