#include <iostream>
#include <vector>
using namespace std;

//Time Limit Exceeded
int minimumTotalHelper(vector<vector<int>>& triangle, int row, int col){
    if(row == triangle.size()-1) return triangle[row][col];
    int left = minimumTotalHelper(triangle, row+1, col);
    int right = minimumTotalHelper(triangle, row+1, col+1);

    return triangle[row][col] + min(left, right);
}

int minimumTotal(vector<vector<int>>& triangle) {
    if(triangle.empty()) return 0;
    return minimumTotalHelper(triangle, 0, 0);
}

int main(){

    return 0;
}