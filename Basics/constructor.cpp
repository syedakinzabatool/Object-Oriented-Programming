#include <iostream>
using namespace std;
class value{
    private:
    int x,y,z;
    public:
    value(){
        x=9;
        y=6;
        z=3;
    }
    value display(){
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;
    }
};
int main(){
value obj;
obj.display();
}