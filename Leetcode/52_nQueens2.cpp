#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<char>>& board, int n, int row, int col){
    //Vertical Check
    for(int i=0; i<row; i++){
        if(board[i][col] == 'Q'){
            return false;
        }
    }

    //Left Diagonal Check
    for(int i=row-1, j=col-1; i>=0 && j>=0; i--, j--){
        if(board[i][j] == 'Q'){
            return false;
        }
    }
    
    //Right Diagonal Check
    for(int i=row-1, j=col+1; i>=0 && j<n; i--, j++){
        if(board[i][j] == 'Q'){
            return false;
        }
    }

    return true;
}

void nQueens(vector<vector<char>>& board, int n, int row, int& count){
    if(row == n){
        count++;
        return;
    }
    
    for(int col=0; col<n; col++){
        if(isSafe(board, n , row, col)){
            board[row][col] = 'Q';
            nQueens(board, n, row+1, count);
            board[row][col] = '.';
        }
    }
}

int totalNQueens(int n) {
    vector<vector<char>> board(n, vector<char>(n, '.'));
    int count = 0;
    nQueens(board, n, 0, count);
    return count;
}

int main(){
    cout<<totalNQueens(4);

    return 0;
}