#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void spread(queue<pair<int, int>>& q, pair<int, int>& rottenIdx, vector<vector<int>>& grid){
    int i = rottenIdx.first;
    int j = rottenIdx.second;

    // UP
    if(i-1>=0 && grid[i-1][j]==1){
        grid[i-1][j]=2;
        q.push({i-1, j});
    }

    // DOWN
    if(i+1<grid.size() && grid[i+1][j]==1){
        grid[i+1][j]=2;
        q.push({i+1, j});
    }

    // LEFT
    if(j-1>=0 && grid[i][j-1]==1){
        grid[i][j-1]=2;
        q.push({i, j-1});
    }

    // RIGHT
    if(j+1<grid[0].size() && grid[i][j+1]==1){
        grid[i][j+1]=2;
        q.push({i, j+1});
    }
}

int orangesRotting(vector<vector<int>>& grid) {
    queue<pair<int, int>> q;
    int nRows = grid.size(), nCols = grid[0].size();

    for(int i=0; i<nRows; i++){
        for(int j=0; j<nCols; j++){
            if(grid[i][j] == 2){
                q.push({i,j});
            }
        }
    }
    
    int res = -1;
    int turn = q.size();
    while(!q.empty()){
        for(int i=0; i<turn; i++){
            spread(q, q.front(), grid);
            q.pop();
        }
        turn = q.size();
        res++;
    }
    
    for(int i=0; i<nRows; i++){
        for(int j=0; j<nCols; j++){
            if(grid[i][j] == 1){
                return -1;
            }
        }
    }

    if(res == -1) return 0;
    return res;
}

int main(){

    return 0;
}