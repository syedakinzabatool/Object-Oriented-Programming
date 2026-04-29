#include <iostream>
using namespace std;
class Marks{
    public:
    int m1,m2;
    Marks(){}
    Marks(int a,int b){
        m1=a;
        m2=b;
    }
    void display(){
        cout<<"After total the sum is:\n"<<m1<<"\n"<<m2<<endl;
    }
    //Basically it's like to overload operator using friend function
    //We are declaring in the class the operator overloaded function
    //It's same as we initialise functions outside the class.
    Marks operator-(Marks &m){
 };
 //1st Marks here represents the data type of the function which is the class name showing that the function will return the object. 
 Marks Marks ::operator-(Marks &m){
        Marks temp;
        temp.m1=m1-m.m1;
        temp.m2=m2-m.m2;
        return temp;
}};
int main(){
    Marks m(10,20),m0(60,5);
    Marks m4=m-m0;
    m4.display();
    return 0; 
} 