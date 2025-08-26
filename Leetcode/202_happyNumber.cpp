#include <iostream>
#include <unordered_set>
using namespace std;

int sqOfDigit(int num){
    int val = 0;
    while(num > 0){
        int curr = num%10;
        val += curr * curr;
        num /= 10;
    }
    return val;
}

bool isHappy(int n) {
    unordered_set<int> used;
    used.emplace(n);
    n = sqOfDigit(n);
    if(n == 1) return true;
    
    while(used.find(n) == used.end()){
        used.emplace(n);
        n = sqOfDigit(n);
        if(n == 1) return true;
    }
    return false;
}

int main(){
    cout<<isHappy(19);

    return 0;
}