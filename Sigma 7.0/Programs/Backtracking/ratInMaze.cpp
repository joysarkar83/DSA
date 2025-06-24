#include <iostream>
#include <vector>
#include <string>
using namespace std;

void possiblePaths(vector<vector<int>>& maze, int row, int col, string& path){
    int n = maze.size();
    if(row == n-1 && col == n-1){
        cout<<path<<"\n";
        return;
    }

    if(col+1<n && maze[row][col+1] == 1){
        path.push_back('R');
        possiblePaths(maze, row, col+1, path);
        path.pop_back();
    }
    
    if(row+1<n && maze[row+1][col] == 1){
        path.push_back('D');
        possiblePaths(maze, row+1, col, path);
        path.pop_back();
    }
}

int main(){
    vector<vector<int>> maze = {{ 1, 0, 0, 0 },
                                { 1, 1, 0, 1 },
                                { 1, 1, 0, 0 },
                                { 0, 1, 1, 1 }};
    string path = "";
    possiblePaths(maze, 0, 0, path);
    return 0;
}