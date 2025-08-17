#include <iostream>
#include <vector>
using namespace std;

int maximum69Number (int& num) {
    int n = num;
    vector<int> val;
    
    while(n > 0){
        val.emplace_back(n%10);
        n /= 10;
    }

    for(int i=val.size()-1; i>=0; i--){
        if(val[i] == 6){
            val[i] = 9;
            break;
        }
    }
    
    n = 0;
    for(int i=val.size()-1; i>=0; i--){
        n = (n*10) + val[i];
    }
    return n;
}

int main(){

    return 0;
}