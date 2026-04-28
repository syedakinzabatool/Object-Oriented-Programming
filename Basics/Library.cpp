/*Write a program for a library where a class `Book` represents each book.
 Implement a constant member function named `isAvailable()` to check if the book is available for borrowing.*/
#include <iostream>
#include <cstring>
using namespace std;
class Book
{
private:
    char name[100];

public:
    Book()
    {
        strcpy(name, " ");
    }
    Book(const char n[100])
    {
        strcpy(name, n);
    }
    // to check:
    void isavailable(const char n[100])
    {
        string choice;
        cout << "Asking to the attendant that it's available or not.\n Choose blw A/U to tell that it's available or not." << endl;
        cin >> choice;
        if (choice == "A")
        {
            cout << "Yupp! it's available.";
        }
        else if (choice == "NA")
        {
            cout << "Opps! it's not available.";
        }
        else
        {
            cout << "Invalid.";
        }
    }
};
int main()
{
    Book obj;
    obj.isavailable("Alchemist");
}