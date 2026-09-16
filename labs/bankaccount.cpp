#include <bits/stdc++.h>
using namespace std;

class BankAccount
{
    int balance;

public:
    BankAccount(int b)
    {
        balance = b;
    }

    void deposit(int amount)
    {
        balance = balance + amount;
    }

    void withdraw(int amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }

    void display()
    {
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    int balance, deposit, withdraw;

    cout << "Enter your initial balance: ";
    cin >> balance;

    BankAccount account(balance);

    cout << "Enter amount to deposit: ";
    cin >> deposit;
    account.deposit(deposit);

    cout << "Enter amount to withdraw: ";
    cin >> withdraw;
    account.withdraw(withdraw);

    account.display();

    return 0;
}