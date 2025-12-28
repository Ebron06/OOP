#include <iostream>
#include <vector>
#include <string>
#include "BankAccount.h"
#include "Bank.h"


class Bank {
  private:
    std::vector<BankAccount> accounts;

  public:
    void addAccount(const BankAccount& account) {
      accounts.push_back(account);
    }

    void listAccounts() const {
      for (const auto&  acc : accounts) {
        std::cout << acc.getName() << "\n";
      }
    }

    BankAccount* findAccount(const std::string& name) {
       for (const auto& accounts : accounts) {
         if (accounts.getName() == name) {
           return &accounts;
         }
        return nullptr;
       }
    }
};
