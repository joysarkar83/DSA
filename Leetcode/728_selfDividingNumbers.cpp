#include <iostream>
#include <vector>
using namespace std;

bool isSelfDividing(int num){
    int cpy = num;
    while(num > 0){
        int divBy = num%10;
        if(divBy == 0) return false;
        else if(cpy % divBy != 0){
            return false;
        }
        num /= 10;
    }
    return true;
}

vector<int> selfDividingNumbers(int left, int right) {
    vector<int> res;
    for(int i=left; i<=right; i++){
        if(isSelfDividing(i)){
            res.emplace_back(i);
        }
    }
    return res;
}

int main(){

    return 0;
}