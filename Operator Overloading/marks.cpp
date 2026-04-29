#include<iostream>
using namespace std;

class Marks{
    private:
       int ex_marks;
       int in_marks;

    public:
       Marks(){
        ex_marks=0;
        in_marks=0;
       }
        Marks(int m,int n){
        ex_marks=m;
        in_marks=n;
       }

       void display(){
        cout<<"External marks="<<ex_marks<<endl;
        cout<<"Internal marks="<<in_marks<<endl;
       }

       Marks operator +(Marks m){
          Marks temp;
          temp.in_marks = m.in_marks + in_marks;
          temp.ex_marks = m.ex_marks + ex_marks;
          *this;
       };

};
int main(){
    Marks obj1(10,20),obj2(30,40);
    Marks obj3;
    obj3 = obj1+obj2;
    obj3.display();
    return 0;
}