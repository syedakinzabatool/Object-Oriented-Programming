#include <iostream>
using namespace std;
class B {
   public:
      virtual void display() = 0; // Pure Virtual Function
};

class D:public B {
   public:
      void display() {
         cout << "Virtual Function in Derived class\n";
      }
};
int main() {
   B *b;
   D dobj;
   b = &dobj;
   b->display();
}
