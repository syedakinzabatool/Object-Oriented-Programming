/*Basically in inheritance we inheret (give) properties from parent class to the child class.
we don't hav to write again and again the attributes of the child class.We can write it in the parent class once and can use in the child classes as we needed.*/
/*Modes of inheritance:
i- Public:If data and functions are public than they could be use in anywhere in the code.
ii-Protected:Accessible in Own class, Parent class and Derived(child) class.
iii-Private:This would keep the data private,which is by default private.Basically, accessible in only own class.
*/
#include<iostream>
using namespace std;
class parent{
public:
  int x;
protected:
  int y;
private:
  int z;
};
class child_1:public parent{
 //x will be public.
 //y will be protected.
 //z will not be accessible.
};
class child_2:protected parent{
 //x will remain protected.
 //y will be protected.
 //z will be inaccessible.
};
class child_3:private parent{
 //x will be private.
 //y will be private.
 //z will be inaccessible.
};
int main(){
    parent p;
    p.x; 
    return 0;
}
