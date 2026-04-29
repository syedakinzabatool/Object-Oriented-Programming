#include <iostream>
using namespace std;
class Book
{
public:
    string name;
    int isbn;
    Book()
    {
        cout << "Book constructor" << endl;
    }
    Book(string name)
    {
        cout<<"Object 1\n";
        string *n =new  string (name);
         cout << "Name is:" << *n << "\n";
         delete n;
    }
    Book(int isbn, string name)
    {
        cout<<"Object 2\n";
        this->name = name;
        this->isbn = isbn;
        cout << "Name is:" << name << "\n";
        cout << "isbn is:" << isbn;
    }
};
int main()
{
    Book b1;
    Book b2("C++");
    Book b3(123, "C++");
}
/*In constructor overloading,
==>Firstly the default const. will be called and then
==> if we have more than one parameterised const. then we can't call the both by the same obj. For this we've to make and call by a new object.*/