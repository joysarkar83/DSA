#include <iostream>
#include <vector>
using namespace std;

void changeColor(vector<vector<int>>& currState, int& totalRows, int& totalCols, int currRow, int currCol, int& initialColor, int& finalColor){
    if(currRow < 0 || currRow >= totalRows || currCol < 0 || currCol >= totalCols){
        return;
    }

    if(currState[currRow][currCol] != initialColor || currState[currRow][currCol] == finalColor) return;

    currState[currRow][currCol] = finalColor;

    changeColor(currState, totalRows, totalCols, currRow-1, currCol, initialColor, finalColor);    //goes up
    changeColor(currState, totalRows, totalCols, currRow, currCol+1, initialColor, finalColor);    //goes right
    changeColor(currState, totalRows, totalCols, currRow, currCol-1, initialColor, finalColor);    //goes left
    changeColor(currState, totalRows, totalCols, currRow+1, currCol, initialColor, finalColor);    //goes down
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    int nRow = image.size(), nCol;
    if(nRow!=0) nCol = image[0].size();
    
    int initColor = image[sr][sc];
    
    changeColor(image, nRow, nCol, sr, sc, initColor, color);
    

    return image;
}

int main(){
    vector<vector<int>> raw =  {
    {2, 2, 2},
    {2, 2, 0},
    {2, 0, 1}
};

    floodFill(raw, 1, 1, 2);

    for(int i=0; i<raw.size(); i++){
        for(int j=0; j<raw[0].size(); j++){
            cout<<raw[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}