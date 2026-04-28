/*Create a class Rectangle with attributes length and width.
Write a friend function to calculate and return the area of the rectangle.
*/
#include <iostream>
using namespace std;
class Rectangle;
class Rectangle{
    public:
    double length,breadth;
    //public:
    Rectangle(int i,int j):length(i),breadth(j){}; 
    friend int area(Rectangle);
};
int area(Rectangle a){
    return a.length*a.breadth;
}
int main(){
    Rectangle ar(23.94,89.13);
    cout<<"The area of the rectangle is: "<<area(ar)<<"\n";
    return 0;
}
