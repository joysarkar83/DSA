#include <iostream>
#include <vector>
// #include <iostream>
using namespace std;

int trap(vector<int>& height) {
    int n = height.size();
    vector<int> leftHighest(n), rightHighest(n);
    leftHighest[0] = rightHighest[n-1] = 0;

    for(int i=1; i<n; i++){
        leftHighest[i] = max(leftHighest[i-1], height[i-1]);
    }

    for(int i=n-2; i>=0; i--){
        rightHighest[i] = max(rightHighest[i+1], height[i+1]);
    }

    int water = 0;
    for(int i=0; i<n; i++){
        int val = min(leftHighest[i], rightHighest[i]) - height[i];
        if(val >= 1){
            water += val;
        }
    }

    return water;
}

int main(){
    vector<int> height = {4,2,0,3,2,5};

    cout<<trap(height);

    return 0;
}