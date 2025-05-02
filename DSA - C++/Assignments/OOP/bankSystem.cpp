#include <iostream>
using namespace std;

class BankAccount{
    private:
    int accountNum, balance=0;

    public:
    BankAccount(int accountNum, int balance){
        cout<<"Creating account...\n";
        this->accountNum = accountNum;
        this->balance = balance;
        cout<<"Account Created!\n";
    }

    void deposit(int amount){
        balance += amount;
        cout<<"Amount deposited\n";
    }

    void withdraw(int amount){
        if(balance-amount >= 0){
            balance-=amount;
            cout<<"Amount withdrawn\n";
            return;
        }
        cout<<"Insufficient balance";
    }

    void getBalance(){
        cout<<"Balance: "<<balance<<'\n';
    }

    ~BankAccount(){
        cout<<"Session Logged Out\n";
    }
};

int main(){
    BankAccount accInfo1(54321, 3000);
    accInfo1.deposit(10000);
    accInfo1.withdraw(5000);
    accInfo1.getBalance();

    return 0;
}