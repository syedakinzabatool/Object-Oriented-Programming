#include <iostream>
using namespace std;
class Point
{
	private:
   	     float m_dX, m_dY, m_dZ; 
	public:
   	     Point(float dX, float dY, float dZ)
		{  
               m_dX = dX;
         	      m_dY = dY; 
               m_dZ = dZ;    
          } 
  friend float operator+ ( float var1, Point &p); 
};
float operator+(float var1, Point &p)
{
	return ( var1 + p.m_dX);
}
int main (void)
{
	float variable = 5.6;
	Point cPoint ( 2, 9.8, 3.3 );
	float returnVar;
	returnVar = variable + cPoint; //Calling Frnd Function
	cout << returnVar; // 7.6 
	return 0;
}
