#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
    int n = grid.size();
    int row = n - 1, col = 0;

    while (row >= 0) {
        int currRow = row, currCol = col;
        vector<int> currDiagonal;
        while (currRow < n && currCol < n) {
            currDiagonal.emplace_back(grid[currRow++][currCol++]);
        }
        
        sort(currDiagonal.begin(), currDiagonal.end(), greater<int>());
        
        int idx = 0;
        currRow = row, currCol = col;
        while (currRow < n && currCol < n) {
            grid[currRow++][currCol++] = currDiagonal[idx++];
        }
        row--;
    }
    
    row = 0;
    col = 1;

    while (col < n) {
        int currRow = row, currCol = col;
        vector<int> currDiagonal;
        while (currRow < n && currCol < n) {
            currDiagonal.emplace_back(grid[currRow++][currCol++]);
        }

        sort(currDiagonal.begin(), currDiagonal.end());

        int idx = 0;
        currRow = row, currCol = col;
        while (currRow < n && currCol < n) {
            grid[currRow++][currCol++] = currDiagonal[idx++];
        }
        col++;
    }
    return grid;
}

int main(){
    
}