#include <iostream>
#include <vector>
using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid){
    int rowSize = grid[0].size();
    int maxNum = rowSize*rowSize;

    vector<int> hashmap(maxNum+1, 0);

    for(int rowIdx=0; rowIdx<rowSize; rowIdx++){
        for(int colIdx=0; colIdx<rowSize; colIdx++){
            hashmap[grid[rowIdx][colIdx]]+=1;
        }
    }

    vector<int> result(2);
    for(int i=1; i<maxNum+1; i++){
        if(hashmap[i] == 2){
            result[0] = i;
        }
        else if(hashmap[i] == 0){
            result[1] = i;
        }
    }

    return result;
}

int main(){

    vector<vector<int>> grid = {{9,1,7},{8,9,2},{3,4,6}};

    vector<int> res = findMissingAndRepeatedValues(grid);

    for(int i:res){
        cout<<i<<" ";
    }

    return 0;
}