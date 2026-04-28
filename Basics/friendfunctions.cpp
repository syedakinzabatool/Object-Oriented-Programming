#include <iostream>
using namespace std;
class B;
class A{
    private:
    int a;
    public:
    A(){
        a=10;
    }
    friend void show(A,B);
};
class B{
    private:
    int b;
    public:
    B(){
        b=20;
    }
    friend void show(A,B);
};
void show(A x,B y){
    int r;
    r=x.a+y.b;
 cout<<"The value of class A object is:"<<x.a<<"\n";  
 cout<<"The value of class B object is:"<<y.b<<"\n";
 cout<<"The sum of both values is :"<<r<<endl;    
}
int main(){
    A obj1;
    B obj2;
    show(obj1,obj2);//we r not using any object bcz it's a frnd function.
    return 0;
}