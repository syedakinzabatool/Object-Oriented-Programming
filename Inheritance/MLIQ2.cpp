//Multiple Inheritance
//Question 2

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

class Sales
{
protected:
    float sales[3];

public:
    void get_data()
    {
        cout << "Enter sales for the last three months " << endl;
        for (int i = 0; i < 3; ++i)
        {
            cout << "Month " << i + 1 << ": ";
            cin >> sales[i];
        }
    }

    void put_data()
    {
        cout << "Sales for the last three months: " << endl;
        for (int i = 0; i < 3; ++i)
        {
            cout << "Sales " << i + 1 << ": ";
            cout << sales[i] << " ";
            cout << endl;
        }
        cout << endl;
    }
};

class Book : public Publication, public Sales
{
private:
    int pageCount;

public:
    void get_data()
    {
        Publication::get_data();
        cout << "Enter page count: ";
        cin >> pageCount;
        Sales::get_data();
    }

    void put_data()
    {
        Publication::put_data();
        cout << "Page count: " << pageCount << endl;
        Sales::put_data();
    }
};

class Tape : public Publication, public Sales
{
private:
    float playingTime;

public:
    void get_data()
    {
        Publication::get_data();
        cout << "Enter playing time (minutes): ";
        cin >> playingTime;
        Sales::get_data();
    }

    void put_data()
    {
        Publication::put_data();
        cout << "Playing time: " << playingTime << " minutes" << endl;
        Sales::put_data();
    }
};

int main()
{
    Book book_1;
    cout << "Enter data for book" << endl;
    book_1.get_data();
    cout << "Book data" << endl;
    book_1.put_data();

    Tape tape_2;
    cout << "Enter data for tape:" << endl;
    tape_2.get_data();
    cout << "Tape data" << endl;
    tape_2.put_data();

    return 0;
}
 

// Members declared as protected in a class can be accessed by derived classes. In this code, both Publication and Sales classes have member variables and member functions declared as protected, so these members can be accessed by derived classes Book and Tape. Inheritance from Publication and Sales classes allows Book and Tape classes to access their protected members directly.