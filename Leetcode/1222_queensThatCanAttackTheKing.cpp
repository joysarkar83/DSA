#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

struct hash_pair {
    size_t operator()(const pair<int,int>& p) const {
        return hash<int>()(p.first) ^ (hash<int>()(p.second) << 1);
    }
};

vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
    int nRows = 8, nCols = 8;
    vector<vector<int>> res;
    unordered_set<pair<int,int>, hash_pair> q;
    for(auto &queen : queens){
        q.insert({queen[0], queen[1]});
    }

    for(int kingX = king[0]-1, kingY = king[1]-1; kingX>=0 && kingY>=0; kingX--, kingY--){
        if(q.find({kingX, kingY}) != q.end()){
            res.push_back({kingX, kingY});
            break;
        }
    }
    for(int kingX = king[0]+1, kingY = king[1]+1; kingX<nCols && kingY<nRows; kingX++, kingY++){
        if(q.find({kingX, kingY}) != q.end()){
            res.push_back({kingX, kingY});
            break;
        }
    }
    for(int kingX = king[0]+1, kingY = king[1]-1; kingX<nCols && kingY>=0; kingX++, kingY--){
        if(q.find({kingX, kingY}) != q.end()){
            res.push_back({kingX, kingY});
            break;
        }
    }
    for(int kingX = king[0]-1, kingY = king[1]+1; kingX>=0 && kingY<nRows; kingX--, kingY++){
        if(q.find({kingX, kingY}) != q.end()){
            res.push_back({kingX, kingY});
            break;
        }
    }


    for(int kingX = king[0]-1; kingX>=0; kingX--){
        if(q.find({kingX, king[1]}) != q.end()){
            res.push_back({kingX, king[1]});
            break;
        }
    }
    for(int kingX = king[0]+1; kingX<nCols; kingX++){
        if(q.find({kingX, king[1]}) != q.end()){
            res.push_back({kingX, king[1]});
            break;
        }
    }

    for(int kingY = king[1]-1; kingY>=0; kingY--){
        if(q.find({king[0], kingY}) != q.end()){
            res.push_back({king[0], kingY});
            break;
        }
    }
    for(int kingY = king[1]+1; kingY<nRows; kingY++){
        if(q.find({king[0], kingY}) != q.end()){
            res.push_back({king[0], kingY});
            break;
        }
    }
    return res;
}

int main(){

}