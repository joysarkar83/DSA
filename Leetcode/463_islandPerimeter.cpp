#include <iostream>
#include <vector>
using namespace std;

// bool calculateLand(vector<vector<int>>& grid, int& nRow, int& nCol, int r, int c, int& perimeter){
//     if(r >= nRow || c >= nCol || r<0 || c<0 || grid[r][c] == 0){
//         return;
//     }

//     grid[r][c] = 0;
//     perimeter++;

//     calculateLand(grid, nRow, nCol, r+1, c, perimeter);
//     calculateLand(grid, nRow, nCol, r-1, c, perimeter);
//     calculateLand(grid, nRow, nCol, r, c+1, perimeter);
//     calculateLand(grid, nRow, nCol, r, c-1, perimeter);
// }

int islandPerimeter(vector<vector<int>>& grid) {
    int nRow = grid.size(), nCol = grid[0].size();

    //Find the initial block of land;
    int perimeter = 0;

    for(int r = 0; r<nRow; r++){
        for(int c = 0; c<nCol; c++){
            if(grid[r][c] == 1){
                perimeter += 4;
                if(c-1>=0 && grid[r][c-1] == 1){
                    perimeter -= 1;
                }
                if(c+1<nCol && grid[r][c+1] == 1){
                    perimeter -= 1;
                }
                if(r-1>=0 && grid[r-1][c] == 1){
                    perimeter -= 1;
                }
                if(r+1<nRow && grid[r+1][c] == 1){
                    perimeter -= 1;
                }
            }
        }
    }
    
    return perimeter;
}

int main(){
    vector<vector<int>> grid = {{0,1,0,0},
{1,1,1,0},
{0,1,0,0},
{1,1,0,0}};

    cout<<islandPerimeter(grid);


    return 0;
}