#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int nRows = matrix.size(), nCols = matrix[0].size();
    unordered_set<int> zeroRow, zeroCol;

    for(int i=0; i<nRows; i++){
        for(int j=0; j<nCols; j++){
            if(matrix[i][j] == 0){
                zeroRow.emplace(i);
                zeroCol.emplace(j);
            }
        }
    }

    for(auto i=zeroRow.begin(); i!=zeroRow.end(); i++){
        for(int j=0; j<nCols; j++){
            matrix[*i][j] = 0;
        }
    }
    for(auto j=zeroCol.begin(); j!=zeroCol.end(); j++){
        for(int i=0; i<nRows; i++){
            matrix[i][*j] = 0;
        }
    }
    return;
}

int main(){

    return 0;
}