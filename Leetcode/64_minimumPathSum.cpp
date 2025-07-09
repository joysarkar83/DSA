#include <iostream>
#include <vector>
#include <climits>
using namespace std;

//Time Limit Exceeded
int minPath(vector<vector<int>>& grid, int& nRow, int& nCol, int currRow, int currCol){
    if(currRow == nRow-1 && currCol == nCol-1){
        return grid[currRow][currCol];
    }

    int goRight = INT_MAX, goLeft = INT_MAX;
    if(currRow+1 != nRow){
        goRight = minPath(grid, nRow, nCol, currRow+1, currCol);
    }
    if(currCol+1 != nCol){
        goLeft = minPath(grid, nRow, nCol, currRow, currCol+1);
    }
    return grid[currRow][currCol] + min(goRight, goLeft);
}

int minPathSum(vector<vector<int>>& grid) {
    int nRow = grid.size();
    if(nRow == 0){
        return 0;
    }
    int nCol = grid[0].size();
    return minPath(grid, nRow, nCol, 0, 0);
}

int main(){
    vector<vector<int>> grid = 
    {{1,3,1},
    {1,5,1},
    {4,2,1}};

    cout<<minPathSum(grid);

    return 0;
}