#include <iostream>
using namespace std;

// Recurrsion Approach - Time Limit Exceeded
// int uniquePaths(int m, int n, int row=0, int col=0){
//     if(row == m-1 && col == n-1){
//         return 1;
//     }

//     int val1=0, val2=0;
//     if(row<m){
//         val1 = uniquePaths(m, n, row+1, col);
//     }

//     if(col<n){
//         val2 = uniquePaths(m, n, row, col+1);
//     }
    
//     return val1 + val2;
// }

//Mathematical Approach
long long unsigned int uniquePaths(int m, int n) {
    int N = m + n - 2;
    int r = min(m - 1, n - 1);
    long long unsigned int result = 1;

    for(int i = 1; i <= r; i++) {
        result *= (N - r + i);
        result /= i;
    }
    return result;
}

int main(){
    cout<<uniquePaths(23,12);

    return 0;
}