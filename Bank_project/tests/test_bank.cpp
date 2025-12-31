#include <iostream>
#include "../include/Bank.h"
#include "../include/BankAccount.h"


bool testAddAccount() {
    BankAccount acc = BankAccount("Chris", 500);
    Bank::addAccount(acc);
    return Bank::getAccountSize() == 1;    
}

