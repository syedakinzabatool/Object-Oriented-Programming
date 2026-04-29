#include<iostream>
using namespace std;

class Marks{
    private:
        int mark;

    public:

       Marks(int n){
          mark=n;
       }
    
       void display(){
        cout<<"Your marks is: "<<mark<<endl;
       }

       void operator += (int n){
        mark+=n;
       }

       friend int operator -= (Marks &m,int n);

};

int operator -= (Marks &m,int n){
    m.mark-=n;
}

int main(){
    Marks obj1(45);

    obj1.display();

    obj1.operator+=(5);
    obj1.display();

    
    Marks obj2(50);
    obj2-=10;
    obj2.display();



    return 0;
}