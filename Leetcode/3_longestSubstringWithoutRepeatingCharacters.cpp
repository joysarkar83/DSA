#include <iostream>
using namespace std;

int lengthOfLongestSubstring(string s){
    int n = s.size(), count = 0;
    vector<int> track;
    for(int i=0; i<n-1; i++){
        for(int j=i; j<n; j++){
            track[(int)s[j]]++;
            
            if(s[i] == s[j]){
                currCount = 1;
                break;
            }
            else if((int)s[j] <= 1)



        }
    }
}

int main(){

    return 0;
}