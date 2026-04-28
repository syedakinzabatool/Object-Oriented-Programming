/*Write a program to manage a bank account. Define a function `depositByValue()` that takes a pointer to the account balance as an argument and increases the balance by a specified amount. Implement another function `depositByReference()` that takes a reference to the account balance and achieves the same functionality. Compare and contrast the two approaches.*/
#include <iostream>
using namespace std;

class BankAccount {
public:
    double balance;

    BankAccount(double initialBalance) {
        balance = initialBalance;
    }

    // Function to deposit by value (using a pointer)
    void depositByValue(double* balancePtr, double amount) {
        *balancePtr += amount;
    }

    // Function to deposit by reference
    void depositByReference(double& balanceRef, double amount) {
        balanceRef += amount;
    }

    // Function to display the current balance
    void displayBalance() const {
        cout << "Current balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account(100.0); // Initial balance of $100
    account.displayBalance();

    // Deposit using a pointer (pass balance by value)
    account.depositByValue(&account.balance, 50.0); // Deposit $50
    account.displayBalance();

    // Deposit using a reference (pass balance by reference)
    account.depositByReference(account.balance, 75.0); // Deposit $75
    account.displayBalance();

    return 0;
}
