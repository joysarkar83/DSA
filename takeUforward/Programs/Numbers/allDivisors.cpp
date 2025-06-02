#include <iostream>
#include <vector>
using namespace std;

vector<int> divisors(int n){
    vector<int> fact;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            fact.emplace_back(i);
        }
    }
    return fact;
}

int main(){

    return 0;
}