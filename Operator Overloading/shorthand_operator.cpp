#include <iostream>
using namespace std;
//Short Hand operators are "+=" & "-="....Known as short hands bcz they are used as a shortcut.
class Op{
    public:
    int marks;
    Op(int m)
    {
        marks=m;
        }
        void display()
        {
            cout<<"Marks are "<<marks<<endl;
            }
    int operator+= (int ma){
        marks+=ma;
        return marks;
    }
};
int main()
{
    Op o1(10);
    o1+=20;
    o1.display();
}