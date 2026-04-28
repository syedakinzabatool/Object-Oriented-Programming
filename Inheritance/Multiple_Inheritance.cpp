#include <iostream>
using namespace std;
class parent_1
{
public:
    parent_1()
    {
        cout << "Parent_1 class" << endl;
    }
};
class parent_2
{
protected:
    parent_2()
    {
        cout << "Parent_2 class" << endl;
    }
};
class child : public parent_1, protected parent_2
{
public:
    child()
    {
        cout << "Child Class" << endl;
    }
};
class grand_child : public child
{
public:
    grand_child()
    {
        cout << "Grand_child class" << endl;
    }
};
int main()
{
    child c;
    // garnd_child will call the child class which contain both parent classes attributes.
    grand_child b;
    parent_1 d;
    return 0;
}