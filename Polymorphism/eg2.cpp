#include <iostream>
using namespace std;
class base
{
public:
    virtual void show()
    {
        cout << "base\n";
    }
};
class d1 : public base
{
public:
    void show()
    {
        cout << "derived_1\n";
    }
};
class d2 : public base
{
public:
    void show()
    {
        cout << "derived_2\n";
    }
};
int main()
{
     int n;
    cout << "Enter a number: ";
    cin >> n;
    base *pb;
    d1 od1;
    d2 od2;
   
    if (n % 2 == 0)
        pb = &od1;
    else
        pb = &od2;
    pb->show(); 
    delete pb;//can also delete
}
