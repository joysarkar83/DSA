#include <iostream>
using namespace std;

int countEven(int num) {
    int count = 0;
    for(int i=2; i<=num; i++){
        int sum = 0;
        int curr = i;
        while(curr>0){
            sum += (curr%10);
            curr /= 10;
        }
        if(sum % 2 == 0) count++;
    }
    return count;
}

int main(){

    return 0;
}