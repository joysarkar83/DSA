#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int nRows = matrix.size(), nCols = matrix[0].size();
    int rowSt = 0, colSt = 0, rowEnd = nRows-1, colEnd = nCols-1;

    vector<int> nums;
    
    while(rowSt <= rowEnd && colSt <= colEnd){
        for(int col = colSt; col<=colEnd; col++){
            nums.emplace_back(matrix[rowSt][col]);
        }
        rowSt++;
        for(int row = rowSt; row<=rowEnd; row++){
            nums.emplace_back(matrix[row][colEnd]);
        }
        colEnd--;
        if(rowSt <= rowEnd){
            for(int col = colEnd; col>=colSt; col--){
                nums.emplace_back(matrix[rowEnd][col]);
            }
        }
        rowEnd--;
        if(colSt <= colEnd){
            for(int row = rowEnd; row>=rowSt; row--){
                nums.emplace_back(matrix[row][colSt]);
            }
        }
        colSt++;
    }
    return nums;
}

int main(){
    vector<vector<int>> nums = {{1,2,3},{4,5,6},{7,8,9}};

    vector<int> order = spiralOrder(nums);

    for(int i:order){
        cout<<i<<" ";
    }

    return 0;
}