#include <iostream>
#include <vector>
using namespace std;

void printBoard(vector<vector<char>>& board){
    int n = board.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<board[i][j]<<" ";
        }
        cout<<"\n";
    }
    return;
}

void nQueensAllCombinations(vector<vector<char>> board, int n, int col){
    if(col == n){
        printBoard(board);
        cout<<"-----------------------\n";
        return;
    }

    for(int i=0; i<n; i++){
        board[i][col] = 'Q';
        nQueensAllCombinations(board, n, col+1);
        board[i][col] = '.';
    }
    return;
}

int main(){
    int nRows = 3; 
    vector<vector<char>> board(nRows, vector<char>(nRows, '.'));

    nQueensAllCombinations(board, nRows, 0);

    return 0;
}