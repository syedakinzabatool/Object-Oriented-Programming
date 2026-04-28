#include <iostream>
using namespace std;
class Addition{
    private:
    int a,b;
    public:
    int real,imaginary;
    Addition(){}
    void get_values(int i,int j){
        a=i;
        b=j;
        }
    void sum(Addition &r,Addition &i){
   
       real=r.a+i.a;
       imaginary=r.b+i.b;
    }
    void display(){
        cout<<"The real part is:"<<real<<"\nThe imaginary part is:"<<imaginary<<endl;
    }
};
int main(){
    Addition obj1,obj2,obj3;
    obj1.get_values(5,8);
    obj2.get_values(3,2);
    obj3.sum(obj1,obj2);
    obj3.display();
    //a.sum()
}