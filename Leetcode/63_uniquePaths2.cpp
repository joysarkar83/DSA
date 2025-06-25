#include <iostream>
#include <vector>
using namespace std;

//Solve after learning Dynamic Programming

//Time Limit Exceeded
void possiblePaths(vector<vector<int>>& maze, int m, int n, int row, int col, int& count){
    if(maze[row][col] == 1){
        return;
    }
    if(row == m-1 && col == n-1){
        count++;
        return;
    }
    if(row+1<m && maze[row+1][col] == 0){
        possiblePaths(maze, m, n, row+1, col, count);
    }
    if(col+1<n && maze[row][col+1] == 0){
        possiblePaths(maze, m, n, row, col+1, count);
    }
}

int uniquePathsWithObstacles(vector<vector<int>>& maze) {
    int count = 0, m = maze.size(), n = maze[0].size();
    possiblePaths(maze, m, n, 0, 0, count);
    return count;
}

int main(){
    vector<vector<int>> maze = {{ 1 }};
    cout<<uniquePathsWithObstacles(maze);
    return 0;
}