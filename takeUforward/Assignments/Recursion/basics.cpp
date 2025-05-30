#include <iostream>
using namespace std;

//Print from 1 to n;
// void print(int i, int n){
//     if(i>n){
//         return;
//     }
//     cout<<i<<" ";
//     print(i+1, n);
// }


//Print from n to 1;
// void print(int n, int i){
//     if(n<i){
//         return;
//     }
//     cout<<n<<" ";
//     print(n-1,i);
// }


//Print from 1 to n using backtracking;
// void print(int i, int n){
//     if(i>n){
//         return;
//     }
//     print(i, n-1);
//     cout<<n<<" ";
// }


//Print from n to 1 using backtracking;
void print(int i, int n){
    if(i>n){
        return;
    }
    print(i+1, n);
    cout<<i<<" ";
}

int main(){
    int n = 7;
    print(1, n);
    // print(n, 1);
}