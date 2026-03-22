#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool findRotation(vector<vector<int>>& mat1, vector<vector<int>>& target) {
    int n = mat1.size();

    if (mat1 == target) {
        return true;
    }
    vector<vector<int>> mat2(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mat2[j][i] = mat1[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        reverse(mat2[i].begin(), mat2[i].end());
    }
    if (mat2 == target) {
        return true;
    }
    vector<vector<int>> mat3(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mat3[j][i] = mat2[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        reverse(mat3[i].begin(), mat3[i].end());
    }
    if (mat3 == target) {
        return true;
    }
    vector<vector<int>> mat4(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mat4[j][i] = mat3[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        reverse(mat4[i].begin(), mat4[i].end());
    }
    if (mat4 == target) {
        return true;
    }

    return false;
}

int main(){
    return 0;
}