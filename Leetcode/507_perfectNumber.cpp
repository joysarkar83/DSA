#include <iostream>
#include <vector>
using namespace std;

bool checkPerfectNumber(int num) {
    if(num == 1) return false;
    
    vector<int> divisors;
    int halfNum = num/2;
    for(int i=2; i<=halfNum; i++){
        if(num%i == 0){
            divisors.push_back(i);
        }
    }

    int sum = 0;
    for(int i=0; i<divisors.size(); i++){
        sum += divisors[i];
    }
    
    if(++sum == num) return true;
    return false;
}

int main(){

    return 0;
}