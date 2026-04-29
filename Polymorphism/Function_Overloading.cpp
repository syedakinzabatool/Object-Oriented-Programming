#include <iostream>
using namespace std;
class Book
{
    public:
    int var(int x){
        int y=x;
        return y;
    }
    char var(char x){
       char y=x;
        return y;
    }

};
int main(){
    Book b;
    // cout<<"The Int type function is:"<<b.var(6)<<endl;
    cout<<"The Char type function is:"<<b.var('k')<<endl;
    /*By checking the data type of the parameter it'll call the respective function.*/

}