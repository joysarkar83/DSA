#include <iostream>
using namespace std;

//Time Complexity = O(n)
// int power(int x, int n){
//     if(n == 1){
//         return x;
//     }
//     return x * power(x,n-1);
// }


//Time Complexity = O(log n)
int power(int x, int n){
    if(n==0){
        return 1;
    }
    int half = power(x, n / 2);
    if (n % 2 == 0)
        return half * half;
    else
        return x * half * half;
}

int main(){
    int x = 2, n = 10;

    cout<<power(x,n);

    return 0;
}