#include <iostream>
using namespace std;
class Fruit{
  public:
  string name;
  string color;
  string season;

};
  /*"CONSTRUCTORS" are also called getter or setter. to get valve and to set value*/
/*In default constructors we only use class name ,and call it directly from the main by just making an object.*/
class Rectangle{
public:
   int length;
   int  width;
   Rectangle(){ //Default (built in) constructor - No arguments(parameters) are passed.
    length=7;
    width=2;
   }
    Rectangle(int x,int y){ //Parameterised constructor - Arguments(parameters) are passed.
    length=x;
    width=y;
   }

   Rectangle(Rectangle &r  ){ //Copy Constructor - Used when we initialise an object by another existing object.
      length=r.length;
      width=r.width;
   }


/*DESTRUCTOR:
==>It's a Function ; Used when we have to delete an object
==>Can't pass any parameter.
==> And it's name would be written by using the operator ~Class Name.
When it is called we could write any message
*/
~Rectangle(){ //Destructor
  cout <<"Here I use a destructor."<<endl;}
};
int main(){

 Fruit pear; //Object
 /*For the properties of class the objects (attributes) are written as with the name of the class
 and the properties of the class.*/
 pear.name="Pear";
 pear.color="Green";
 pear.season="Summer";
 cout<<pear.name<<"-"<<pear.season<<"-"<<pear.color<<"\n";


  Fruit *lemon= new Fruit();
 lemon-> name="lemon";
 lemon-> color="Yellow";
 lemon-> season="Summers";
 cout<<lemon->name<<"-"<<lemon->season<<"-"<<lemon->color<<"\n";
 /*Default Constructor:
==> Could give a value to  be used.
Basic way to initialize an object of the class.
Rectangle r_1;
cout<<r_1.length<<" "<<r_1.width<<endl;
*/
//Destructor:
Rectangle* r_1 =new Rectangle();
cout<<r_1->length<<" "<<r_1->width<<endl;
delete r_1; 

//Parameterised Constructor:
/*
==>Used to pass the values ,once we made a template in a class then we can call it again and agian by passing new values.*/ 

Rectangle r_2(11 ,9);
cout<<r_2.length<<" "<<r_2.width<<endl;

/*Copy Constructor:
==>Used when we want to copy an object with the same values etc.*/
//can be by 2 ways ==>by using operator ==>(2)by brackets.
//Rectangle r_3=r_2; //by using operator 
Rectangle r_3(r_2);
cout<<r_3.length<<" " <<r_3.width<<endl;

 }
