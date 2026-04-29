#include <iostream>
using namespace std;
class Line
{
protected:
    int x,y;
public:
    Line(int a,int b)
    {
        x=a;
        y=b;
    }
    void draw(void)
    {
        cout << "Line Drawing code\n ";
    }
    void GetArea (void)
    {
        cout << "Line Area: a+b\n";
    }
};
class Circle: public Line
{
protected:
    int radius;
public:
    Circle(int a,int b, int c) : Line (a, b)
    {
        radius = c;
    }
    void draw(void)
    {
	 cout << "Circle drawing code \n";
    }
    void GetArea (void)
    {
	cout << "Circle area code a+b\n";
    }
};
class Rectangle: public Line
{
protected:
	int Width, Height;
public:
Rectangle(int a,int b, int c, int d) : Line (a, b )
    {
	Width = c;
	Height = d;
    }
    void draw(void)
    {
         cout << "Rectangle drawing code \n";
        
    }
    void GetArea (void)
    {
	cout << "Rectangle area code\n";
     cout<<"The area is:"<<((Width*Height))<<"\n";
    }
};
int main ( void )
{
	Circle c1 (3, 4, 5 );
	Rectangle r1 ( 3, 4, 10 , 20 );

	c1.draw ();
	c1.GetArea ();

	r1.draw ();
	r1.GetArea ();
	return 0;
}

