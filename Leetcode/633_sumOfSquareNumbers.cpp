#include <iostream>
#include <cmath>
using namespace std;

bool judgeSquareSum(int c) {
    long long st = 0, end = sqrt(c);

    while(st <= end){
        long long val = st*st + end*end;
        if(val == c){
            return true;
        }
        else if(val < c){
            st++;
        }
        else{
            end--;
        }
    }
    return false;
}

int main(){

    return 0;
}