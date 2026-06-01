#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    vector<int> heights(n+1, 0);
    for(int i = 1; i<=n; i++){
        cin >> heights[i];
    }

    int minHeightDiff = INT_MAX, minHeightDiffIdx = -1;

    for(int i=1; i<n; i++){
        int currHeightDiff = abs(heights[i] - heights[i+1]);
        if(currHeightDiff < minHeightDiff){
            minHeightDiff = currHeightDiff;
            minHeightDiffIdx = i;
        }
    }
    if(abs(heights[n] - heights[1]) < minHeightDiff){
        minHeightDiff = abs(heights[n] - heights[1]);
        minHeightDiffIdx = n;
    }

    if(minHeightDiffIdx == n){
        cout<<minHeightDiffIdx<<" "<<1;
    }else{
        cout<<minHeightDiffIdx<<" "<<minHeightDiffIdx+1;
    }
    return 0;
}