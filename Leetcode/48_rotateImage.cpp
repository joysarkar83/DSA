#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();

    // Swap Columns
    for(int i=0; i<n/2; i++){
        swap(matrix[i], matrix[n-i-1]);
    }

    
    // Transpose
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

int main(){

    return 0;
}