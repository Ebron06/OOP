#include <iostream>
#include <string>
#include "BankAccount.h"
#include "Bank.h"


    BankAccount::BankAccount(const std::string& name, double curr_balance)
      : ownerName(name), balance(0.00)
      {
        if (curr_balance > 0)
            balance = curr_balance;
      }

    void BankAccount::deposit(double amount) {
      if (amount <= 0) {
        std::cout << "The amount you input has to be over $0\n";
        return;
      }
      balance += amount;
    }


    void BankAccount::withdraw(double amount) {
      if (balance < amount) {
        std::cout << "Insufficient Funds\n";
        return;
      }
      balance -= amount;
    }

    void BankAccount::printInfo() const {
      std::cout << "Name: " << this->ownerName << "\n";
      std::cout << "Current Balance: $" << this->balance << "\n";
    }
    const std::string& BankAccount::getName() const {
      return ownerName;
    }


