/*Function Overloading*/
#include <iostream>
using namespace std;
class sum{
public:
    void add(int x,int y){
    int sum=x+y;
    cout<<sum<<endl;
}
    void add(int x,int y , int z){
    int sum=x+y+z;
    cout<<sum<<endl;
}
  void add(float x,float y ){
    float sum=x+y;
    cout<<sum<<endl;
}};
/*Operator Overloading*/
class complex{
    public:
    int real;
    int img;

complex(int x,int y){
  real=x;
  img=y;
}
complex operator + (complex &c){
    complex ans(0,0);
    ans.real=real + c.real;
    ans.img=img + c.img;
    return ans;
}};

int main(){
  sum s;
  s.add(2,3);
  s.add(2,3,5);
  s.add(float(2.4),float(7.1)); 
  complex c_1(1,2);
  complex c_2(3,5); 
  //c_1+c_2
  complex c_3=c_1+c_3;
cout<<c_3.real<<"i"<<c_3.img<<endl;
 return 0;
}