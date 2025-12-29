#ifndef BANK_H
#define BANK_H


#include <vector>
#include <string>
#include "BankAccount.h"

class Bank{
  private:
    std::vector<BankAccount> accounts;

  public:
    void addAccount(const BankAccount& account);
    void listAccounts() const;
    BankAccount* findAccount(const std::string& name);
};

#endif
