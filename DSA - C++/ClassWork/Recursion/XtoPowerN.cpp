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
    if(n%2 == 0){
        return (power(x,n/2) * power(x,n/2));
    }
    else if(n%2 == 1){
        return (x * power(x,n/2) * power(x,n/2));
    }
}

int main(){
    int x = 2, n = 10;

    cout<<power(x,n);

    return 0;
}