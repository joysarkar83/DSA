#include <iostream>
#include <vector>
using namespace std;

bool isToeplitzMatrix(vector<vector<int>>& matrix) {
    int nRows = matrix.size(), nCols = matrix[0].size();
    for(int i=1; i<nRows; i++){
        for(int j=1; j<nCols; j++){
            if(matrix[i][j] != matrix[i-1][j-1]) return false;
        }
    }
    return true;
}

int main(){

    return 0;
}