#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
#include <string>

class BankAccount {
  private:
    std::string ownerName;
    double balance;

  public:
    BankAccount(const std::string& name, double curr_balance);
    void deposit(double amount);
    void withdraw(double amount);
    void printInfo() const;
    const std::string& getName() const;
    const double& getBalance() const;
};

#endif
