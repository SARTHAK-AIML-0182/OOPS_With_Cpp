#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;
    static int totalAccounts;
public:
    BankAccount(int acnum, double bal) {
        accountNumber = acnum;
        balance = bal;
        totalAccounts++;
    }
    static void showTotalAccounts() {
        cout << "Total Bank Accounts Active: " << totalAccounts << endl;
    }
    friend void compareBalance(const BankAccount &ac1, const BankAccount &ac2);
};
int BankAccount::totalAccounts = 0;
void compareBalance(const BankAccount &ac1, const BankAccount &ac2) {
    if (ac1.balance > ac2.balance) {
        cout << "Account " << ac1.accountNumber << " has the higher balance." << endl;
    } else if (ac2.balance > ac1.balance) {
        cout << "Account " << ac2.accountNumber << " has the higher balance." << endl;
    } else {
        cout << "Both accounts have an equal balance." << endl;
    }
}
int main() {
    BankAccount account1(101, 45000);
    BankAccount account2(102, 62000);
    BankAccount::showTotalAccounts();
    cout << "Comparing Account 101 and Account 102:" << endl;
    compareBalance(account1, account2);

    return 0;
}