#include <iostream>
#include <vector>
using namespace std;
int main(){
    long long unsigned int n, k;
    cin >> n >> k;

    long long unsigned int noOfOdds = -1;
    if(n % 2 == 0){
        noOfOdds = n / 2;
    }else{
        noOfOdds = (n / 2) + 1;
    }

    if(k <= noOfOdds){
        cout<<k+(k-1);
    }else{
        long long unsigned int evenIdx = k - noOfOdds;
        cout<<evenIdx * 2;
    }
    return 0;
}