#include <iostream>
#include <vector>
using namespace std;

bool knightsTourConfig(vector<vector<int>>& grid, int& n, int currMove, int row, int col){
    if(currMove == n*n-1){
        return true;
    }

    //Right Top
    if(col+2 < n && row-1 >= 0 && grid[row-1][col+2] == currMove+1){
        if(knightsTourConfig(grid, n, currMove+1, row-1, col+2)){
            return true;
        }
    }
    
    
    //Right Bottom
    if(col+2 < n && row+1 < n && grid[row+1][col+2] == currMove+1){
        if(knightsTourConfig(grid, n, currMove+1, row+1, col+2)){
            return true;
        }
    }
    
    //Left Top
    if(col-2 >=0 && row-1 >= 0 && grid[row-1][col-2] == currMove+1){
        if(knightsTourConfig(grid, n, currMove+1, row-1, col-2)){
            return true;
        }
    }
    
    //Left Bottom
    if(col-2 >=0 && row+1 < n && grid[row+1][col-2] == currMove+1){
        if(knightsTourConfig(grid, n, currMove+1, row+1, col-2)){
            return true;
        }
    }
    
    //Top Right
    if(row-2 >= 0 && col+1 < n && grid[row-2][col+1] == currMove+1){
        if(knightsTourConfig(grid, n, currMove+1, row-2, col+1)){
            return true;
        }
    }
    
    //Top Left
    if(row-2 >= 0 && col-1 >= 0 && grid[row-2][col-1] == currMove+1){
        if(knightsTourConfig(grid, n, currMove+1, row-2, col-1)){
            return true;
        }
    }
    
    //Bottom Right
    if(row+2 < n && col+1 < n && grid[row+2][col+1] == currMove+1){
        if(knightsTourConfig(grid, n, currMove+1, row+2, col+1)){
            return true;
        }
    }
    
    //Bottom Left
    if(row+2 < n && col-1 >= 0 && grid[row+2][col-1] == currMove+1){
        if(knightsTourConfig(grid, n, currMove+1, row+2, col-1)){
            return true;
        }
    }
    return false;
}

bool checkValidGrid(vector<vector<int>>& grid){
    if(grid[0][0] != 0){
        return false;
    }
    int n = grid.size();
    if(knightsTourConfig(grid, n, 0, 0, 0)){
        return true;
    }
    return false;    
}

int main(){
    vector<vector<int>> grid = {
        {8,3,6},
        {5,0,1},
        {2,7,4}
    };

    cout<<checkValidGrid(grid);

    return 0;
}