#include <iostream>
#include "../include/Bank.h"
#include "../include/BankAccount.h"


bool testAddAccount() {
    Bank bank;
    BankAccount acc("Chris", 500);
    bank.addAccount(acc);
    return bank.getAccountSize() == 1;    
}

bool testFindAccount() {
    Bank bank;
    BankAccount acc("John", 500);
    BankAccount acc2("Mannuy", 900);
    bank.addAccount(acc);
    bank.addAccount(acc2);
    return bank.findAccount("John");

}