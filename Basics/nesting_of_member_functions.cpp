
// Nesting of member functions

#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;
    void chk_bin(void); // Declaration of a private member function

public:
    void read(void); // Declaration of a public member function
    void ones_compliment(void); // Declaration of a public member function
    void display(void); // Declaration of a public member function
};

// Definition of member function 'read'
void binary::read(void)
{
    cout << "Enter a binary number" << endl; // Prompting the user to enter a binary number
    cin >> s; // Reading the binary number from the user and storing it in the private member 's'
}

// Definition of private member function 'chk_bin'
void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1') // Checking if each character in 's' is either '0' or '1'
        {
            cout << "Incorrect binary format" << endl; // If any character other than '0' or '1' is found, display error message
            exit(0); // Exit the program
        }
    }
}

// Definition of public member function 'ones_compliment'
void binary::ones_compliment(void)
{
    chk_bin(); // Calling the private member function 'chk_bin' to check if the binary number is valid
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) =='0')
        {
            s.at(i) ='1'; // If the current bit is '0', replace it with '1'
        }
        else
        {
            s.at(i) == '0'; // If the current bit is '1', replace it with '0'
        }
    }
}

// Definition of public member function 'display'
void binary::display(void)
{
    cout<<"Displaying your binary number"<<endl; // Displaying a message indicating that the binary number is being displayed
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i); // Displaying each bit of the binary number
    }
    cout<<endl; // Output a newline character after displaying the binary number
}

// Main function
int main()
{
    binary b; // Creating an object 'b' of class 'binary'
    b.read(); // Calling the 'read' member function to read a binary number from the user
    // b.chk_bin(); // This line is commented out because 'chk_bin' is already called inside 'ones_compliment'
    b.display(); // Displaying the original binary number entered by the user
    b.ones_compliment(); // Calling the 'ones_compliment' member function to get the one's complement of the binary number
    b.display(); // Displaying the one's complement of the binary number

    return 0; // Exiting the program with status code 0 (indicating successful execution)
}
