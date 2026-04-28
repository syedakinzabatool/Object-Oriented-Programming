/*ENCAPSULATION
==>Binding of methods & variables together into a single unit->class
It also leads to the data abstraction{Hiding} Bcz of this class is also known as Abstract Data Type(ADT)*/
#include <iostream>
using namespace std;
/*Basically in this data is private means the val. of any var. so, if we have to access it then we have to make some funstions to access it undirectly.*/
class ABC{
 int x;
 public:
 void set(int n){
    x=n;
 }
 int get (){
    return x;
 }
};
int main(){
  ABC obj_1;
  obj_1.set(3);
  cout<<obj_1.get()<<endl;
}