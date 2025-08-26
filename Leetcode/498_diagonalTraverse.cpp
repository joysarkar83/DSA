#include <iostream>
#include <vector>
using namespace std;

vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
    int nRows = mat.size(), nCols = mat[0].size();

    vector<int> vals;

    int row = 0, col = 0;

    while (row < nRows && col < nCols) {
        for (; row >= 0 && col < nCols; row--, col++) {
            vals.emplace_back(mat[row][col]);
        }
        if (col == nCols) {
            col = nCols - 1;
            row += 2;
        } else {
            row = 0;
        }
        
        if (row >= nRows) break;

        for (; row < nRows && col >= 0; row++, col--) {
            vals.emplace_back(mat[row][col]);
        }
        if (row == nRows) {
            row = nRows - 1;
            col += 2;
        } else {
            col = 0;
        }

        if (col >= nCols) break;
    }
    return vals;
}

int main(){
    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};

    vector<int> vals = findDiagonalOrder(mat);

    for(int i:vals){
        cout<<i<<" ";
    }
    cout<<"\n";

    return 0;
}