#include <iostream>
using namespace std;
class Example
{
private:
    int a;

public:
    Example()
    {
        a = 0;
    }
    // Default constructor initializes 'a' to 0
    Example(int val)
    {
        val = a;
    }

    // Function to add values of two objects and return the result as a new Example object
    Example add(const Example &obj) const
    {
        Example result;
        result.a = this->a + obj.a;
        return result;
    }

    // Function to display the value of 'a'
    void display() const
    {
        cout << "Value of 'a': " << a << endl;
    }
};

int main()
{
    Example E1(10); // Creating Example object E1 with value 10
    Example E2(20); // Creating Example object E2 with value 20

    // Calling add function on object E1 and passing E2 as argument
    Example E3 = E1.add(E2); // E3 stores the result of adding E1 and E2

    // Displaying the values of E1, E2, and E3
    cout << "Value of E1:" << endl;
    E1.display();
    cout << "Value of E2:" << endl;
    E2.display();
    cout << "Value of E3:" << endl;
    E3.display();

    return 0;
}
