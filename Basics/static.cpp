#include <iostream>
using namespace std;
class Static{
    private:
    static int count;
    public:
    Static(){
        ++count;
    }
    void print(){
        cout<<"The no. of objects created are:"<<count<<"\n";
    }
};
int Static:: count=0;
int main(){
    Static s1,s2,s3;
    s3.print();
    return 0;
}