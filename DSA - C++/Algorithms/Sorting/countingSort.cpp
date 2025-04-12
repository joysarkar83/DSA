#include <iostream>
#include <vector>
#include <climits>
using namespace std;

//create a temp array that stores the freq of elems in main array; then changes the main array and puts elems, freq no. of times

void countingSortAscending(vector<int> &nums){
    int minVal = INT_MAX, maxVal = INT_MIN;     //Figuring out the max and min values for proper ranging
    for(int i=0; i<nums.size(); i++){
        maxVal = max(maxVal, nums[i]);
        minVal = min(minVal, nums[i]);
    }

    int freq[maxVal+1] = {0};                   //Creating the frequency array
    for(int i=0; i<nums.size(); i++){
        freq[nums[i]]++;
    }

    for(int i=minVal, numsIndex = 0; i<=maxVal; i++){       //Modifying the main array as per the freq array
        while(freq[i]>0){
            nums[numsIndex++]=i;
            freq[i]--;
        }
    }
}

int main(){
    vector<int> nums = {1,2,3,2,1,4,3};
    
    countingSortAscending(nums);

    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<"\t";
    }
    return 0;
}