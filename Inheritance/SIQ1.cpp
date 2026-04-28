// Single Inheritance
//Question 3

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

class Disk : public Publication
{
private:
    char disk_type;

public:
    void get_data()
    {
        Publication::get_data();
        cout << "Enter disk type (c for CD, d for DVD): ";
        cin >> disk_type;
    }

    void put_data()
    {
        Publication::put_data();
        cout << "Disk type: ";
        if (disk_type == 'c')
        {
            cout << "CD" << endl;
        }
        else
        {
            cout << "DVD" << endl;
        }
    }
};

int main()
{
    Disk disk;
    cout << "Enter data for disk:\n";
    disk.get_data();
    cout << "Disk data:\n";
    disk.put_data();

    return 0;
}


// The title and price members of Publication are declared as protected. This means they are accessible within the Publication class and its derived classes (Disk). In this code, Disk can directly access and modify title and price because they are protected members of the base class.
// get_data() and put_data() methods of Publication are also accessible in Disk class due to protected inheritance. Therefore, Disk can directly call these methods using Publication::get_data() and Publication::put_data().