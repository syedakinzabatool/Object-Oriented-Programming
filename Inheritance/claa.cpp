#include <iostream>
using namespace std;
class base{
    int num1;
    public:
    int num2;
    void getdata(){
        num1=10;
        num2=20;
    }
    void display(){
        cout<<num1<<endl;
        cout<<num2<<endl;
    }
};
class derived:public base{
    int num3;
    public:
    void get(){
        num2=30; 
        num3=40;
    }
    void dispaly(){
        cout<<num2<<endl;
        cout<<num3<<endl;
    }
};
int main(){
    derived d;
    d.get();
    d.dispaly();

}