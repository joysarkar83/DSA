#include <iostream>
#include <vector>
using namespace std;

void gameOfLife(vector<vector<int>>& board) {
    int nRows = board.size(), nCols = board[0].size();

    vector<vector<int>> myBoard;

    //Preparing my vector
    myBoard.emplace_back(vector<int>(nCols+2, 0));
    for(int i=0; i<nRows; i++){
        vector<int> currRow;
        currRow.emplace_back(0);
        for(int j=0; j<nCols; j++){
            currRow.emplace_back(board[i][j]);
        }
        currRow.emplace_back(0);
        myBoard.emplace_back(currRow);
    }
    myBoard.emplace_back(vector<int>(nCols+2, 0));

    //Main solution
    for(int i=1; i<nRows+1; i++){
        for(int j=1; j<nCols+1; j++){
            int count = 0;

            //Top Row
            for(int r=i-1, c=j-1; c<j+2; c++){
                count += myBoard[r][c];
            }

            //Bottom Row
            for(int r=i+1, c=j-1; c<j+2; c++){
                count += myBoard[r][c];
            }

            //Left and Right
            count += myBoard[i][j-1];
            count += myBoard[i][j+1];

            if(count < 2 || count > 3){
                board[i-1][j-1] = 0;
            }
            else if((board[i-1][j-1] == 0) && (count == 3)){
                board[i-1][j-1] = 1;
            }
        }
    }
}

int main(){

    return 0;
}