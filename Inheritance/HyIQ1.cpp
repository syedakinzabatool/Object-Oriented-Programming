//Hierarchical Inheritance
//Question 4


#include <iostream>
using namespace std;

class Publication
{
protected:
    char title[20];
    float price;

public:
    void get_data()
    {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter price: ";
        cin >> price;
    }

    void put_data()
    {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

class Date
{
private:
    int month;
    int day;
    int year;

public:
    void get_data()
    {
        cout << "Enter publication date (mm dd yyyy): ";
        cin >> month >> day >> year;
    }

    void put_data()
    {
        cout << "Publication date: " << month << "/" << day << "/" << year << endl;
    }
};

class publication_2 : public Publication
{
protected:
    Date date;

public:
    void get_data()
    {
        Publication::get_data();
        date.get_data();
    }

    void put_data()
    {
        Publication::put_data();
        date.put_data();
    }
};

class Book : public publication_2
{
private:
    int pageCount;

public:
    void get_data()
    {
        publication_2::get_data();
        cout << "Enter page count: ";
        cin >> pageCount;
    }

    void put_data()
    {
        publication_2::put_data();
        cout << "Page count: " << pageCount << endl;
    }
};

class Tape : public publication_2
{
private:
    float playing_time;

public:
    void get_data()
    {
        publication_2::get_data();
        cout << "Enter playing time (minutes): ";
        cin >> playing_time;
    }

    void put_data()
    {
        publication_2::put_data();
        cout << "Playing time: " << playing_time << " minutes" << endl;
    }
};

int main()
{
    Book book;
    cout << "Enter data for book:\n";
    book.get_data();
    cout << "Book data:\n";
    book.put_data();

    Tape tape;
    cout << "Enter data for tape:\n";
    tape.get_data();
    cout << "Tape data:\n";
    tape.put_data();

    return 0;
}

// Protected Inheritance:
// In the publication_2, Book, and Tape classes, inheritance is protected, meaning the protected members of the base class Publication are accessible as protected in the derived classes. This allows access to these members within the derived classes and any classes derived from them.
// The Publication class's protected members (title and price) are accessible within publication_2, Book, and Tape.
// Private Inheritance:
// There's no instance of private inheritance in this code. Private inheritance would restrict access to the base class's members to only the derived class itself, which isn't employed here.