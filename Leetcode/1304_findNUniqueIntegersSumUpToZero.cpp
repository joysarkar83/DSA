#include <iostream>
#include <vector>
using namespace std;

vector<int> sumZero(int n) {
    vector<int> arr;
    if(n % 2 != 0){
        arr.emplace_back(0);
    }
    for(int i=1; i<n/2; i++){
        arr.emplace_back(i);
        arr.emplace_back(i*(-1));
    }
    return arr;
}

int main(){

    return 0;
}