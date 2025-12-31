#include "../include/BankAccount.h"
#include <iostream>

bool testAddAccount();
bool testFindAccount();


bool testDeposit() {
    BankAccount account("Justin", 600.00);
    account.deposit(50.00);
    return account.getBalance() == 650.00;
}

bool testWithdraw() {
    BankAccount account("Stephanie", 500.00);
    account.withdraw(100.00);
    return account.getBalance() == 400.00;
}

int main() {
    int passed = 0; 
    int failed = 0; 

    if(testDeposit()) passed++; else failed++;
    if(testWithdraw()) passed++; else failed++;
    if(testAddAccount())passed++; else failed++;
    if(testFindAccount())passed++; else failed++;


    std::cout << "Test passed: " << passed << std::endl;
    std::cout << "Test failed: " << failed << std::endl;
}