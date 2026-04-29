#include <iostream>
using namespace std;

class Op{
    public:
    int marks;
    Op(int m)
    {
        marks=m;
        }
        void display()
        {
            cout<<"Marks are: "<<marks<<endl;
            }
/*We don't pass any argument when we use  ++ ,--  op. to overload bcz they both are unary operators and don't need any other operand as an argument.....and the current object will be passed to it implicitely(automatically).*/
    int operator--(int){
        marks--;
        return marks;
    }
};
int main()
{
    Op o1(10);
    o1--;
    o1.display();
}