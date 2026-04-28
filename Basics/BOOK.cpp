/*Create a class Book with attributes for title, author, and isbn.
Instantiate objects of the Book class and initialize their attributes.
Write a member function in the Book class to display the book details.*/
#include <iostream>
#include <cstring>
class Book;
using namespace std;
class Book
{
public:
    char title[50];
    char author[100];
    int isbn;
    Book() {}
    Book(const char t[], const char a[], int i)
    {
        strcpy(author, a);
        strcpy(title, t);
        isbn = i;
    }
    friend void display(Book);
};
void display(Book b)
{
    cout << "Title: " << b.title << endl;
    cout << "Author: " << b.author << endl;
    cout << "ISBN: " << b.isbn << endl;
}
int main()
{
    Book a("Forty rules of Love","Elif Shafak",28913);
    display(a);
    return 0;
}