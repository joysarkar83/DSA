#include <iostream>
#include <vector>
using namespace std;

void printBoard(vector<vector<char>>& board){
    int n = board.size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "-----------------------\n";
}

bool isSafe(vector<vector<char>>& board, int n, int row, int col){
    // Check vertical column
    for(int i = 0; i < row; i++){
        if(board[i][col] == 'Q') return false;
    }

    // Check upper-left diagonal
    for(int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--){
        if(board[i][j] == 'Q') return false;
    }

    // Check upper-right diagonal
    for(int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++){
        if(board[i][j] == 'Q') return false;
    }

    return true;
}

void nQueens(vector<vector<char>>& board, int n, int row){
    if(row == n){
        printBoard(board);
        return;
    }

    for(int col = 0; col < n; col++){
        if(isSafe(board, n, row, col)){
            board[row][col] = 'Q';
            nQueens(board, n, row + 1);
            board[row][col] = '.';  // Backtrack
        }
    }
}

int main(){
    int n = 4;
    vector<vector<char>> board(n, vector<char>(n, '.'));
    nQueens(board, n, 0);
    return 0;
}