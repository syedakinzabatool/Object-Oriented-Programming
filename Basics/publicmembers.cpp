#include<iostream>
using namespace std;
class books{
    private:  //private members are only accessible in class.
    int price;
    float pages;
    string name;

    public:
    void input(){
    cout<<"Enter the name of the book:\n";
    cin>>name;
    cout<<"Enter the no. of pages of the book:\n";
    cin>>pages;
    cout<<"Enter the price of the book:\n";
    cin>>price;
}
void show(){
    cout<<"Book name is:"<<name<<endl;
    cout<<"Book pages no. are:"<<pages<<endl;
    cout<<"Book price is:"<<price<<endl;
}
void set(int pr,int p,string n){
    name=n;
    price=pr;
    pages=p;
}
int compare(){
    return pages;
}
};
int main(){
    books obj1,obj2;
    obj1.input();
    obj1.show();
    obj2.set(599.5,293,"The Alchemist");
    obj2.show();

    if(obj1.compare()>obj2.compare()){
    obj1.show();
}
else{
   obj2.show();
}
return 0;
}