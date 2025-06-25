#include <iostream>
#include <vector>
using namespace std;

void printBoard(vector<vector<int>>& track){
    for(vector<int> i:track){
        for(int j:i){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return;
}

void knightsTour(vector<vector<int>>& track, int n, int moveNum, int row, int col, bool& solnFound){
    if(solnFound){
        return;
    }
    
    if(moveNum == (n*n)-1){
        track[0][0] = 0;
        solnFound = true;
        printBoard(track);
        return;
    }
    
    //Right Bottom
    if(row<n-1 && col<n-2){
        if(track[row+1][col+2] == 0){
            track[row+1][col+2] = moveNum+1;
            knightsTour(track, n, moveNum+1, row+1, col+2, solnFound);
            track[row+1][col+2] = 0;
        }
    }

    //Right Top
    if(row>0 && col<n-2){
        if(track[row-1][col+2] == 0){
            track[row-1][col+2] = moveNum+1;
            knightsTour(track, n, moveNum+1, row-1, col+2, solnFound);
            track[row-1][col+2] = 0;
        }
    }
    
    //Top Right
    if(row>1 && col<n-1){
        if(track[row-2][col+1] == 0){
            track[row-2][col+1] = moveNum+1;
            knightsTour(track, n, moveNum+1, row-2, col+1, solnFound);
            track[row-2][col+1] = 0;
        }
    }
    
    //Top Left
    if(row>1 && col>0){
        if(track[row-2][col-1] == 0){
            track[row-2][col-1] = moveNum+1;
            knightsTour(track, n, moveNum+1, row-2, col-1, solnFound);
            track[row-2][col-1] = 0;
        }
    }
    
    //Left Bottom
    if(col>1 && row<n-1){
        if(track[row+1][col-2] == 0){
            track[row+1][col-2] = moveNum+1;
            knightsTour(track, n, moveNum+1, row+1, col-2, solnFound);
            track[row+1][col-2] = 0;
        }
    }
    
    //Left Top
    if(col>1 && row>0){
        if(track[row-1][col-2] == 0){
            track[row-1][col-2] = moveNum+1;
            knightsTour(track, n, moveNum+1, row-1, col-2, solnFound);
            track[row-1][col-2] = 0;
        }
    }
    
    //Bottom Right
    if(row<n-2 && col<n-1){
        if(track[row+2][col+1] == 0){
            track[row+2][col+1] = moveNum+1;
            knightsTour(track, n, moveNum+1, row+2, col+1, solnFound);
            track[row+2][col+1] = 0;
        }
    }
    
    //Bottom Left
    if(row<n-2 && col>0){
        if(track[row+2][col-1] == 0){
            track[row+2][col-1] = moveNum+1;
            knightsTour(track, n, moveNum+1, row+2, col-1, solnFound);
            track[row+2][col-1] = 0;
        }
    }
}

int main(){
    int n = 8;
    vector<vector<int>> track(n, vector<int>(n, 0));
    track[0][0] = 1;
    bool solnFound = false;
    
    knightsTour(track, n, 0, 0, 0, solnFound);

    return 0;
}