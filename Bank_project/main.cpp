#include <iostream>
#include <string>
#include <vector>

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
};
int main() {

  BankAccount bankAccount1 = BankAccount("Chris", 4500.00);
  bankAccount1.deposit(50.00);
  bankAccount1.withdraw(20.00);
  bankAccount1.printInfo();
  return 0;
}
