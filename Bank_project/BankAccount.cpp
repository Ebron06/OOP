#include <iostream>
#include <string>
#include "BankAccount.h"
#include "Bank.h"


class BankAccount {
  private:
    std::string ownerName;
    double balance;

  public:
    BankAccount(const std::string name, double curr_balance)
      : ownerName(name), balance(curr_balance){};

    void deposit(double amount) {
      if (amount <= 0) {
        std::cout << "The amount you input has to be over $0\n";
        return;
      }
      balance += amount;
    }


    void withdraw(double amount) {
      if (balance < amount) {
        std::cout << "Insufficient Funds\n";
        return;
      }
      balance -= amount;
    }

    void printInfo() const {
      std::cout << "Name: " << this->ownerName << "\n";
      std::cout << "Current Balance: $" << this->balance << "\n";
    }
    std::string getName() const {
      return ownerName;
    }
};

