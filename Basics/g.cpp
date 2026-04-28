#include <iostream>
using namespace std;

class MaxValueFinder {
private:
    int *values;
    int size;

public:
    MaxValueFinder() : size(5) 
    {
        values = new int[size];
    }

    ~MaxValueFinder() 
    {
        delete[] values;
    }

    void getValues() 
    {
        cout << "Enter 5 values:" << endl;
        for (int i = 0; i < size; i++) 
        {
            cout<<"Enter value for "<< i <<": ";
            cin >> values[i];
        }
    }

    int findMax() 
    {
        int max = values[0];
        for (int i = 1; i < size; i++) {
            if (values[i] > max) {
                max = values[i];
            }
        }
        return max;
    }
};

int main() 
{
    MaxValueFinder finder;
    finder.getValues();
    int max = finder.findMax();
    cout << "The maximum value is: " << *(&max) << endl;
    return 0;
}