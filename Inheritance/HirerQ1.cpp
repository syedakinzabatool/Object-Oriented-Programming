//Hierarchical Inheritance
//Question 1
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

class Book : public Publication
{
private:
    int page_count;

public:
    void get_data()
    {
        Publication::get_data();
        cout << "Enter page count: ";
        cin >> page_count;
    }

    void put_data()
    {
        Publication::put_data();
        cout << "Page count: " << page_count << endl;
    }
};

class Tape : public Publication
{
private:
    float playing_time;

public:
    void get_data()
    {
        Publication::get_data();
        cout << "Enter playing time (minutes): ";
        cin >> playing_time;
    }

    void put_data()
    {
        Publication::put_data();
        cout << "Playing time: " << playing_time << " minutes" << endl;
    }
};

int main()
{
    Book book_1;
    cout << "Enter data for book:\n";
    book_1.get_data();
    cout << "Book data:\n";
    book_1.put_data();

    Tape tape_1;
    cout << "Enter data for tape:\n";
    tape_1.get_data();
    cout << "Tape data:\n";
    tape_1.put_data();

    return 0;
}

//Members declared as protected within a class are accessible within the class and by derived classes. In this code, title and price are declared as protected in the Publication class. Therefore, they are accessible within the Publication class itself, as well as within the derived classes (Book and Tape). This allows derived classes to directly access and modify these members.