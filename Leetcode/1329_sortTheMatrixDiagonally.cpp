#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
    int nRows = mat.size();
    if(nRows == 0){
        return mat;
    }
    int nCols = mat[0].size();

    for(int r=nRows-1; r>0; r--){
        vector<int> currDiag;
        for(int c=0, m=r ; c<nCols && m<nRows; c++, m++){
            currDiag.emplace_back(mat[m][c]);
        }
        sort(currDiag.begin(), currDiag.end());
        for(int c=0, m=r, k=0; c<nCols && m<nRows; c++, m++, k++){
            mat[m][c] = currDiag[k];
        }
    }
    
    for(int c=0; c<nCols; c++){
        vector<int> currDiag;
        for(int r=0, n=c; r<nRows && n<nCols; r++, n++){
            currDiag.emplace_back(mat[r][n]);
        }
        sort(currDiag.begin(), currDiag.end());
        for(int r=0, n=c, k=0; r<nRows && n<nCols; r++, n++, k++){
            mat[r][n] = currDiag[k];
        }
    }
    return mat;
}

int main(){

    return 0;
}