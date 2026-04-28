#include <iostream>
using namespace std;
class Roll{

public:
static int r;

Roll(){   
}
void display()
{   r++;
    cout<<"The roll no. of Ali is:"<<r<<endl;
    cout<<"The roll no. of Ahmad is:"<<r<<endl;
    cout<<"The roll no. of Aliha is:"<<r<<endl;
};
};
int Roll::r=0;
int main(){
Roll a,b,c;
c.display();
}