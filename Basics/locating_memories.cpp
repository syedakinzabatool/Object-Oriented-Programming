#include<iostream>
using namespace std;

int maximum(int *X,int n){
     int max=0,z=0;
    for(int i=0;i<n;i++){
         if(*(X+z)>max){
              max=*(X+i);
         }
         z++;
     }
    return max;
}
int oddSwap(int* x, int* y) {
    int temp = *x;
    *x = *y * 5;
    *y = temp * 5;
    return *x + *y;
}

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

int main(){
    int size=5;
    int Array[size]={3,6,9,11,13};
    maximum( Array,size);
    
    cout<<"Max. value of the array is:"<<maximum(Array,size)<<endl;
   int x = 6, y = 12;
    cout << "Before oddSwap: x = " << x << ", y = " << y <<endl;
    oddSwap(&x, &y);
    cout << "After oddSwap: x = " << x << ", y = " << y << endl;
    cout<<"After returning the sum of both values: "<<oddSwap(&x,&y)<<endl;


    int* expandedArr = expand(Array, size);
    cout << "Expanded array is:";
    for (int i = 0; i < size * 2; ++i) {
    cout << *(expandedArr + i) << " ";
    }
    cout << endl;
    delete[] expandedArr;

  
    int arr_2[] = {2, 6, 8};
    int arr_2size = sizeof(arr_2) / sizeof(arr_2[0]);
    int* concatenated_Arr = concatenate(Array, size, arr_2, arr_2size);
    cout << "Concatenated array is:";
    for (int i = 0; i < size + arr_2size; ++i) {
    cout << *(concatenated_Arr + i) << " ";
    }
    cout <<endl;
    delete[] concatenated_Arr;

    return 0;
}
