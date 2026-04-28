/*In this we have 1 parent class and multiple child classes.*/
#include <iostream>

using namespace std;
class parent{
public:
     parent(){
        cout<<"Parent class"<<endl;
     }
};
class child_1:public parent{
public:
    child_1(){
     cout<<"Child_1 Class"<<endl;
    }
};
class child_2:public parent{
public:
    child_2(){}
    void display(){
     cout<<"Child_2 Class"<<endl;
    }
};
int main(){
   // child_1 c;
    child_2 ch;
    ch.display();
    return 0;
}