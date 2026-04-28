// C++ program to demonstrate how to create dynamic variable
// using new
#include <iostream>
#include <memory>
using namespace std;

int main()
{
    // pointer to store the address returned by the new
    int *ptr;
    // allocating memory for integer
    ptr = new int; // ptr =Address (&)

    // assigning value using dereference operator
    *ptr = 10;

    // printing value and address
    cout << "Address: " << ptr << endl;
    cout << "Value: " << *ptr;

    return 0;
}
// pointer-variable = new data-type(value);

// creating inbuit data types with initial value
//    int* p = new int(25)
//    float* p = new float(25.5)

/*Allocate a block of memory: a new operator is also used to allocate a block(an array) of memory of type data type.

pointer-variable = new data-type[size];
where size(a variable) specifies the number of elements in an array.

Example:

int *p = new int[10]
                  ''delete operator''
Since it is the programmer’s responsibility to deallocate dynamically allocated memory, programmers are provided delete operator in C++ language.

Syntax:

// Release memory pointed by pointer-variable
delete pointer-variable;
Here, the pointer variable is the pointer that points to the data object created by new.

Examples:

delete p;
delete q;
To free the dynamically allocated array pointed by pointer variable, use the following form of delete:

// Release block of memory 
// pointed by pointer-variable
delete[] pointer-variable;  

Example:
// It will free the entire array
// pointed by p.
   delete[] p;*/