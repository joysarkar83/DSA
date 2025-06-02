#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(int target, vector<int> numbers){
    vector<int> pair(2, -1);
    //Two Pointer approach
    int start=0, end=numbers.size()-1;
    while(start<end){
        if(numbers[start]+numbers[end]==target){
            pair[0]=start;
            pair[1]=end;
            return pair;
        }else if(numbers[start]+numbers[end]<target){
            start++;
        }else{
            end--;
        }
    }
    return pair;
}

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 18;
    vector<int> indices = pairSum(target, nums);

    for(int i=0; i<indices.size(); i++){
        cout<<indices[i]<<" ";
    }


    return 0;
}