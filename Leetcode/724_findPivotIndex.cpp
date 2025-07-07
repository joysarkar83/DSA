#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>& vec){
    for(int i:vec){
        cout<<i<<" ";
    }
    cout<<"\n";
    return;
}

int pivotIndex(vector<int>& nums) {
    int n = nums.size();

    if(n == 0){
        return -1;
    }

    vector<int> leftSums(n, 0);
    leftSums[0] = nums[0];
    for(int i=1; i<n; i++){
        leftSums[i] = nums[i] + leftSums[i-1];
    }
    printVector(leftSums);
    
    
    vector<int> rightSums(n, 0);
    rightSums[n-1] = nums[n-1];
    for(int i=n-2; i>=0; i--){
        rightSums[i] = rightSums[i+1] + nums[i];
    }
    printVector(rightSums);

    for(int i=0; i<n; i++){
        if(rightSums[i] == leftSums[i]) return i;
    }

    return -1;
}

int main(){
    vector<int> vec = {1};

    cout<<pivotIndex(vec);

    return 0;
}