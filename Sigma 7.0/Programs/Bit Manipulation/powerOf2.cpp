#include <iostream>
using namespace std;

bool isPowerOf2(int num){
    if(num & (num-1)){
        return false;
    }
    return true;
}

int main(){
    int num = 7;
    cout<<isPowerOf2(num);
    return 0;
}