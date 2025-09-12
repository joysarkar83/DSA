#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Bank {
public:
    int n;
    vector<long long int> Account;

    Bank(vector<long long>& balance) {
        this->n = balance.size();
        for(int i=0; i<n; i++){
            Account.emplace_back(balance[i]);
        }
    }
    
    bool transfer(int account1, int account2, long long money) {
        if(account1<=n && account2<=n && Account[account1-1] >= money){
            Account[account1-1] -=money;
            Account[account2-1] +=money;
            return true;
        }
        return false;        
    }
    
    bool deposit(int account, long long money) {
        if(account <= n){
            Account[account-1] += money;
            return true;
        }
        return false;
    }
    
    bool withdraw(int account, long long money) {
        if(account <= n && Account[account-1] >= money){
            Account[account-1] -=money;
            return true;
        }
        return false;        
    }
};

int main(){

    return 0;
}