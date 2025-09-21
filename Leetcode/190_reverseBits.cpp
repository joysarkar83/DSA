#include <iostream>
#include <string>
using namespace std;

int reverseBits(int n) {
    string bin;
    while(n > 0){
        bin += to_string(n % 2);
        n /= 2;
    }

    while(bin.size() < 32){
        bin += '0';
    }

    long long int ans = 0;

    long long int toAdd = 1;
    for(int i=bin.size()-1; i>=0; i--){
        if(bin[i] == '1'){
            ans += toAdd;
        }
        toAdd += toAdd;
    }
    return ans;
}

int main(){
    cout<<reverseBits(13);

    return 0;
}