#include <iostream>
using namespace std;
class Complex
{
private:
int real;
int imag;
public:
void Read()
{
cout<<"Enter real and imaginary number respectively:"<<endl;
cin>>real>>imag;
}
Complex Add (Complex comp2)
{
Complex temp;
temp.real=real+comp2.real;
temp.imag=imag+comp2.imag;
return temp;//Also use *this....this returns the current object
}
void Display()
{
cout<<"Sum="<<real<<"+"<<imag<<"i";
}
};
int main()
{
Complex c1,c2,c3;
c1.Read();
cout<<"Enter no. for 2nd object:";
c2.Read();
c3=c1.Add(c2);
c3. Display();
return 0;
}

