#include <iostream>
#include <vector>
using namespace std;

int kid1(vector<vector<int>>& fruits, int currRow, int currCol, int end, int pathSum, int remMoves){
    if(remMoves == 0){
        if((currRow != end) || (currCol != end)) return pathSum;
    }
    if((currRow == end) && (currCol == end)){
        if(remMoves != 0) return pathSum;
    }

    int currVal = fruits[currRow][currCol];
    pathSum += currVal;
    fruits[currRow][currCol] = 0;
    remMoves-=1;

    int way1 = 0, way2 = 0, way3 = 0;

    if(currRow+1<=end && currCol+1<=end){
        way1 = kid1(fruits, currRow+1, currCol+1, end, pathSum, remMoves);
    }
    if(currCol+1<=end){
        way2 = kid1(fruits, currRow, currCol+1, end, pathSum, remMoves);
    }
    if(currRow+1<=end){
        way3 = kid1(fruits, currRow+1, currCol, end, pathSum, remMoves);
    }
    remMoves++;
    fruits[currRow][currCol] = currVal;

    return max(way1, max(way2, way3));
}

int kid2(vector<vector<int>>& fruits, int currRow, int currCol, int end, int pathSum, int remMoves){
    if(remMoves == 0){
        if((currRow != end) || (currCol != end)) return pathSum;
    }
    if((currRow == end) && (currCol == end)){
        if(remMoves != 0) return pathSum;
    }

    int currVal = fruits[currRow][currCol];
    pathSum += currVal;
    fruits[currRow][currCol] = 0;
    remMoves-=1;

    int way1 = 0, way2 = 0, way3 = 0;

    if(currRow+1<=end && currCol-1>=0){
        way1 = kid2(fruits, currRow+1, currCol-1, end, pathSum, remMoves);
    }
    if(currRow+1<=end){
        way2 = kid2(fruits, currRow+1, currCol, end, pathSum, remMoves);
    }
    if(currRow+1<=end && currCol+1<=end){
        way3 = kid2(fruits, currRow+1, currCol+1, end, pathSum, remMoves);
    }
    remMoves++;
    fruits[currRow][currCol] = currVal;

    return max(way1, max(way2, way3));
}

int kid3(vector<vector<int>>& fruits, int currRow, int currCol, int end, int pathSum, int remMoves){
    if(remMoves == 0){
        if((currRow != end) || (currCol != end)) return pathSum;
    }
    if((currRow == end) && (currCol == end)){
        if(remMoves != 0) return pathSum;
    }

    int currVal = fruits[currRow][currCol];
    pathSum += currVal;
    fruits[currRow][currCol] = 0;
    remMoves-=1;

    int way1 = 0, way2 = 0, way3 = 0;

    if(currRow-1>=0 && currCol+1<=end){
        way1 = kid3(fruits, currRow-1, currCol+1, end, pathSum, remMoves);
    }
    if(currCol+1<=end){
        way2 = kid3(fruits, currRow, currCol+1, end, pathSum, remMoves);
    }
    if(currRow+1<=end && currCol+1<=end){
        way3 = kid3(fruits, currRow+1, currCol+1, end, pathSum, remMoves);
    }
    remMoves++;
    fruits[currRow][currCol] = currVal;

    return max(way1, max(way2, way3));
}


int maxCollectedFruits(vector<vector<int>>& fruits) {
    int nMoves = fruits.size()-1;

    int nFruits1 = kid1(fruits, 0, 0, nMoves, 0, nMoves+1);
    int nFruits2 = kid2(fruits, 0, nMoves, nMoves, 0, nMoves+1);
    int nFruits3 = kid3(fruits, nMoves, 0, nMoves, 0, nMoves+1);
    
    return nFruits1 + nFruits2 + nFruits3;
}

int main(){

    return 0;
}
