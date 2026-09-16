#include <bits/stdc++.h>
using namespace std;
class BankAccount {
    private:
        string Name;
        int accNum;
        int balance;
        public:
        BankAccount(string n, int num, int b) {
            Name = n;
            accNum = num;
            balance = b;
        }
        friend void CompareBalance(const BankAccount &a, const BankAccount &b) {
            
};
void CompareBalance(const BankAccount &a, const BankAccount &b) {
    if (a.balance > b.balance) {
        cout << "The account with the higher balance is: " << a.Name << endl;
        cout << "Account Number: " << a.accNum << endl;
        cout << "Balance: " << a.balance << endl;
    } else {
        cout << "The account with the higher balance is: " << b.Name << endl;
        cout << "Account Number: " << b.accNum << endl;
        cout << "Balance: " << b.balance << endl;
    }
}
int main() {
    BankAccount a("Sarthak", 12345, 5000);
    BankAccount b("Shivam", 67890, 3000);
    CompareBalance(a, b);
    return 0;
}