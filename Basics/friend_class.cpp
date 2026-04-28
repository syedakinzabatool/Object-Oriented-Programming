#include <iostream>
using namespace std;
class B;
class A{
    private:
    int a,b;
    public:
    A(){
        a=10;
        b=15;
    }
    friend class B;//this make B class frnd of A and give access to B class ant to  print by calling members of A from B class
};
class B{
public:
 void showA(A obj)//can use & op. or not 
 {
 cout<<"The value of b is:"<<obj.b<<"\n";  
 }
 
//  void showB(A obj)
//  {
//     cout<<"The value of b is:"<<obj.b<<"\n";
//  }
};
int main(){
    A obj1;
    B obj2;
    obj2.showA(obj1); //Nothing new :Just we've to pass the object of first class whom we make our frnd.
    // y.showB(x);
    return 0;
}/*// C++ Program to demonstrate the
// functioning of a friend class
#include <iostream>
using namespace std;

class GFG {
private:
	int private_variable;

protected:
	int protected_variable;

public:
	GFG()
	{
		private_variable = 10;
		protected_variable = 99;
	}

	// friend class declaration
	friend class F;
};

// Here, class F is declared as a
// friend inside class GFG. Therefore,
// F is a friend of class GFG. Class F
// can access the private members of
// class GFG.
class F {
public:
	void display(GFG& t)
	{
		cout << "The value of Private Variable = "
			<< t.private_variable << endl;
		cout << "The value of Protected Variable = "
			<< t.protected_variable;
	}
};

// Driver code
int main()
{
	GFG g;
	F fri;
	fri.display(g);
	return 0;
}
*/