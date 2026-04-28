// •	Write a C++ program to implement a class called BankAccount that has private member variables 
//for account number and balance. 
// Include member functions to deposit and withdraw money from the account.
#include <iostream>
using namespace std;
class BankAccount{
private:
int account_number;
int balance;
public:
BankAccount(){
account_number=0;
balance=0;
}

BankAccount Withdraw(int c,int w){
cout<<"The remaining balance after withdrawal is :"<<c-w<<"\n";
}
BankAccount Deposit(int cu,int de){
cout<<"The updated balance after deposit is :"<<cu+de<<"\n";
}
};
int main(){
    BankAccount withdraw,deposit;
    int current_balance;
    cout<<"Enter your current balance:";
    cin>>current_balance;

    char  choice; 
    cout<<"Choose an option what you want to do: (w/d)";  //choice could be 'w' or 'd'
    cin>>choice;                
    if(choice=='w'){ 
    int withdrawal_amount;
    cout<<"Enter the amount you want to withdraw:";
    cin>>withdrawal_amount;
    withdraw.Withdraw(current_balance,withdrawal_amount);
    }
    else if (choice=='d'){
    int deposited_amount;
    cout<<"Enter the amount you want to deposit:";
    cin>>deposited_amount;
    deposit.Deposit(current_balance,deposited_amount);
    }
    else{
    cout<<"Invalid choice taken.";
    }
   
    return 0;

}