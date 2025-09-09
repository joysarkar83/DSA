#include <iostream>
#include <vector>
using namespace std;

bool containsZero(int val){
    string str = to_string(val);
    for(char ch:str){
        if(ch == '0'){
            return true;
        }
    }
    return false;
}

vector<int> getNoZeroIntegers(int& n) {
    for(int i=1; i<n; i++){
        if(containsZero(i)){
            continue;
        }
        else{
            if(!containsZero(n-i)){
                return {i, n-i};
            }
        }
    }
    return {1, 1};
}

int main(){

    return 0;
}