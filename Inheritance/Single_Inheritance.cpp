#include <iostream>
using namespace std;
class parent{ //base class
public:
     parent(){
        cout<<"Parent class"<<endl;
     }
};
class child:public parent{ //derived class
public:
    child(){
     cout<<"Child Class"<<endl;
    }
};
int main(){
    child c;
    return 0;
}