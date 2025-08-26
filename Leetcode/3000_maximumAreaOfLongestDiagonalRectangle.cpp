#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
    int n = dimensions.size();

    float maxAr = 0, maxDiag = 0;
    unordered_map<float, float> diag_area;

    for(int i=0;i<n; i++){
        int l=dimensions[i][0], b=dimensions[i][1];

        float currDiagSq = (l*l) + (b*b);
        float currAr = l * b;

        if(currDiagSq > maxDiag){
            maxDiag = currDiagSq;
            maxAr = currAr;
        }
        else if(currDiagSq == maxDiag){
            maxAr = max(maxAr, currAr);

        }
    }
    return maxAr;
}

int main(){

    return 0;
}