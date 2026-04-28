#include <iostream>
using namespace std;
//For maximum value in an array
int maximum(int* arr, int size) {
    int max = *arr;
    for (int i = 1; i < size; ++i) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}

// Function to swap values of two integers and return their sum
int oddSwap(int* x, int* y) {
    int temp = *x;
    *x = *y * 5;
    *y = temp * 5;
    return *x + *y;
}

// Function to expand an array and return a pointer to the new array
int* expand(int* arr, int size) {
    int* newArr = new int[size * 2];
    for (int i = 0; i < size; ++i) {
        *(newArr + i) = *(arr + i);
    }
    for (int i = size; i < size * 2; ++i) {
        *(newArr + i) = -1;
    }
    return newArr;
}

// Function to concatenate two arrays and return a pointer to the new array
int* concatenate(int* arr1, int size1, int* arr_2, int size2) {
    int newSize = size1 + size2;
    int* newArr = new int[newSize];
    for (int i = 0; i < size1; ++i) {
        *(newArr + i) = *(arr1 + i);
    }
    for (int i = 0; i < size2; ++i) {
        *(newArr + size1 + i) = *(arr_2 + i);
    }
    return newArr;
}

int main() {
    // maximum function
    int arr[] = {1, 3, 5, 7, 9};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum value in array: " << maximum( arr, arrSize) << endl;

    // oddSwap function
    int x = 10, y = 20;
    cout << "Before oddSwap: x = " << x << ", y = " << y << endl;
    oddSwap(&x, &y);
    cout << "After oddSwap: x = " << x << ", y = " << y << endl;

    // expand function
    int* expandedArr = expand(arr, arrSize);
    cout << "Expanded array: ";
    for (int i = 0; i < arrSize * 2; ++i) {
    cout << *(expandedArr + i) << " ";
    }
    cout << endl;
    delete[] expandedArr;

    // concatenate function
    int arr_2[] = {2, 6, 8};
    int arr_2Size = sizeof(arr_2) / sizeof(arr_2[0]);
    int* concatenated_Arr = concatenate(arr, arrSize, arr_2, arr_2Size);
    cout << "Concatenated array: ";
    for (int i = 0; i < arrSize + arr_2Size; ++i) {
    cout << *(concatenated_Arr + i) << " ";
    }
    cout <<endl;
    delete[] concatenated_Arr;

    return 0;
}
