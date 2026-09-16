#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    int balance;

public:
    BankAccount(int a, int b)
    {
        accountNumber = a;
        balance = b;
    }

    friend void compareBalance(BankAccount, BankAccount);
};

void compareBalance(BankAccount a1, BankAccount a2)
{
    if (a1.balance > a2.balance)
        cout << "Account " << a1.accountNumber << " has the higher balance.";
    else
        cout << "Account " << a2.accountNumber << " has the higher balance.";
}

int main()
{
    BankAccount a1(101, 45000);
    BankAccount a2(102, 62000);

    compareBalance(a1, a2);

    return 0;
}