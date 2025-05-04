#include <iostream>
using namespace std;

class ATM {
public:
    void withdrawCash(int amount) {
        if (checkBalance(amount)) {
            cout << "Please collect your cash: ₹" << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

private:
    bool checkBalance(int amount) {
        int balance = 10000;
        return amount <= balance;
    }
};

int main() {
    ATM atm;
    atm.withdrawCash(7000);
    return 0;
}
