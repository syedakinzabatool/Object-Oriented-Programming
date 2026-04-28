#include <iostream>
using namespace std;
//basically these r the type of member functions that could be call without any object. 
//these r not created with every obj. in fact  when the code is executed these got stored in memory once
//independant of any object and stored in the memory as a single variable irrespective of any object.And any of  all objects can access it.
/* */
class Yahoo
{
    private:
    static int n;
    public:
//    static  int n;
    Yahoo(){
        n++;
    }
    static void show()
    {
        cout<<"You have created "<<n<<" objects so far.\n";

    }
};
int Yahoo::n=0;
int main(){
    Yahoo::show();
    Yahoo x;
    x.show();
    Yahoo z;
    z.show();
}