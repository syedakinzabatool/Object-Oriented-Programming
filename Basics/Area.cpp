#include <iostream>
using namespace std;
class Area{
    private:
    double width,length;
    public:
    Area(){}
    //using the concept of initialization list.
    Area(double i,double j):width(i),length(j){}
    double getArea(){
        return width*length;
    }
};
int main(){
    Area a(20,13);
    cout<<"The area of rectangle is:"<<a.getArea()<<"\n";
}