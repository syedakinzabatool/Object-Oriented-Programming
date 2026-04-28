#include<iostream>
using namespace std;

class cars{
   private:
     int wheels;
     int doors;
     public:
       int carspeed;
       int speed;
    
    cars(){
        wheels=4;
        doors=2;
        carspeed=0;
    }

    void display(){
        cout<<"Wheels= "<<wheels<<endl;
        cout<<"Doors = "<<doors<<endl;
        cout<<"Car Speed= "<<speed<<endl;
        
    }

   void setdata(int s){
       speed=s;
   }

   void decrease(int a){
    speed=speed-a;
    cout<<"Decreased speed is:"<<a<<endl; 
   }

};

int main(){
   cars farari;
   farari.setdata(100);
   farari.display();
   farari.decrease(10);
   farari.display();
   
   cout<<endl;
   cars hino;
   hino.setdata(90);
    hino.display();
   hino.decrease(20);
   hino.display();



    return 0;
}