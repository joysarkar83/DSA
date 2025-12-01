#include <iostream>
#include <vector>
using namespace std;

int numberOfPathsHelper(vector<vector<int>>& grid, int& k, int currRow, int currCol, int& nRows, int& nCols, int pathSum){
    pathSum += grid[currRow][currCol];

    if(currRow == nRows-1 && currCol == nCols-1){
        return (pathSum % k == 0);
    }

    int ways = 0;
    if(currRow < nRows-1){
        ways += numberOfPathsHelper(grid, k, currRow+1, currCol, nRows, nCols, pathSum);
    }
    if(currCol < nCols-1){
        ways += numberOfPathsHelper(grid, k, currRow, currCol+1, nRows, nCols, pathSum);
    }
    return ways;
}

int numberOfPaths(vector<vector<int>>& grid, int k) {
    int nRows = grid.size();
    if(!nRows){
        return 0;
    }
    int nCols = grid[0].size(), paths = 0, pathSum = 0;
    int currRow = 0, currCol = 0;
    return numberOfPathsHelper(grid, k, currRow, currCol, nRows, nCols, pathSum);
}

int main(){
    return 0;
}