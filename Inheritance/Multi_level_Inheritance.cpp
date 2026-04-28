#include <iostream>
using namespace std;
class parent{
public:
     parent(){
        cout<<"Parent class"<<endl;
     }
};
class child:public parent{
public:
    child(){
     cout<<"Child Class"<<endl;
    }
};
class grand_child:public child{
    public:
    grand_child(){
    cout <<"Grand_child class"<<endl;
}
};
int main(){
    grand_child gc; 
    return 0;
}