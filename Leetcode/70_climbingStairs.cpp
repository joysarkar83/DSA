//runtime error, logic is correct

#include <iostream>
using namespace std;

int climbStairs(int n){
    if(n==0 || n==1){
        return 1;
    }
    return climbStairs(n-1) + climbStairs(n-2);
}

int main(){
    cout<<climbStairs(36);

    return 0;
}