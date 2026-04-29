
#include<iostream>
#include<fstream>

using namespace std;

int main(){
    // string st = "hi Kinza";
    // // Opening files using constructor and writing it
    // ofstream out("read.txt"); // Write operation
    // out<<st;

    string st2;
    // Opening files using constructor and reading it
    ifstream in("sam.txt"); // Read operation
   // in>>st2;
    getline(in, st2);  
    getline(in, st2);  
    cout<<st2;

    return 0;
}