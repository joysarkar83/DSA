#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> vect){
    for(int i:vect){
        cout<<i<<" ";
    }
    cout<<"\n";
}

void printVector(vector<bool> vect){
    for(bool i:vect){
        cout<<i<<" ";
    }
    cout<<"\n";
}

int countPrimes(int n) {
    vector<bool> nonPrimes(n+1, false);
    nonPrimes[0] = nonPrimes[1] = nonPrimes[n] = true;
    
    for(int i=2; i*i<n; i++){
        if(nonPrimes[i] == false){
            for(int j=i+i; j<=n; j+=i){
                nonPrimes[j] = true;
            }
        }
    }
    printVector(nonPrimes);

    vector<int> primes;
    for(int i=0; i<n+1; i++){
        if(nonPrimes[i] == false){
            primes.emplace_back(i);
        }
    }
    printVector(primes);
    return primes.size();
}

int main(){
    cout<<countPrimes(2);

    return 0;
}