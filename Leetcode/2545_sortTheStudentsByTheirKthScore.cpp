#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<int, int>& p1, pair<int, int>& p2){
    return (p1.second > p2.second);
}

vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
    int nRows = score.size(), nCols = 0;
    if(!nRows){
        return score;
    }
    nCols = score[0].size();

    vector<vector<int>> cpy(score);
    vector<pair<int,int>> track;

    for(int row=0; row<nRows; row++){
        for(int col=0; col<nCols; col++){
            if(col == k){
                track.emplace_back(row, score[row][col]);
            }
        }
    }

    sort(track.begin(), track.end(), comp);

    for(int i=0; i<nRows; i++){
        score[i] = cpy[track[i].first];
    }
    return score;
}

int main(){

    return 0;
}