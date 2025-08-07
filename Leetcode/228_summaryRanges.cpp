#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

vector<string> summaryRanges(vector<int>& nums) {
    int n = nums.size();
    if(n == 0) return {};

    vector<string> ranges;
    queue<int> track;
    
    int i = 0;
    while(i < n){
        int curr = nums[i];
        if(track.empty()) {
            track.push(curr);
        }
        else if(track.back() == curr-1){
            track.push(curr);
        }
        else{
            string st = to_string(track.front());
            string end = to_string(track.back());

            if(st == end){
                ranges.emplace_back(st);
            }
            else{
                ranges.push_back(st + "->" + end);
            }
            while(!track.empty()) track.pop();
            track.push(curr);
        }
        i++;
    }
    
    if(!track.empty()){
        string st = to_string(track.front());
        string end = to_string(track.back());
        
        if(st == end){
            ranges.emplace_back(st);
        }
        else{
            ranges.push_back(st + "->" + end);
        }   
    }
    return ranges;
}

int main(){
    vector<int> nums = {0,1,2,4,5,7};

    vector<string> ranges = summaryRanges(nums);

    for(string i:ranges){
        cout<<i<<"\n";
    }
    return 0;
}