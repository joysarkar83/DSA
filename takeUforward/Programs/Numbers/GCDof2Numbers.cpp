#include <iostream>
#include <vector>
using namespace std;

vector<int> factors(int num){
    vector<int> fact;
        for(int i=num; i>=1; i--){
            if(num%i==0){
                fact.emplace_back(i);
            }
        }
    return fact;
}

int GCD(int n1,int n2) {
    vector<int> factor1 = factors(n1);
    vector<int> factor2 = factors(n2);

    for(int i=0; i<factor1.size(); i++){
        for(int j=0; j<factor2.size(); j++){
            if(factor1[i]==factor2[j]){
                return factor1[i];
            }
        }
    }
}

int main(){
    cout<<GCD(9,8);
    return 0;
}