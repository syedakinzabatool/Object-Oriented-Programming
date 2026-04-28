#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
};
int main(){
    Complex *ptr = new  Complex;
    /*We write the class name after the new keyword
     because we want to dynamically allocate memory for an object of that class type.
In your example, Complex is the class name, and new Complex is used to create a new object of type Complex on the heap.
 This is called dynamic memory allocation.*/
    ptr-> setData(1, 54); 
    ptr-> getData(); 
    delete ptr;
    return 0;
}
