#include <iostream>
using namespace std;
class display;
class check{
    private:
    char letter;
    public:
    check(){
    char letter='0';
    }
    check set(char x){
         letter=x;
    }
    void check_vowel(char x){
       
     if(x=='a'||x=='e'|| x=='i'||x=='o'||x=='u'){
        cout<<x<<"is a vowel."<<endl;
     }
     else{
        cout<<"Not a vowel.\n";
     }
    }
     friend class display;
};
    class display{
        public:
        void show(check obj2){
            cout<<"The letter was:"<<obj2.letter<<" "<<char('\3')<<endl;
        }
    };
int main(){
    char a;
    cout<<"Enter a letter to check:";
    cin>>a;
    check obj1;
    obj1.set(a);
    display obj2;
   
    obj1.check_vowel(a);
    obj2.show(obj1);
    return 0;
}