#include<iostream>
using namespace std;

class NumberConverter{
    public:
       
      void decimal(int val){
        int binary[32];
            int index = 0;
    while (val > 0) {
        binary[index++] = val % 2; 
        val /= 2;
    }
     
     cout << "Binary Representation is: ";
    for (int i = index - 1; i >= 0; --i) {
        cout << binary[i];
    }
    cout<<endl;
       };
       
    void decimal(int value,int base){
        int octal[32];
            int index = 0;
    while (value > 0) {
        octal[index++] = value % 8;
        value /= 8;
    }
     
     cout << "Octal Representation is: ";
    for (int i = index - 1; i >= 0; --i) {
        cout << octal[i];
    }
    cout<<endl;
       };
   

     void decimal(int value,double base){
        int hexa[32];
            int index = 0;
    while (value > 0) {
        hexa[index++] = value % 16;
        value /= 16;
    }
     
     cout << "Hexa Decimal Representation is: ";
    for (int i = index - 1; i >= 0; --i) {
        cout << hexa[i];
    }
    cout<<endl;
       };

};



int main(){

    NumberConverter obj1;
    obj1.decimal(16);

    NumberConverter obj2;
    obj2.decimal(40,8);

    NumberConverter obj3;
    obj3.decimal(50,16.0);


    return 0;
}