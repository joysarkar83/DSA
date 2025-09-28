#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> decimalRepresentation(int n) {
    vector<int> res;
    unsigned int multiplier = 1;
    while(n>0){
        int curr = (n%10) * multiplier;
        if(curr != 0) res.emplace_back(curr);
        multiplier *= 10;
        n /= 10;
    }
    
    n = res.size();
    for(int i=0; i<n/2; i++){
        swap(res[i], res[n-i-1]);
    }
    return res;
}

int main(){
    int n = 00;

    vector<int> res = decimalRepresentation(n);

    for(int i:res){
        cout<<i<<" ";
    }
    return 0;
}