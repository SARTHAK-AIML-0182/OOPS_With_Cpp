#include<bits/stdc++.h>
using namespace std;
class BankAccount{
    private:
    int accountNumber;
    string customerName;
    int balance;

    public:
    BankAccount(int accNum, string name, int bal ){
        accountNumber=accNum;
        customerName=name;
        balance=bal;
    }
    friend void compareBalance(const BankAccount& b1, const BankAccount& b2);
};
void compareBalance(const BankAccount& b1, const BankAccount& b2){
    if(b1.balance>b2.balance){
        cout<<b1.customerName<<" has higher balance of "<<b1.balance<<"$\n";
    }else if(b1.balance<b2.balance){
        cout<<b2.customerName<<" has higher balance of "<<b2.balance<<"$\n";
    }else{
        cout<<"Both accounts have equal balance of "<<b1.balance<<"$\n";
    }
}
int main(){
    BankAccount acc1(101,"Shivam",5000);
    BankAccount acc2(102,"Vikas",2000);

    compareBalance(acc1,acc2);
    return 0;
}