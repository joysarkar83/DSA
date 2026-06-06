#include <iostream>
#include <vector>
using namespace std;

int helper(int r, int c, int& nRows, int& nCols, vector<vector<int>>& dp) {
        if (r == nRows - 1 && c == nCols - 1) {
            return 1;
        }

        if (dp[r][c] != -1) {
            return dp[r][c];
        }

        int goRight = 0, goDown = 0;

        if (c < nCols - 1)
            goRight = helper(r, c + 1, nRows, nCols, dp);
        if (r < nRows - 1)
            goDown = helper(r + 1, c, nRows, nCols, dp);

        return dp[r][c] = goRight + goDown;
    }

    int uniquePaths(int& nRows, int& nCols) {
        vector<vector<int>> dp(101, vector<int>(101, -1));
        return helper(0, 0, nRows, nCols, dp);
    }

int main(){


    return 0;
}