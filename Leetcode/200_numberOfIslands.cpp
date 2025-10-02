#include <iostream>
#include <vector>
using namespace std;

void numIslandsHelper(int& n, int currRow, int currCol, int& nRows, int& nCols, vector<vector<char>>& grid){
    if(currRow >= nRows || currCol >= nCols || currRow < 0 || currCol < 0){
        return;
    }
    if (grid[currRow][currCol] != '1'){
        return;
    }

    grid[currRow][currCol] = '0';

    // Go Right
    numIslandsHelper(n, currRow, currCol+1, nRows, nCols, grid);

    // Go Left
    numIslandsHelper(n, currRow, currCol-1, nRows, nCols, grid);

    // Go Up
    numIslandsHelper(n, currRow-1, currCol, nRows, nCols, grid);

    // Go Down
    numIslandsHelper(n, currRow+1, currCol, nRows, nCols, grid);
}

int numIslands(vector<vector<char>>& grid) {
    int n = 0;
    int nRows = grid.size(), nCols = 0;
    if(nRows != 0){
        nCols = grid[0].size();
    }

    for(int i=0; i<nRows; i++){
        for(int j=0; j<nCols; j++){
            if(grid[i][j] == '1'){
                n++;
                numIslandsHelper(n, i, j, nRows, nCols, grid);
            }
        }
    }
    return n;
}

int main(){

    return 0;
}