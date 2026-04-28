#include <iostream>
// #include <string> // Added for string class
using namespace std;

class Car{
private:
    string name;
    char direction; // Removed static keyword
    float position;
public:
    Car(){
        name = "0";
        direction = '0';
        position = 0.0;   
    }

    // Corrected set_values function
    void set_values(string n, char d, float p) {  
        Turn(d);
        name = n;
        direction = d;
        position = p;
    }

    // Corrected return type of Turn function
    void Turn(char d){  
        if(d == 'E'){
            cout << "The direction changed from 'E' to 'S'\n";
        }
        else if(d == 'S'){
            cout << "The direction changed from 'S' to 'W'\n";
        }
        else if(d == 'N'){
            cout << "The direction changed from 'N' to 'E'\n";
        }
        else if(d == 'W'){
            cout << "The direction changed from 'W' to 'N'\n";
        }
        else{
            cout << "Invalid\n";
        }
    }

    // Removed extra braces in turn function
    void turn(char di){  
        cout << "The direction changed from 'W' to 'S'\n";
    }

    void Move(float p){
        cout << "The position changed from 0 to: " << p + 0.0 << " meters." << endl;
    } 
};

int main(){
    Car d, d1;
    d.set_values("Jaguar", 'E', 0.0);
   
    d.turn('W');
    d.Move(20);
    return 0;
}
