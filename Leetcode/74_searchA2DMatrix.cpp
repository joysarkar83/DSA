#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int nRows = matrix.size(), nCols = matrix[0].size();
    int r = 0, c = nCols-1;

    while(r>=0 && r<nRows && c>=0 && c<nCols){
        if(matrix[r][c] == target){
            return true;
        }else if(matrix[r][c] < target){
            r++;
        }else if(matrix[r][c] > target){
            c--;
        }
    }
    return false;
}

int main(){

    return 0;
}