#include <iostream>
#include <vector>
#include <string>
#include "BankAccount.h"
#include "Bank.h"


    void Bank::addAccount(const BankAccount& account) {
      accounts.push_back(account);
    }

    void Bank::listAccounts() const {
      for (const auto&  acc : Bank::accounts) {
        std::cout << acc.getName() << "\n";
      }
    }

    BankAccount* Bank::findAccount(const std::string& name) {
       for (auto& acc : Bank::accounts) {
         if (acc.getName() == name) {
           return &acc;
         }
        }
        return nullptr;
    }
