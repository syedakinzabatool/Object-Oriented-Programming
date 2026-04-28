#include <iostream>
using namespace std;
class parent{
public:
     parent(){
        cout<<"Parent class"<<endl;
     }
    void  name(){
        cout<<"my name is suzzii" <<endl;
     }
};
class child:public parent{
public:
    child(){
     cout<<"Child Class"<<endl;

    }
   child age(){
        cout<<"my age is of 2 months."<<endl;
     }
};
int main(){
    child c;
    c.name();
    c.age();
    return 0;
}