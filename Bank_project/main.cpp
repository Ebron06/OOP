#include "Bank.h"
#include "BankAccount.h"
#include <iostream>

int main() {
    Bank bank;

    bank.addAccount(BankAccount("Chris", 1000));
    bank.addAccount(BankAccount("Alex", 500));

    BankAccount* acc = bank.findAccount("Chris");
    if (acc) {
        acc->deposit(200);
    }

    bank.listAccounts();
}

