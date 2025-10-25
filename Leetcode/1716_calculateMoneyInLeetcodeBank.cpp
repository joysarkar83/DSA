#include <iostream>
using namespace std;

int totalMoney(int n) {
    int amt = 0, fullWeeks = n/7, remDays = n%7;

    for(int i=0; i<fullWeeks; i++){
        amt += 28 + (i * 7);
    }
    n = fullWeeks + remDays;
    for(int i=fullWeeks+1; i<=n; i++){
        amt += i;
    }
    return amt;
}

int main(){

    return 0;
}