/*Base class has multiple parent classes having a common ancesstor class.
       Class F
       /      \
      /        \
  Class D        Class E
    |             |
  Class B        Class C
   \             /
    \           /
       Class A*/

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
    child_2(){
     cout<<"Child_2 Class"<<endl;
    }
};
class grand_child:public child_1,public  child_2{
    public:
    grand_child(){
    cout <<"Grand_child class"<<endl;
}
};
int main(){
    grand_child gc; 
    return 0;
}