#include <iostream>
using namespace std;

class Array {
public:
    int A[5];
    void input();
    void output();
    int max();
};

void Array::input() {
    for(int i = 0; i < 5; i++) {
        cout << "Enter the number for index " << i << ": ";
        cin >> A[i];
    }
}

void Array::output() {
    cout << "Entered numbers of the array are: ";
    for(int i = 0; i < 5; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int Array::max() {
    int maximum = A[0];
    for(int i = 1; i < 5; i++) {
        if(A[i] > maximum) {
            maximum = A[i];
        }
    }
    return maximum;
}

int main() {
    Array arr;
    arr.input();
    arr.output();
    cout << "The maximum element is: " << arr.max() << endl;
    return 0;
}
