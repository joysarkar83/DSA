#include <iostream>
#include <vector>
#include <string>
using namespace std;

void print2dVector(vector<vector<string>>& collection){
    for(vector<string> grid:collection){
        for(string line:grid){
            cout<<line<<"\n";
        }
        cout<<"------------\n";
    }
    return;
}

bool isSafe(vector<string>& board, int n, int row, int col){
    //Vertical Check
    for(int i=0; i<row; i++){
        if(board[i][col] == 'Q'){
            return false;
        }
    }
    
    //Left Diagonal Check
    for(int i=row, j=col; i>=0 && j>=0; i--, j--){
        if(board[i][j] == 'Q'){
            return false;
        }
    }

    //Right Diagonal Check
    for(int i=row, j=col; i>=0 && j<n; i--, j++){
        if(board[i][j] == 'Q'){
            return false;
        }
    }
    return true;
}

void nQueens(vector<string>& board, int n, int row, vector<vector<string>>& collection){
    if(n == row){
        collection.push_back(board);
        return;
    }

    for(int col=0; col<n; col++){
        if(isSafe(board, n, row, col)){
            board[row][col] = 'Q';
            nQueens(board, n, row+1, collection);
            board[row][col] = '.';
        }
    }
}

vector<vector<string>> solveNQueens(int n) {
    string emptyRow(n, '.');

    vector<string> board;
    for(int i=0; i<n; i++){
        board.push_back(emptyRow);
    }

    vector<vector<string>> collection;
    nQueens(board, n, 0, collection);

    return collection;
}

int main(){
    int n = 4;

    vector<vector<string>> collection = solveNQueens(n);

    print2dVector(collection);

    return 0;
}