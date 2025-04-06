// BankAccount.cpp - To be implemented

#include <iostream>

using namespace std;

class BankAccount {
  private:
    //string name;
    double balance;
    //int accountNumber;
  public:
    // constructor
    BankAccount(double initialBalance) {
        if (initialBalance < 0) {
            cout << "Error: Initial balance cannot be negative." << endl;
            balance = 0;
        }
        else {
            balance = initialBalance;
        }
    }

    // Public method to deposit money
    void deposit(double amount ) {
        if (amount < 0) {
            cout << "Error: Deposit amount cannot be negative." << endl;
        }
        else {
            balance += amount;
        }
    }

    // Public method to withdraw money
    void withdraw(double amount) {
        if (amount < 0 && balance - amount < 0) {
            cout << "Error: Withdraw amount cannot be negative or exceed balance." << endl;
        }
        else {
            balance -= amount;
        }
    }

    //Public method to check balance
    double getBalance () {
        return balance;
    }

};


int main() {
    BankAccount myAccount(1000); // create a bank account with initial balance of 1000

    cout << "My account balance is: " << myAccount.getBalance() << endl;

    myAccount.deposit(500); // deposit 500
    cout << "My account balance is: " << myAccount.getBalance() << endl;

    myAccount.withdraw(200); // withdraw 200
    cout << "My account balance is: " << myAccount.getBalance() << endl;

    return 0;

}