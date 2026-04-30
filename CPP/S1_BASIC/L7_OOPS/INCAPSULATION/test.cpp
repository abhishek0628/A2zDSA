#include<iostream>
using namespace std;

class account {
private:
    double balance = 0;

public:
    void deposit(double amount) {
        if(amount > 0) {
            balance += amount;
        }
    }

    void withdraw(double amount) {
        if(amount > 0 && amount <= balance) {
            balance -= amount;
        } else {
            cout << "Invalid withdrawal\n";
        }
    }

    double getbalance() {
        return balance;
    }
};

int main() {
    account c;
    c.deposit(890);
    cout << c.getbalance();
    return 0;
}