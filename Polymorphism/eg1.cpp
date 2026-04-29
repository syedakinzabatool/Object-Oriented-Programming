#include <iostream>
using namespace std;
class base {
public:
   virtual void show() {
      cout <<"base\n";
   }
};
class derived : public base {
public:
   void show() {
      cout <<"derived\n";
   }
};
int main() {
   // base b1;
   // b1.show(); 
    derived d1;
   // d1.show(); 

   base *pb = &d1;
   pb->show(); 

   // pb = &d1;
   // pb->show(); 
}
/*
pb = &d1;
pb->show();
pb = &d1;
pb->show(); 
Is that allowed to put the address of the object of derived class into the pointer of a base class??
Yes, it is allowed to put the address of an object of a derived class into a pointer of a base class.
This is a fundamental concept in object-oriented programming, known as polymorphism.

==>In C++, when you have a base class B and a derived class D that inherits from B, a pointer to B can point to an object of type D.
==>This is because D is a subclass of B, and therefore, an object of type D is also an object of type B.
Explanation by Above Example:
In your example, pb is a pointer to the base class, and d1 is an object of the derived class.
By assigning the address of d1 to pb, you are creating a polymorphic relationship between the two.
->When you call pb->show(), the compiler will use the virtual function table (vtable) of the object being pointed to,
which is d1, to determine which implementation of the show() function to call. 
->If show() is a virtual function in the base class and overridden in the derived class, the derived class's implementation will be
 called. If show() is not a virtual function, the base class's implementation will be called.

This is a powerful feature of object-oriented programming, as it allows you to write code that can work 
with objects of different classes, without knowing their specific type at compile-time.*/