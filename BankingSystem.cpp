#include <iostream>
#include <string>
#include <vector>

class BankAccount {
private:
    std::string accountHolderName;
    double balance;

public:
    // Constructor
    BankAccount(const std::string& name, double initialBalance)
        : accountHolderName(name), balance(initialBalance) {}

    // Deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount << " successfully." << std::endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    // Withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrew $" << amount << " successfully." << std::endl;
        } else {
            std::cout << "Insufficient funds or invalid withdrawal amount." << std::endl;
        }
    }

    // Check balance
    void checkBalance() const {
        std::cout << "Account Holder: " << accountHolderName << std::endl;
        std::cout << "Current Balance: $" << balance << std::endl;
    }
};

class Bank {
private:
    std::vector<BankAccount> accounts;

public:
    // Create a new account
    void createAccount(const std::string& name, double initialBalance) {
        accounts.emplace_back(name, initialBalance);
        std::cout << "Account created successfully for " << name << "." << std::endl;
    }

    // Access an account by index
    BankAccount* getAccount(int index) {
        if (index >= 0 && index < accounts.size()) {
            return &accounts[index];
        } else {
            std::cout << "Invalid account index." << std::endl;
            return nullptr;
        }
    }
};

int main() {
    Bank bank;
    int choice;
    std::string name;
    double amount;

    while (true) {
        std::cout << "\n--- Banking System Menu ---" << std::endl;
        std::cout << "1. Create Account" << std::endl;
        std::cout << "2. Deposit" << std::endl;
        std::cout << "3. Withdraw" << std::endl;
        std::cout << "4. Check Balance" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::cout << "Enter account holder name: ";
                std::cin.ignore(); // Clear the input buffer
                std::getline(std::cin, name);
                std::cout << "Enter initial balance: ";
                std::cin >> amount;
                bank.createAccount(name, amount);
                break;
            }
            case 2: {
                int index;
                std::cout << "Enter account index: ";
                std::cin >> index;
                BankAccount* account = bank.getAccount(index);
                if (account) {
                    std::cout << "Enter deposit amount: ";
                    std::cin >> amount;
                    account->deposit(amount);
                }
                break;
            }
            case 3: {
                int index;
                std::cout << "Enter account index: ";
                std::cin >> index;
                BankAccount* account = bank.getAccount(index);
                if (account) {
                    std::cout << "Enter withdrawal amount: ";
                    std::cin >> amount;
                    account->withdraw(amount);
                }
                break;
            }
            case 4: {
                int index;
                std::cout << "Enter account index: ";
                std::cin >> index;
                BankAccount* account = bank.getAccount(index);
                if (account) {
                    account->checkBalance();
                }
                break;
            }
            case 5: {
                std::cout << "Exiting the program. Goodbye!" << std::endl;
                return 0;
            }
            default: {
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
            }
        }
    }

    return 0;
}