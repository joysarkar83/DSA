#include <iostream>
#include <vector>
using namespace std;

int rainwaterStored(vector<int> height){
    int total = 0, n=height.size();

    //Vector that stores the highest block to the left of the current block
    vector<int> leftHighest(n);
    leftHighest[0] = 0;
    
    for(int i=1; i<n; i++){
        leftHighest[i] = max(leftHighest[i-1], height[i-1]);
    }
    
    //Vector that stores the highest block to the right of the current block
    vector<int> rightHighest(n);
    rightHighest[n-1] = 0;
    
    for(int i=n-2; i>=0; i--){
        rightHighest[i] = max(rightHighest[i+1], height[i+1]);
    }
    
    //To calculate the amount of water
    for(int i=0; i<n; i++){
        int water = min(leftHighest[i], rightHighest[i]) - height[i];
        if (water>0){
            total+=water;
        }
    }
    
    return total;
}

int main(){
    // vector<int> heights = {4,2,0,3,2,5};
    vector<int> heights = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<rainwaterStored(heights);
    return 0;
}