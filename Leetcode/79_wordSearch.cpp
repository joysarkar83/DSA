#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool wordSearch(vector<vector<char>>& board, string& word, int currIndex, int m, int n, int row, int col){
    if(currIndex == word.size()){
        return true;
    }

    char temp = board[row][col];
    board[row][col] = '#';

    //Search Right
    if((col+1 < n) && (board[row][col+1] == word[currIndex])){
        if(wordSearch(board, word, currIndex+1, m, n, row, col+1)){
            board[row][col] = temp;
            return true;
        }
    }
    //Search Left
    if((col-1 >= 0) && (board[row][col-1] == word[currIndex])){
        if(wordSearch(board, word, currIndex+1, m, n, row, col-1)){
            board[row][col] = temp;
            return true;
        }
    }
    
    //Search Top
    if((row-1 >= 0) && (board[row-1][col] == word[currIndex])){
        if(wordSearch(board, word, currIndex+1, m, n, row-1, col)){
            board[row][col] = temp;
            return true;
        }
    }
    
    //Search Bottom
    if((row+1 < m) && (board[row+1][col] == word[currIndex])){
        if(wordSearch(board, word, currIndex+1, m, n, row+1, col)){
            board[row][col] = temp;
            return true;
        }
    }
    board[row][col] = temp;
    return false;
}

bool exist(vector<vector<char>>& board, string& word) {
    int m=board.size(), n=board[0].size();
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(board[i][j] == word[0]){
                if(wordSearch(board, word, 1, m, n, i, j)){
                    return true;
                }
            }
        }
    }
    return false;
}

int main(){
    string word = "ABCCED";
    vector<vector<char>> board = {
        {'A','B','C','E'},
        {'S','F','C','S'},
        {'A','D','E','E'}
    };

    cout<<exist(board, word);

    return 0;
}